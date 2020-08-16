#include <iostream>
using namespace std;

class Power {
protected:
	int color;
	int gunnum;

public:
	Power();
	void change(int c);
	void attack(int c);
};

class Robot:public Power {
private:
	int num[3] = { 1,2,3 };

public:
	Robot();
	void mobilize();
	void attack(int c);
};

Power::Power() {
	color = 0;
	gunnum = 0;
	cout << "파워레인저 3명이 출동했습니다" << endl;
}

void Power::change(int c) {
	color = c;
	if (c == 1) {
		cout << "레드 변신!" << endl;
	}
	else if (c == 2) {
		cout << "블루 변신!" << endl;
	}
	else if (c == 3) {
		cout << "핑크 변신!" << endl;
	}
	else { cout << "다시 입력하세요" << endl; }
}

void Power::attack(int c) {
	color = c;
	if (c == 1) {
		cout << "레드가 칼을 빼들었다" << endl;
	}
	else if (c == 2) {
		cout << "블루가 방패를 빼들었다" << endl;
	}
	else if (c == 3) {
		cout << "핑크가 창을 빼들었다" << endl;
	}
	else { cout << "다시 입력하세요" << endl; }
}

Robot::Robot(){
	cout << "로봇이 출동했습니다" << endl;
}

void Robot::mobilize() {
	for (int i = 0;i < 3;i++) {
		if (num[i] == i + 1) {
			cout << "파워레인저 슈퍼로봇이" << i + 1 << "대 출동했습니다" << endl;
		}
	}
}

void Robot::attack(int c) {
	color = c;
	if (c == 1) {
		cout << "레드로봇이 칼을 빼들었다." << endl;
	}
	else if (c == 2) {
		cout << "블루로봇이 방패를 빼들었다." << endl;

	}
	else if (c == 3) {
		cout << "핑크로봇이 창을 빼들었다." << endl;
	}
	else
		cout << "다시 입력하세요." << endl;
}

int main() {
	Power p;

	for (int i = 0;i < 3;i++) {
		p.change(i + 1);
	}

	cout << "공격해야겠다!" << endl;
	for (int j = 0;j < 3;j++) {
		p.attack(j + 1);
	}

	cout << "이겼다" << endl;
	cout << "아니 저 괴물이 커졌다!"<<endl;

	Robot r;

	r.mobilize();
	for (int k = 0;k < 3;k++) {
		r.attack(k + 1);
	}

	cout << "이겼습니다" << endl;
}