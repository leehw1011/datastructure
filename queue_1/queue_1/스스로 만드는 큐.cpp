#include <iostream>
#define MAX 100

using namespace std;

class C_Queue { //����ť
protected:
	int front;
	int rear;
	int data[MAX];
public:
	C_Queue() { front = rear = 0; } //������
	bool isEmpty() { return front == rear; } //����˻��Լ�
	bool isFull() { return (rear + 1) % MAX == front; } //��ȭ�˻��Լ�
	void enqueue(int num) { //�����Լ�
		if (isFull()) {
			cout << "ť�� ��ȭ �����Դϴ�." << endl;
		}
		else {
			rear = (rear + 1) % MAX;
			data[rear] = num;
		}
	}
	int dequeue() { //�����Լ�
		if (isEmpty()) {
			cout << "ť�� ���� �����Դϴ�." << endl;
		}
		else {
			front = (front + 1) % MAX;
			return data[front];
		}
	}
	void display() { //ť ���� ��� �Լ�
		cout << "--------ť ����--------" << endl;
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
			cout << "���� ��ȭ�Դϴ�." << endl;
		}
		else {
			data[front] = num;
			front = (front - 1 + MAX) % MAX;
		}
	}
	int deleteRear() {
		if (isEmpty()) {
			cout << "���� �����Դϴ�." << endl;
		}
		else {
			int ret = data[rear];
			rear = (rear - 1 + MAX) % MAX;
			return ret;
		}
	}
	void display() {
		cout << "---------���� ����---------" << endl;
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