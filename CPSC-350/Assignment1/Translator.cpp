/*
Gabe Davidson
2338642
gadavidson@chapman.edu
CPSC 350-3
Assignment 1

Implementation file for the Translator class.
Translator class holds the model for translation between american english consonants and tut sounds on a word by word basis
*/

#include <iostream>
#include "Translator.h"
#include "Model.h"
using namespace std;

Translator::Translator(){
  Model mod;
}

Translator::~Translator(){
}

string Translator::translateEnglishWord(string w){
  string newWord = "";
  for (int i = 0; i < w.length(); ++i){
    if (shouldTranslateInput(w.at(i))){
      if (checkDoubleLetter(w, i)){
        newWord += mod.translateDoubleCharacter(w.at(i));
      }
      else {
        newWord += mod.translateSingleCharacter(w.at(i));
      }
    }
  }
  return newWord;
}

string Translator::translateEnglishSentence(string s){
  string newSentence = "";
  string tempWord = "";
  for (int i = 0; i < s.length(); ++i){
    if (s.at(i) == ' '){
      newSentence += translateEnglishWord(tempWord);
      tempWord = "";
    }
    else {
      tempWord += s.at(i);
    }
  }
}

bool Translator::checkDoubleLetter(string w, int index){
  try{
    if (w.at(index) == w.at(index + 1)){
      return true;
    }
    else{
      return false;
    }
  }
  catch(...){
    return false;
  }
}

bool Model::shouldTranslateInput(char c){
  isVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

  if (isVowel){
    return false;
  }
  else {
    return true;
  }
}
