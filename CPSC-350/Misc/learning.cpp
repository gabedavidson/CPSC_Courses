// Learning c++

// rich library (built in and automatic functions), object oriented, compiler based,
//  extensible, recursion, pointers!, structured, memory management

// necessities
#include <iostream>  // header file
using namespace std;  // namespace, allows grouping of numerous functions/classes under the same namespace

// main class
int main(){
  cout << "Hello world!";
  return 0;
}

// identifiers
// the names assigned to the variables/values/functions/arrays/etc...
int x = 10;

// derived data types (arrays, pointers, etc...)

// constans
const int _WIDTH = 3;
const int _HEIGHT = 4;

// 1D array
int foo[5]; // declares an empty array with 5 spaces
// int foo[5] = {1, 2, 3, 4, 5}; // fills array foo
int _foo[4] = {1, 2, 3}; // array can be filled for as many or less than the allotted spaces
int __foo[] = {1, 2, 3, 4, 5, 6}; // this declares and initializes an array with 6 spaces

// 2D array
int bar[1][3]; // declares a 2D array
int _bar[2][3] = {{1, 2, 3}, {2, 3, 4}}; // declares and initializes a 2D array

// 3D array
// when filling a multidimensional array, think horizontally. In _far, 2 spaces exist. Within each of those spaces, 3 spaces exist. Within each of those spaces, 4 spaces exist.
int far[1][2][3];
int _far[2][3][4] = {{{1, 2, 3, 4}, {2, 3, 4, 5}, {3, 4, 5, 6}}, {{4, 5, 6, 7}, {5, 6, 7, 8}, {6, 7, 8, 9}}}

// Filling a 1D array post declaration
int boo[3];
boo[0] = 1;
boo[1] = 2;
boo[2] = 3;

// filling a 1D array post declaration with a for loop
int fob[4];

for (int i = 0; i < fob.size(); ++i){
  fob[i] = i * 4;
  std::cout << fob[i] << endl;
}
