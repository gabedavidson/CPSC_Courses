#include <iostream>
using namespace std;

// void testOne(){
//   cout << "bacon and tomatoes\n";
// }
//
// int main(int argc, char **argv)
// {
//   std::cout << "Hello world\n" << endl;
//   testOne();
//
//   std::cin.get();
//
//   return 0;
// }

class Person{
  public:
    void setName(string name);
    string getName();
    Person();
    Person (string n); // constructor declaration
    ~Person();
  private:
    string name;
};

// constructors
Person::Person(){
  name = "John Doe";
  std::cout << name << endl;
}

Person::Person(string n): name(n) {
  std::cout << "Person created with name: " << name << endl;
  name = n;
}

// destructor
Person::~Person(){
  std::cout << "Object is being deleted" << endl;
}


void Person::setName(string n){
  name = n;
}

string Person::getName(){
  std::cout << name << endl;
  return name;
}

int main(){
  Person gabe("Gabe");

  gabe.getName();

  gabe.setName("Dave");

  gabe.getName();

  std::cin.get();

  return 0;
}
