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
	cout << "������ȣ�� " << num << endl;
	cout << "�������� " << gas << endl;
}

RacingCar::RacingCar(int n, double g, int c):Car(n,g) {
	course = c;
	cout << "�ڽ���ȣ�� " << course << endl;
}

int main() {
	RacingCar(1435, 30.5, 5);
	return 0;
}