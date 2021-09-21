#include "FileProcessor.h"
// #include "Model.h"
// #include "Translator.h"
#include <iostream>
using namespace std;

int main(){
  FileProcessor processor;
  processor.processFile("infile.txt", "outfile.txt");
}
