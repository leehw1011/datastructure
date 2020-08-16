#include <iostream>
#include <fstream>
#define MAX 100
using namespace std;

class Stack {
private:
	int top;
	int data[MAX];

public:
	Stack();
	~Stack();
	bool isEmpty();
	bool isFull();
	void push(int num);
	int pop();
	int peek();
};

class check_matching {
private:
	char ch;

};