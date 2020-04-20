#include <iostream>
#include <string>
using namespace std;

int GetInputNumber() {
  int number;
  cout << "Enter a number: ";
  cin >> number;
  return number;
}

char GetInputOperator() {
  char math_operator;
  cout << "Enter an operator: ";
  cin >> math_operator;
  return math_operator;
}

int RunningTotal(int first_number, char math_operator, int second_number) {
 int running_total;
 if (math_operator == '+') {
    running_total = first_number + second_number;
  }
  if (math_operator == '%') {
    running_total = first_number % second_number;
  }
  if (math_operator == '-') {
    running_total = first_number - second_number;
  }
  if (math_operator == '/') {
    running_total = first_number / second_number;
  }
  if (math_operator == '*') {
    running_total = first_number * second_number;
  }
  return running_total;
}

int main() {
  int first_number = GetInputNumber();
  char math_operator = GetInputOperator();
  int second_number = GetInputNumber();

  int running_total = 0;
  running_total = RunningTotal(first_number, math_operator, second_number);
  cout << " = " << running_total << endl;

//3rd number
  math_operator = GetInputOperator();
  second_number = GetInputNumber();
  running_total = RunningTotal(running_total, math_operator, second_number);
  cout << " = " << running_total << endl;

//4th number
  math_operator = GetInputOperator();
  second_number = GetInputNumber();
  running_total = RunningTotal(running_total, math_operator, second_number);
  cout << " = " << running_total << endl;

//5th number
  math_operator = GetInputOperator();
  second_number = GetInputNumber();
  running_total = RunningTotal(running_total, math_operator, second_number);
  cout << " = " << running_total << endl;

//6th number
  math_operator = GetInputOperator();
  second_number = GetInputNumber();
  running_total = RunningTotal(running_total, math_operator, second_number);
  cout << " = " << running_total << endl;

//7th number
  math_operator = GetInputOperator();
  second_number = GetInputNumber();
  running_total = RunningTotal(running_total, math_operator, second_number);
  cout << " = " << running_total << endl;

}
