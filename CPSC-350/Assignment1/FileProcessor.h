
#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H

#include <iostream>
#include "Translator.h"
using namespace std;

class FileProcessor{
  private:
    Translator t;
  public:
    FileProcessor();
    ~FileProcessor();
    void processFile(string inFile, string outFile);

};

#endif
