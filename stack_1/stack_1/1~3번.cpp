#include <iostream>

using namespace std;

//1~3번
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
	cout << "부모의 기본 생성자 호출" << endl;
	num = 0000;
	fuel = 0;
	speed = 0;
}

void Car::print() {
	cout << "차량 번호 : " << num << endl;
	cout << "연료량 : " << fuel << endl;
}

RacingCar::RacingCar() {
	cout << "자식의 기본 생성자 호출" << endl;
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