#pragma once
#include <iostream>
using namespace std;

inline void error(char* message)   // 에러메세지를 포인터로 받아서 출력하는 함수
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
    ArrayStack() { top = -1; }   // 비어있는 스택의 생성자
    ~ArrayStack() {}
    bool isEmpty() { return top == -1; }   // 스택이 비어있으면 true, 아니면 false를 반환
    bool isFull() { return top == MAX_STACK_SIZE; }   // 가득 차있으면 true, 아니면 false를 반환
    void push(int n)
    {
        if (isFull())    // 만약 스택이 가득 차있다면 error함수 호출 -> 프로그램 종료
            error((char*)"스택 포화 에러");
        data[++top] = n;    // 아니면 top값을 하나 증가시킨 후, 받은 값을 대입
    }
    char pop()
    {
        if (isEmpty())    // 만약 스택이 비어있다면 error함수 호출 -> 프로그램 종료
            error((char*)"스택 공백 에러");
        return data[top--];    // 아니면 현재 top인 값을 내보낸 후, top값을 하나 감소
    }
    char peek()
    {
        if (isEmpty())    // 만약 스택이 비어있다면 error함수 호출 -> 프로그램 종료
            error((char*)"스택 공백 에러");
        return data[top];    // 아니면 top값 반환, but pop과 달리 top값을 줄이지는 않음
    }
    void display()    // 현재 스택의 항목 수와 요소를 모두 출력
    {
        cout << "[스택 항목의 수 = " << top + 1 << "]" << endl;
        for (int i = 0; i <= top; i++)
            cout << data[i] << endl;
    }
};