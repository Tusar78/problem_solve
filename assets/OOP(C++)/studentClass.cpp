// Create a class named student which has private property named id, name and CGPA. Now create two object s1 and s2. Now display all information of two objects. using appropiate method. 

#include <iostream>
using namespace std;

class student {
  int id;
  double CGPA;
  string name;
public:
  student(int id, double cgpa, string name) {
    this -> id = id;
    this -> CGPA = CGPA;
    this -> name = name;
  }

  student() {
    id = 62;
    CGPA = 3.67;
    name = "Tusar";
  }

  void show() {
    cout << "Your id name is: " << name << "\n";
    cout << "Your id Id is: " << id << "\n";
    cout << "Your id CGPA is: " << CGPA << "\n";
  }
};

int main() {
  student s1(46, 3.67, "Aopo"), s2;
  s1.show();
  s2.show();
}