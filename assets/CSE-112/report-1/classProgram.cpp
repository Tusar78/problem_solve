#include <iostream>
using namespace std;

class shape {
  double PI = 3.14159;
  double radius, height, width;
public: 
  void setFunc(double radius1, double height1, double width1) {
    radius = radius1;
    height = height1;
    width = width1;
  }
  
  double circleMethod() {
    double area = PI * radius * radius;
    return area;
  }
  
  double triangleMethod() {
    double area = 0.5 * width * height;
    return area;
  }
  
  double rectangleMethod() {
    double area = height * width;
    return area;
  }
  
  void show() {
    cout << "Area of Circle: " << circleMethod() << "\n";
    cout << "Area of Triangle: " << triangleMethod() << "\n";
    cout << "Area of Rectangle: " << rectangleMethod() << "\n";
  }
};

int main() {
  double radius, height, width;
  
  cout << "Enter radius : ";
  cin >> radius;
  cout << "Enter height: ";
  cin >> height;
  cout << "Enter width: ";
  cin >> width;

  shape variusMethod;
  variusMethod.setFunc(radius, height, width);
  variusMethod.show();
}

Enter radius : 5 
Enter height: 3
Enter width: 7

Area of Circle: 78.5397
Area of Triangle: 10.5
Area of Rectangle: 21