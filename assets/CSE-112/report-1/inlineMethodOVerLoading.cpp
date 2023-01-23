#include <iostream>
using namespace std;

inline int abs(int num) {
  return num > 0 ? num : -num;
}

inline double abs(double num) {
  return num > 0 ? num : -num;
}

inline long abs(long num) {
  return num > 0 ? num : -num;
}

int main() {
  int num1;
  double num2;
  long num3;

  cout << "Enter integer: ";
  cin >> num1;
  cout << "Enter double: ";
  cin >> num2;
  cout << "Enter long: ";
  cin >> num3;

  cout << "Absolute for integer = " << abs(num1) << "\n";
  cout << "Absolute for double = " << abs(num2) << "\n";
  cout << "Absolute for long = " << abs(num3) << "\n";
}
