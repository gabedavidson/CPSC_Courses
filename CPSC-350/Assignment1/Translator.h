/*
Gabe Davidson
2338642
gadavidson@chapman.edu
CPSC 350-3
Assignment 1

Header file for the Translator class.
Translator class holds the model for translation between american english consonants and tut sounds on a word by word basis
*/

#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include <iostream>
#include "Model.h"
using namespace std;

class Translator{
  private:
    Model mod;
    bool checkDoubleLetter(string w, int index);
    bool shouldTranslateInput(char c);
  public:
    Translator();  // constructor
    ~Translator();  // destructor
    string translateEnglishWord(string w);  //
    string translateEnglishSentence(string s);
};

#endif
