#include<iostream>
#include<fstream>
#include"ArrayStack.h"
using namespace std;

bool checkMatching(char* filename)   /* * = Astarisk */
{
    ifstream file(filename);
    if (!file) {
        cout << "Error: ������ �������� �ʽ��ϴ�." << endl;
    }

    int nLine = 1;   // ���� ������ ����
    int nChar = 0;   // ���� ������ ����

    ArrayStack stack;    // ��ü ����
    char ch;
    /*char ch = file.get(); //���ڸ� �ϳ��� �޾ƺ���
    while (file.eof() == false) { //eof(end of file)_'������ �� ���� �� ����'�� �ǹ�
        cout << ch;
        ch = file.get();
    }
    cout << endl;

    file.close();*/
    while (file.eof() == false)   // File,fp���� ���� ���ڰ� ���� ������ �ݺ�(EOF: End Of File)
    {
        ch = file.get();
        /* ���� ����, ���� ���� Ȯ�� */
        if (ch == '\n')
            nLine++;      // �ٹٲ��� ������, ���� ���� +1
        nChar++;   // ���ڰ��� +1

        /* ���� ��ȣ �˻� */
        if (ch == '[' || ch == '(' || ch == '{')   // ���� ��ȣ�� ������,
            stack.push(ch);   // Stack�� push��
        else if (ch == ']' || ch == ')' || ch == '}')    // ������ ��ȣ�� ������,
        {
            char prev = stack.pop();
            if ((ch == ']' && prev != '[')
                || (ch == ')' && prev != '(')
                || (ch == '}' && prev != '{'))   // ���� �ֱٿ� push�ߴ� ���� pop�ؼ� ��
                break;   // ¦�� ������ �Ѿ�� �ƴϸ� �ݺ����� ��������
        }
    }
    file.close();   // File�� Close �ϴ� ���

    /* ��� ��� */
    /* �ݺ��� �����µ� Stack�� ���������� ����(¦�� �ȸ¾� �ݺ����� ������ ��쿡 ���μ���
        ������ �߻��� ������) */
    if (!stack.isEmpty())
        cout << "Error: �����߰�!(���μ�=" << nLine << ", ���ڼ�=" << nChar << ")" << endl << endl;
    else
        cout << "OK: ��ȣ�ݱ�����(���μ�=" << nLine << ", ���ڼ�=" << nChar << ")" << endl << endl;

    return stack.isEmpty();
    // main���� ������� ����(�ǹ̴� ������, �Լ��� Ÿ���� �����ֱ����� ���)
}

int main()
{
    checkMatching((char*)"ArrayStack.h");
    checkMatching((char*)"��ȣ�˻�.cpp");
}