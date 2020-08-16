#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//ostream Ŭ�������� �Ļ��� ofstream Ŭ����: ���Ϸ� ��������
//istream Ŭ�������� �Ļ��� ifstream Ŭ����: ���Ͽ��� �б�

//ofstream�� ifstream�� �̿��Ϸ��� ǥ�� ���̺귯�� fstream�� ��Ŭ��� �ؾ��Ѵ�. 


//1��: ������ ����� ���� �ݱ�
//int main() {
//   ofstream file("text0.txt"); //���� ��������� ���ÿ� ����
//   if (!file) { //������ ���� ���� ��� ���
//      cout << "������ �� �� �����ϴ�." << endl;
//      return 1;
//   }
//   else
//      cout << "������ �������ϴ�." << endl;
//
//   file.close();//������ �ݾҽ��ϴ�. 
//   return 0;
//}

//2�� ���Ͽ� ����ϱ�
//int main() {
//   ofstream file("text1.txt"); //���� ��������� ���ÿ� ����
//   if (!file) { //������ ���� ���� ��� ���
//      cout << "������ �� �� �����ϴ�." << endl;
//      return 1;
//   }
//   else
//      cout << "������ �������ϴ�." << endl;
//
//   file << "Hello" << endl; //���Ͽ� Hello�� �Է�
//   file << "Goodbye" << endl; //���Ͽ� Goodbye�� �Է�
//
//   file.close();//������ �ݾҽ��ϴ�. 
//   return 0;
//}

//3�� ���Ͽ��� �����͸� �о���̱�
//int main() {
//   ifstream file1("text1.txt"); //������ ���� ���Ͽ��� �б�
//   if (!file1) { //������ ���� ���� ��� ���
//      cout << "������ �� �� �����ϴ�." << endl;
//      return 1;
//   }
//   else
//      cout << "������ �������ϴ�." << endl;
//
//   char s1[16]; //���ڿ�1
//   char s2[16]; //���ڿ�2
//   file1 >> s1 >> s2; //���Ͽ��� ���ڿ��� �о�帳�ϴ�. 
//   cout << s1 << endl; //�о�帰 ���ڿ��� ���
//   cout << s2 << endl; //�о�帰 ���ڿ��� ���
//
//   file1.close();//������ �ݾҽ��ϴ�. 
//   return 0;
//}


//4�� Ű����� �Է��ؼ� ���Ͽ� ����غ���

//int main() {
//   ofstream file2("text2.txt");
//   if (!file2) {
//      cout << "������ ���� �����ϴ�." << endl;
//      return 1;
//   }
//
//   const int num = 5;
//   int test[num];
//   cout << num << "�� ���ڸ� �Է��ϼ���." << endl;
//   for (int i = 0; i < num; i++) {
//      cin >> test[i]; //�����͸� Ű����� �Է�
//   }
//   
//   for (int j = 0; j < num; j++) {
//      file2 << j + 1 << "  " << test[j] << endl;
//      //���Ͽ��� �����͸� ����
//   }
//   file2.close();
//}

//5�� ������ �� �پ� �а� ����ϱ�

//int main() {
//   ifstream file; //ifstream ��ü ����
//   file.open("text1.txt", ifstream::in);
//   char line = file.get(); //������ ù ���ڸ� �б�
//
//   while (file.eof() == false) { //������ ������ �дµ��� �Ʒ��� ������ �ݺ�
//      cout << line; //�ѹ��� ���(�ٹٲ޾���)
//      line = file.get();//������ ���� ���� �ޱ�
//   }
//}

//6�� ������ ���پ� �а� ����ϱ�2

//int main() {
//   ifstream file2;
//   file2.open("text1.txt");
//
//   string line;
//
//   while ((getline(file2, line))) { //getline(���� ����, ���ڿ�) - ���پ� ����ϱ�
//      cout << line << endl; //���ڿ� ��� ���پ�!
//   }
//
//   file2.close();
//}

//7�� �ؽ�Ʈ�� ���Ͽ� ����
//int main() {
//   const string file_name = "text3.txt";
//
//   ofstream file_out;//������ ���� �����ϰ�
//   file_out.open(file_name, ifstream::out); //������ ���µ� ������ 
//
//   file_out << "�ȳ��ϼ���." << endl; //���Ͽ� �Ʒ������� �Է�
//   file_out << "�ȳ����輼��." << endl; //���Ͽ� �Ʒ������� �Է�2
//
//   file_out.close();
//
//   ifstream file_in; //��ü ����
//   file_in.open(file_name, ifstream::in);//������ ���µ� �б���
//   string line; //���ڿ�
//   while (getline(file_in, line)) {//���پ� �о�帮��
//      cout << line << endl;//���پ� ���
//   }
//
//   file_in.close();//���� �ݱ�
//}