#include<iostream>
using namespace std;

int main() {
  int num1, num2;

  // Input from user
  cout << "Enter your first number: ";
  cin >> num1;
  cout << "Enter your secpnd number: ";
  cin >> num2;

  int sum = num1 + num2;
  int sub = num1 - num2;
  int mul = num1 * num2;
  double div = (double) num1 / num2;
  int rem = num1 % num2;

  cout << "Summation is = " << sum <<endl;
  cout << "Subtraction is = " << sub <<endl;
  cout << "Multiplication is = " << mul <<endl;
  cout << "Division is = " << div <<endl;
  cout << "Reminder is = " << rem <<endl;
}