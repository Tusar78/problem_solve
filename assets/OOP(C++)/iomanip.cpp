#include<iostream>
#include<iomanip>
using namespace std;

int main() {
  double num1, num2;

  cout << "Enter two numbers: ";
  cin >> num1 >> num2;

  double sum = num1 + num2;
  double sub = num1 - num2;
  double mul = num1 * num2;
  double div = num1 / num2;

  cout << showpoint;
  cout << fixed;
  cout << setprecision(4);
  cout << setw(20);
  cout << "Summation is = " << sum << endl;
  cout << noshowpoint;
  cout << setw(20);
  cout << "Subtraction is = " << sub << endl;
  cout << setw(20);
  cout << "Multiplication is = " << mul << endl;
  cout << setw(20);
  cout << "Division is is = " << div << endl;
}