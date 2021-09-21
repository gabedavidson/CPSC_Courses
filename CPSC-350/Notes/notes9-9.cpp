#include <iostream>
using namespace std;

/*
- Arrays
  - Ordered
  - Homogenous (Every value must have the same type)
  - Each individual value is called an element
  - Each element is identified by its position number in the array (index)
  - Not objects

  Declaring:
  - See learning.cpp

Data types:
  - int (4 bytes)
*/

void printarray(int arg[], int length){
  for (int i = 0; i < length; ++i){
    cout << arg[i] << ' '; cout << '\n';
  }
}

int main(){
  int firstarray[] = {5, 10, 15};
  int secondarray[] = {2, 4, 6, 7, 9};
  printarray(firstarray, 3);
  printarray(secondarray, 5);
  // delete [] firstarray;
  // delete [] secondarray;
}
