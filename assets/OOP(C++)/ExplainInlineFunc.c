// Explain inline function with automatic inline function using suitable program.

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
  cout << "Summation of Two Numbers is =  " << a + b;
}


int main() {
  operation s;
  s.sum();
}