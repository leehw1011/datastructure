#include <iostream>
#include <string>

using namespace std;

//class A {
//private:
//	int a;
//	double b;
//
//public:
//	A();
//	A(int x);
//	int add(int x, int y);
//};
//
//class B :public A {
//	int sub(int x, int y);
//};
//
//A::A() {
//	a = 0;
//	b = 0.0;
//}
//
//A::A(int x) {
//	a = x;
//	cout << "A��� �����ڰ� ���������" << endl;
//}
//
//int A::add(int x, int y) {
//	return x + y;
//}
//
//int B::sub(int x, int y) {
//	return x - y;
//}
//
//int main() {
//	A t(5);
//	cout << t.add(5, 3) << endl;
//}


//int main() {
//	int a[5] = { 1,2,3,4,5 };
//	int b[] = { 1,2,3,4,5,6 };
//
//	cout << a[0] << endl;
//	//cout << &a[0] << endl;
//	for (int i = 0;i < 5;i++) {
//		cout << a[i] << endl;
//	}
//
//}

//int main() {
//	char a[] = "data structure";
//	string a = "data structure";
//}

const int max = 20;

class Stack {
private:
	int top;
	int stack[max];
public :
	Stack();
	~Stack() {};
	void push(int x);
	int pop();
	void show();
};

Stack::Stack() {
	top = -1;
	cout << "�� ���� �������." << endl;
}

void Stack::push(int x) {
	if (top == max - 1) {
		cout << "�� �� �־�!" << endl;
	}
	else {
		stack[++top] = x;
	}
}

int Stack::pop() {
	if (top == -1) {
		cout << "����־�" << endl;
	}
	else {
		return stack[top--];
	}
}

void Stack::show() {
	cout << "������ ���" << endl;
	for (int i = 0;i <= top;i++) {
		cout << stack[top - i] << endl;
	}
	cout << "������ �ϴ�" << endl;
}

int main() {
	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.show();
	cout << "�ֻ�ܰ� : "<<s.pop() << endl;
	s.show();
}