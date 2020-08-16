#include<iostream>
#include<fstream>
#include"ArrayStack.h"
using namespace std;

bool checkMatching(char* filename)   /* * = Astarisk */
{
    ifstream file(filename);
    if (!file) {
        cout << "Error: 파일이 존재하지 않습니다." << endl;
    }

    int nLine = 1;   // 읽은 라인의 개수
    int nChar = 0;   // 읽은 문자의 개수

    ArrayStack stack;    // 객체 생성
    char ch;
    /*char ch = file.get(); //문자를 하나씩 받아보자
    while (file.eof() == false) { //eof(end of file)_'파일을 다 읽을 때 까지'의 의미
        cout << ch;
        ch = file.get();
    }
    cout << endl;

    file.close();*/
    while (file.eof() == false)   // File,fp에서 받은 문자가 없을 때까지 반복(EOF: End Of File)
    {
        ch = file.get();
        /* 읽은 라인, 문자 개수 확인 */
        if (ch == '\n')
            nLine++;      // 줄바꿈이 있으면, 읽은 라인 +1
        nChar++;   // 문자개수 +1

        /* 파일 괄호 검사 */
        if (ch == '[' || ch == '(' || ch == '{')   // 왼쪽 괄호를 받으면,
            stack.push(ch);   // Stack에 push함
        else if (ch == ']' || ch == ')' || ch == '}')    // 오른쪽 괄호가 들어오면,
        {
            char prev = stack.pop();
            if ((ch == ']' && prev != '[')
                || (ch == ')' && prev != '(')
                || (ch == '}' && prev != '{'))   // 가장 최근에 push했던 값을 pop해서 비교
                break;   // 짝이 맞으면 넘어가고 아니면 반복문을 빠져나감
        }
    }
    file.close();   // File을 Close 하는 방법

    /* 결과 출력 */
    /* 반복이 끝났는데 Stack이 남아있으면 오류(짝이 안맞아 반복문을 나갔을 경우에 라인수는
        오류가 발생한 라인임) */
    if (!stack.isEmpty())
        cout << "Error: 문제발견!(라인수=" << nLine << ", 문자수=" << nChar << ")" << endl << endl;
    else
        cout << "OK: 괄호닫기정상(라인수=" << nLine << ", 문자수=" << nChar << ")" << endl << endl;

    return stack.isEmpty();
    // main에서 사용하지 않음(의미는 없지만, 함수의 타입을 맞춰주기위해 사용)
}

int main()
{
    checkMatching((char*)"ArrayStack.h");
    checkMatching((char*)"괄호검사.cpp");
}