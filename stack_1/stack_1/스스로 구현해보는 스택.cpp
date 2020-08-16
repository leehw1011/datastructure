#include <iostream>
using namespace std;

#define MAX 10

class Stack {
private:
	int top;
	int data[MAX];

public:
	Stack();
	bool isEmpty();
	bool isFull();
	void push(int num);
	int pop();
	int peek();
	void display();
	int size();
};

Stack::Stack() {
	top = -1;
}

bool Stack::isEmpty() {
	return (top == -1);
}

bool Stack::isFull() {
	return (top + 1 == MAX);
}

void Stack::push(int num) {
	if (isFull()) {
		cout << "������ �� á���ϴ�." << endl;
	}
	else
		data[++top] = num;
}

int Stack::pop() {
	if (isEmpty()) {
		cout << "������ ������ϴ�." << endl;
	}
	else
		return data[top--];
}

int Stack::peek() {
	if (isEmpty()) {
		cout << "������ ������ϴ�." << endl;
	}
	else
		return data[top];
}

void Stack::display() {
	cout << "----------������ ���-----------" << endl;
	for (int i = 0;i < top+1;i++) {
		cout << data[top - i] << endl;
	}
	cout << "----------������ �ϴ�-----------" << endl;
}

int Stack::size() {
	return top + 1;
}

int main() {
	Stack s;
	for (int i = 0;i < 10;i++) {
		s.push(i + 1);
	}
	s.display();
	cout << s.peek() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;

	s.display();
	cout << s.size() << endl;

}