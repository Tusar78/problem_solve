#include <iostream>
using namespace std;

class triangle {
  double height, width;

public:
  triangle(double w, double h) {
    width = w;
    height = h;
  }

  void show() {
    double area = 0.5 * width * height;
    cout << "Area of triangle is = " << area;
  }
};

class rectangle {
  double height, width;

public:
  rectangle(double w, double h) {
    width = w;
    height = h;
  }

  void show() {
    double area = width * height;
    cout << "Area of Rectangle is = " << area;
  }
};

class circle {
  double PI = 3.14159;
  double radius;

public:
  circle(double r) {
    radius = r;
  }

  void show() {
    double area = PI * radius * radius;
    cout << "Area of Circle is = " << area;
  }
};

int main() {
  double radius, width, height;

  cout << "Enter radius = ";
  cin >> radius;
  cout << "Enter width = ";
  cin >> width;
  cout << "Enter height = ";
  cin >> height;

  triangle *pTriangle;
  rectangle *pRectangle;
  circle *pCircle;

  triangle myTriangle(width, height);
  rectangle myRectangle(width, height);
  circle myCircle(radius);

  pTriangle = &myTriangle;
  pRectangle = &myRectangle;
  pCircle = &myCircle;

  cout << "\n";
  
  pTriangle -> show();
  cout << "\n";
  pRectangle -> show();
  cout << "\n";
  pCircle -> show();
  cout << "\n";
}


Enter radius = 5
Enter width = 7
Enter height = 9

Area of triangle is = 31.5
Area of Rectangle is = 63
Area of Circle is = 78.5397