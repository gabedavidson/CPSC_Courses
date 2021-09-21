#include <iostream>

using namespace std;

// Have user input % numbers, calculate sum and average

int main(int argc, char **argv){
  int input;
  int sum;
  int iterations;
  int count = 1;
  double average;

  cout << "How many numbers would you like to input?: ";
  cin >> iterations;

  for (int i = 0; i < iterations; i++) {
    cout << "Input " << count << ": ";
    cin >> input;
    sum += input;
    count = count + 1;
  }

  average = static_cast<double>(sum) / iterations;

  cout << "The total sum is " << sum << endl;
  cout << "The average is " << average << endl;

  return 0;

}
