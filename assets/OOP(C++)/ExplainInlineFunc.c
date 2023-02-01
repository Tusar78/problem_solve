// Explain inline function with autometic inline function using switable program.

// (i). Explained inline function.
#include <iostream>
using namespace std;

class operation {
  int a = 2;
  int b = 3;
public:
  void sum();
};

inline void operation :: sum() {
  cout << "Summatino of Two Numbers: " << a + b;
}


int main() {
  operation s;
  s.sum();
}