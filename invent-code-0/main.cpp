#include <iostream>
#include <string>
using namespace string;

int GetuserInput() {
}

int main() {
  int number = Input();
  int factorial = Factorial(number);

  cout << "The factorial of " << number << " is " << factorial << endl;

  return 0;
}
