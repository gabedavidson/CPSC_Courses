/*
Gabe Davidson
2338642
gadavidson@chapman.edu
CPSC 350-3
Assignment 1

Implementation file for the Model class.
Model class holds the model for translation between american english consonants and tut sounds on a letter by letter basis
*/

#include <iostream>
#include <string>
#include "Model.h"
using namespace std;

Model::Model(){
  isVowel = false;
  c = 'a';
}

Model::~Model(){
}

string Model::translateSingleCharacter(char _c){
  bool isCap;
  string translation;
  if (isupper(_c)){
    isCap = true;
  }
  else {
    isCap = false;
  }

  string s = "" + _c;
  s[0] = std::tolower(s[0]);
  // transform(s.begin(), s.end(), s.begin(), ::tolower);


  // c = s.tolower().at(0);
  c = s.at(0);

  if (c == 'b'){
    translation = "bub";
  }
  else if (c == 'c'){
    translation = "cash";
  }
  else if (c == 'd'){
    translation = "dud";
  }
  else if (c == 'f'){
    translation = "fuf";
  }
  else if (c == 'g'){
    translation = "gug";
  }
  else if (c == 'h'){
    translation = "hash";
  }
  else if (c == 'j'){
    translation = "jay";
  }
  else if (c == 'k'){
    translation = "kuck";
  }
  else if (c == 'l'){
    translation = "lul";
  }
  else if (c == 'm'){
    translation = "mum";
  }
  else if (c == 'n'){
    translation = "nun";
  }
  else if (c == 'p'){
    translation = "pub";
  }
  else if (c == 'q'){
    translation = "quack";
  }
  else if (c == 'r'){
    translation = "rug";
  }
  else if (c == 's'){
    translation = "sus";
  }
  else if (c == 't'){
    translation = "tut";
  }
  else if (c == 'v'){
    translation = "vuv";
  }
  else if (c == 'w'){
    translation = "wack";
  }
  else if (c == 'x'){
    translation = "ex";
  }
  else if (c == 'y'){
    translation = "yub";
  }
  else if (c == 'z'){
    translation = "zub";
  }
  else{
    translation = "error";
  }

  if (isCap){
    translation[0] = std::toupper(translation[0]);
  }
  return translation;

}

string Model::translateDoubleCharacter(char c){
  if (isupper(c)){
    return "Squat" + c;
  }
  else {
    return "squat" + c;
  }
}
