#include <iostream>

using namespace std;

//1~3��
class Car {
protected:
	int num;
	int fuel;
	int speed;

public:
	Car();
	void print();
};

class RacingCar :Car {
protected:
	bool boost;
public:
	RacingCar();
	void speedUp();
	void brake();
};

Car::Car() {
	cout << "�θ��� �⺻ ������ ȣ��" << endl;
	num = 0000;
	fuel = 0;
	speed = 0;
}

void Car::print() {
	cout << "���� ��ȣ : " << num << endl;
	cout << "���ᷮ : " << fuel << endl;
}

RacingCar::RacingCar() {
	cout << "�ڽ��� �⺻ ������ ȣ��" << endl;
	boost = false;
}

void RacingCar::speedUp() {
	if (boost == true) {
		speed += 50;
	}
	else
		speed += 10;
}

void RacingCar::brake() {
	while (speed > 0) {
		speed--;
	}
}

int main() {
	//RacingCar car1();
	RacingCar car1 = RacingCar();
}