#include <iostream>
#include <math.h>
using namespace std;

int squareRoot(int num) {
  int res = sqrt(num);
  return res;
}

double squareRoot(double num) {
  double res = sqrt(num);
  return res;
}

long squareRoot(long num) {
  long res = sqrt(num);
  return res;
}

int main() {
  int num1;
  double num2;
  long num3;

  cout << "Enter your integer number: ";
  cin >> num1;
  cout << "Enter your double number: ";
  cin >> num2;
  cout << "Enter your long number: ";
  cin >> num3;
  cout << "\n";
  cout << "Square for Integer: " << squareRoot(num1) << "\n";
  cout << "Square for Double: " << squareRoot(num2) << "\n";
  cout << "Square for Long: " << squareRoot(num3) << "\n";
}