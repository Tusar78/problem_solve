// Explain inline function with autometic inline function using switable program.

// (ii). Explained autometic inline function.
#include <iostream>
using namespace std;

class operation {
  int a = 2;
  int b = 3;
public:
  void mul() {
    cout << "Multiplication of Two Numbers: " << a * b;
  }
};

int main() {
  operation s;
  s.mul();
}