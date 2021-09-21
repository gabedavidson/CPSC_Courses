#include "Helloworld.h"

Helloworld::Helloworld(){
  message = "Hello world!";
}

Helloworld::~Helloworld(){
}

string Helloworld::giveMessage(){
  return message;
}
