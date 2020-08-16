#include <iostream>
using namespace std;

class Car {
private:
	int num;
	double gas;
public:
	Car();
	Car(int n, double g);
};

class RacingCar : public Car {
private:
	int course;
public:
	RacingCar(int n, double g, int c);
};

Car::Car() {
	num = 0;
	gas = 0.0;
}

Car::Car(int n, double g) {
	num = n;
	gas = g;
	cout << "차량번호는 " << num << endl;
	cout << "가스량은 " << gas << endl;
}

RacingCar::RacingCar(int n, double g, int c):Car(n,g) {
	course = c;
	cout << "코스번호는 " << course << endl;
}

int main() {
	RacingCar(1435, 30.5, 5);
	return 0;
}