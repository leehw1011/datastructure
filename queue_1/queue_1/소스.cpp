#include <iostream>
#define MAX 100

using namespace std;

class C_QUEUE {
protected:
    int front;
    int rear;
    int data[MAX];
public:
    C_QUEUE() { front = rear = 0; }
    bool isEmpty() { return front == rear; }
    bool isFull() { return (rear + 1) % MAX == front; }

    void enqueue(int a) {
        if (isFull())
            cout << "ť�� ��ȭ��." << endl;
        else {
            rear = (rear + 1) % MAX;
            data[rear] = a;
        }
    }

    int dequeue() {
        if (isEmpty())
            cout << "ť�� ����ִ�." << endl;
        else {
            front = (front + 1) % MAX;
            return data[front];
        }
    }

    void display() {
        cout << "ť ����: " << endl;
        int max = (front < rear) ? rear : rear + MAX;
        for (int i = front + 1; i <= max; i++) {
            cout << data[i % MAX] << endl;
        }
    }
};

class C_DEQUE : public C_QUEUE {
public:
    C_DEQUE() { };
    void addRear(int a) { enqueue(a); }
    int deleteFront() { return dequeue(); }

    void addFront(int a) {
        if (isFull())
            cout << "���� ��ȭ�Դϴ�." << endl;

        else {
            data[front] = a;
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
        cout << "���� ����: " << endl;
        int max = (front < rear) ? rear : rear + MAX;
        for (int i = front + 1; i <= max; i++) {
            cout << data[i % MAX] << endl;
        }
    }
};

int main() {

    //C_QUEUE q;
    //q.enqueue(5);
    //q.enqueue(3);
    //q.enqueue(4);
    //q.dequeue();
    //q.display();

    C_DEQUE d;
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