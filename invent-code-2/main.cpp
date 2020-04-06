#include <iostream>
#include <string>
using namespace std;

int main() {
  int first_number = GetInputNumber();
  char operator = GetInputOperator();
  int second_number = GetInputNumber();

  int running_total = 0;
  if (operator == '+') {
    running_total = first_number + second_number;
  }
  if (operator == '%') {
    running_total = first_number % second_number;
  }
  cout << " = " << running_total << endl;

  operator = GetInputOperator();
  int third_number = GetInputNumber();
  if (operator == '*') {
    running_total = running_total * third_number;
  }
  if (operator == '/') {
    running_total = running_total / third_number;
  }
  cout << " = " << running_total << endl;
}
