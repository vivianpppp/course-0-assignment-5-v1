#include <iostream>
#include <string>
using namespace std;
 
int GetUserInput() {
 int number;
 cout << "Enter a number: ";
 cin >> number;
 return number;
}
 
int Factorial(int number){
 if (number == 2 | number == 3) {
   return number * (number - 1);
 } else if (number == 4) {
   return number * (number - 1) * (number - 2);
 } else if (number == 5) {
   return number * (number - 1) * (number - 2) * (number - 3);
 } else if (number == 6) {
   return number * (number - 1) * (number - 2) * (number - 3) * (number - 4);
 } else if (number == 7) {
   return number * (number - 1) * (number - 2) * (number - 3) * (number - 4) * (number - 5);
 } else if (number == 8) {
   return number * (number - 1) * (number - 2) * (number - 3) * (number - 4) * (number - 5) * (number - 6);
 } else if (number == 9) {
   return number * (number - 1) * (number - 2) * (number - 3) * (number - 4) * (number - 5) * (number - 6) * (number - 7);
 } else if (number == 10) {
   return number * (number - 1) * (number - 2) * (number - 3) * (number - 4) * (number - 5) * (number - 6) * (number - 7) * (number - 8); 
 } else if (number == 11) {
   return number * (number - 1) * (number - 2) * (number - 3) * (number - 4) * (number - 5) * (number - 6) * (number - 7) * (number - 8) * (number - 9);  
 } else if (number == 12) {
   return number * (number - 1) * (number - 2) * (number - 3) * (number - 4) * (number - 5) * (number - 6) * (number - 7) * (number - 8) * (number - 9) * (number - 10);
 } else {
   return 0;
 }
}
 
int main() {
 int number = GetUserInput();
 
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
 
