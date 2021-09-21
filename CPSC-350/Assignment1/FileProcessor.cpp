#include "FileProcessor.h"
#include "Translator.h"
#include <fstream>
#include <iostream>

using namespace std;

FileProcessor::FileProcessor(){
  Translator t;
}

FileProcessor::~FileProcessor(){
}

void FileProcessor::processFile(const string inFile, const string outFile){
  string inF = inFile;
  string outF = outFile;
  ofstream WriterFile(inFile);
  ifstream ReadFile(outFile);
  string text;

  if (ReadFile.is_open()){
    while (getline(ReadFile, text)){
      string text = t.translateEnglishSentence(text);
      WriterFile << text;
      //WriterFile << t.translateEnglishSentence(text);
    }
  }
}
