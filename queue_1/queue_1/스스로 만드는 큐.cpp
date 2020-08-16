#include <iostream>
#define MAX 100

using namespace std;

class C_Queue { //원형큐
protected:
	int front;
	int rear;
	int data[MAX];
public:
	C_Queue() { front = rear = 0; } //생성자
	bool isEmpty() { return front == rear; } //공백검사함수
	bool isFull() { return (rear + 1) % MAX == front; } //포화검사함수
	void enqueue(int num) { //삽입함수
		if (isFull()) {
			cout << "큐가 포화 상태입니다." << endl;
		}
		else {
			rear = (rear + 1) % MAX;
			data[rear] = num;
		}
	}
	int dequeue() { //삭제함수
		if (isEmpty()) {
			cout << "큐가 공백 상태입니다." << endl;
		}
		else {
			front = (front + 1) % MAX;
			return data[front];
		}
	}
	void display() { //큐 내용 출력 함수
		cout << "--------큐 내용--------" << endl;
		int max = (front < rear) ? rear : rear + MAX;
		for (int i = front + 1;i <= max;i++) {
			cout << data[i % MAX] << endl;
		}
	}
};

class C_Deque : C_Queue {
public:
	C_Deque() {};
	void addRear(int num) { enqueue(num); }
	int deleteFront() { return dequeue(); }
	void addFront(int num) {
		if (isFull()) {
			cout << "덱이 포화입니다." << endl;
		}
		else {
			data[front] = num;
			front = (front - 1 + MAX) % MAX;
		}
	}
	int deleteRear() {
		if (isEmpty()) {
			cout << "덱이 공백입니다." << endl;
		}
		else {
			int ret = data[rear];
			rear = (rear - 1 + MAX) % MAX;
			return ret;
		}
	}
	void display() {
		cout << "---------덱의 내용---------" << endl;
		int max = (front < rear) ? rear : rear + MAX;
		for (int i = front + 1;i <= max;i++) {
			cout << data[i % MAX] << endl;
		}
	}
};

int main() {
	C_Deque d;
	d.addFront(5);
	d.addFront(3);
	d.addFront(2);
	d.addFront(1);
	d.addFront(4);
	d.addRear(10);
	d.addRear(9);
	d.addRear(7);
	d.addRear(8);
	d.addRear(6);
	d.display();
	d.deleteFront();
	d.deleteRear();
	d.display();
}