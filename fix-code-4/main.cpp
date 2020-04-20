#include <iostream>
#include <string>
using namespace std;

//float GetTemperature(int input) {
//  return input * 1;
//}

float GetTemperature(float input) {
  return input * 100;
}

int main() {
  cout << "The temperature should be 6: " << GetTemperature(6.0) << endl;
}
