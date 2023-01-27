#include <iostream>
using namespace std;

class truck;

class car {
  int weight, speed;

public:
  car(int weight, int speed) {
    this -> weight = weight;
    this -> speed = speed;
  }

  friend int show(car myCar, truck myTruck);
};

class truck {
  int weight, speed;

public: 
  truck(int weight, int speed) {
    this -> weight = weight;
    this -> speed = speed;
  }

  friend int show(car myCar, truck myTruck);
};

int show(car myCar, truck myTruck) {
  return  myCar.speed - myTruck.speed;
}

int main() {
  int carWeight, carSpeed;
  int truckWeight, truckSpeed;

  cout << "Enter Car Weight & Car Speed : ";
  cin >> carWeight >> carSpeed;
  
  cout << "Enter Truck Weight and Truck Speed : ";
  cin >> truckWeight >> truckSpeed;
  
  car myCar(carWeight, carSpeed);
  truck myTruck(truckWeight, truckSpeed);

  int result = show(myCar, myTruck);
  if(result > 0) {
    cout << "Car speed is higher";
  } else if (result == 0) {
    cout << "Car and Truck speed is equal";
  } else {
    cout << "Truck speed is higher";
  }
}



Enter Car Weight and Car Speed : 3359 50
Enter Truck Weight and Truck Speed : 6687 40

Car speed is higher