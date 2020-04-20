#include <iostream>
#include <string>
using namespace std;

int NumLower(int value) {
    return value - 1;
}

int Factorial(int number) {
  if (number > 1) {
    int answer = number * (number - 1);
    return answer;
  } else {
    return number;
  }
}

int main() {
  int number;
  
  cout << "Enter a number: ";
  cin >> number;

 if (number > 0 && number <= 12) {
   int factorial = Factorial(number);
   cout << "The factorial of " << number << " is " << factorial << endl;
 } else if (number == 0) {
   cout << "The factorial of 0 is 1" << endl;
 } else {
   cout << "Error, value not allowed." << endl;
 }
  return 0;
}
