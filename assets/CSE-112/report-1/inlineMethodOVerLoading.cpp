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

Enter integer: -45
Enter double: -54.5
Enter long: 24155

Absolute for integer = 45
Absolute for double = 54
Absolute for long = 24155