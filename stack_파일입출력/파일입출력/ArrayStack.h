#pragma once
#include <iostream>
using namespace std;

inline void error(char* message)   // �����޼����� �����ͷ� �޾Ƽ� ����ϴ� �Լ�
{
    cout << message << endl;
    exit(1);
}

const int MAX_STACK_SIZE = 20;

class ArrayStack
{
    int top;
    char data[MAX_STACK_SIZE];
public:
    ArrayStack() { top = -1; }   // ����ִ� ������ ������
    ~ArrayStack() {}
    bool isEmpty() { return top == -1; }   // ������ ��������� true, �ƴϸ� false�� ��ȯ
    bool isFull() { return top == MAX_STACK_SIZE; }   // ���� �������� true, �ƴϸ� false�� ��ȯ
    void push(int n)
    {
        if (isFull())    // ���� ������ ���� ���ִٸ� error�Լ� ȣ�� -> ���α׷� ����
            error((char*)"���� ��ȭ ����");
        data[++top] = n;    // �ƴϸ� top���� �ϳ� ������Ų ��, ���� ���� ����
    }
    char pop()
    {
        if (isEmpty())    // ���� ������ ����ִٸ� error�Լ� ȣ�� -> ���α׷� ����
            error((char*)"���� ���� ����");
        return data[top--];    // �ƴϸ� ���� top�� ���� ������ ��, top���� �ϳ� ����
    }
    char peek()
    {
        if (isEmpty())    // ���� ������ ����ִٸ� error�Լ� ȣ�� -> ���α׷� ����
            error((char*)"���� ���� ����");
        return data[top];    // �ƴϸ� top�� ��ȯ, but pop�� �޸� top���� �������� ����
    }
    void display()    // ���� ������ �׸� ���� ��Ҹ� ��� ���
    {
        cout << "[���� �׸��� �� = " << top + 1 << "]" << endl;
        for (int i = 0; i <= top; i++)
            cout << data[i] << endl;
    }
};