#include <iostream>
using namespace std;

const int max = 10;

class Stack {
private:
	int top = -1;
	int stack[max];

public:
	void push(int num); //num을 스택의 맨 위에 추가
	int pop(); //스택이 비어있지 않으면 맨 위 요소 삭제&반환
	bool isEmpty(); //스택이 비어있으면 true, 아니면 false
	int peek(); //스택이 비어있지 않으면 맨 위 요소를 삭제하지 않고 반환
	bool isFull();//스택이 가득 차 있으면 ture 아니면 false
	int size(); //스택 내의 모든 요소들의 개수를 반환
	void display(); //스택 내의 모든 요소들을 출력
};

void Stack::push(int num) {
	if (top == max-1) {
		cout << "스택이 꽉 찼습니다" << endl;
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
	cout << endl << "-----스택의 상단-----" << endl;
	for (int i = 0;i < top+1;i++) {
		cout << stack[top - i] << endl;
	}
	cout << "-----스택의 하단-----" << endl<<endl;
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
		cout << "스택이 비었습니다" << endl;
	}
	else cout << "스택에 데이터가 있습니다" << endl;

	cout << s.peek() << endl;

	if (s.isFull() == true) {
		cout << "스택이 가득 찼습니다" << endl;
	}
	else cout << "스택에 남은 공간이 있습니다" << endl;
	
	cout << s.size() << endl;
	s.display();
}