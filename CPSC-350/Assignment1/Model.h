/*
Gabe Davidson
2338642
gadavidson@chapman.edu
CPSC 350-3
Assignment 1

Header file for the Model class.
Model class holds the model for translation between american english consonants and tut sounds on a letter by letter basis
*/

#ifndef MODEL_H
#define MODEL_H

#include <iostream>
using namespace std;

class Model{
  public:
    Model();
    ~Model();
    string translateSingleCharacter(char c);
    string translateDoubleCharacter(char c);
  private:
    bool shouldTranslateInput(char c);
    bool isVowel;
    char c;
};

#endif
