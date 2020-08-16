#include <iostream>
using namespace std;

const int max = 10;

class Stack {
private:
	int top = -1;
	int stack[max];

public:
	void push(int num); //num�� ������ �� ���� �߰�
	int pop(); //������ ������� ������ �� �� ��� ����&��ȯ
	bool isEmpty(); //������ ��������� true, �ƴϸ� false
	int peek(); //������ ������� ������ �� �� ��Ҹ� �������� �ʰ� ��ȯ
	bool isFull();//������ ���� �� ������ ture �ƴϸ� false
	int size(); //���� ���� ��� ��ҵ��� ������ ��ȯ
	void display(); //���� ���� ��� ��ҵ��� ���
};

void Stack::push(int num) {
	if (top == max-1) {
		cout << "������ �� á���ϴ�" << endl;
	}
	else {
		stack[++top] = num;
	}
}

int Stack::pop(){
	if (isEmpty() == true) {
		return  -1;
	}
	else return stack[top--];
}

bool Stack::isEmpty() {
	if (top == -1) {
		return true;
	}
	else return false;
}

int Stack::peek() {
	if (isEmpty() == false) {
		return stack[top];
	}
}

bool Stack::isFull() {
	if (top == max - 1) {
		return true;
	}
	else return false;
}

int Stack::size() {
	return top + 1;
}

void Stack::display() {
	cout << endl << "-----������ ���-----" << endl;
	for (int i = 0;i < top+1;i++) {
		cout << stack[top - i] << endl;
	}
	cout << "-----������ �ϴ�-----" << endl<<endl;
}


int main() {
	Stack s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);

	s.display();
	cout << s.pop() << endl;
	cout << s.pop() << endl;

	if (s.isEmpty() == true) {
		cout << "������ ������ϴ�" << endl;
	}
	else cout << "���ÿ� �����Ͱ� �ֽ��ϴ�" << endl;

	cout << s.peek() << endl;

	if (s.isFull() == true) {
		cout << "������ ���� á���ϴ�" << endl;
	}
	else cout << "���ÿ� ���� ������ �ֽ��ϴ�" << endl;
	
	cout << s.size() << endl;
	s.display();
}