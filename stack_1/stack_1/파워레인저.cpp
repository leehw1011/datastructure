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
	cout << "�Ŀ������� 3���� �⵿�߽��ϴ�" << endl;
}

void Power::change(int c) {
	color = c;
	if (c == 1) {
		cout << "���� ����!" << endl;
	}
	else if (c == 2) {
		cout << "��� ����!" << endl;
	}
	else if (c == 3) {
		cout << "��ũ ����!" << endl;
	}
	else { cout << "�ٽ� �Է��ϼ���" << endl; }
}

void Power::attack(int c) {
	color = c;
	if (c == 1) {
		cout << "���尡 Į�� �������" << endl;
	}
	else if (c == 2) {
		cout << "��簡 ���и� �������" << endl;
	}
	else if (c == 3) {
		cout << "��ũ�� â�� �������" << endl;
	}
	else { cout << "�ٽ� �Է��ϼ���" << endl; }
}

Robot::Robot(){
	cout << "�κ��� �⵿�߽��ϴ�" << endl;
}

void Robot::mobilize() {
	for (int i = 0;i < 3;i++) {
		if (num[i] == i + 1) {
			cout << "�Ŀ������� ���۷κ���" << i + 1 << "�� �⵿�߽��ϴ�" << endl;
		}
	}
}

void Robot::attack(int c) {
	color = c;
	if (c == 1) {
		cout << "����κ��� Į�� �������." << endl;
	}
	else if (c == 2) {
		cout << "���κ��� ���и� �������." << endl;

	}
	else if (c == 3) {
		cout << "��ũ�κ��� â�� �������." << endl;
	}
	else
		cout << "�ٽ� �Է��ϼ���." << endl;
}

int main() {
	Power p;

	for (int i = 0;i < 3;i++) {
		p.change(i + 1);
	}

	cout << "�����ؾ߰ڴ�!" << endl;
	for (int j = 0;j < 3;j++) {
		p.attack(j + 1);
	}

	cout << "�̰��" << endl;
	cout << "�ƴ� �� ������ Ŀ����!"<<endl;

	Robot r;

	r.mobilize();
	for (int k = 0;k < 3;k++) {
		r.attack(k + 1);
	}

	cout << "�̰���ϴ�" << endl;
}