#include <iostream>
#include <fstream>
#include <ostream> //���Ϸ� ��������
#include <istream> //���Ͽ��� �б�
#include <string>

using namespace std;

//int main() {
//	ifstream file;
//	file.open("00.txt", ifstream::in); //������
//
//	string line;
//
//	while (getline(file, line)) {
//		cout << line << endl;
//	}
//	file.close();
//}

//int main() {
//	/*ofstream file("01.txt");
//	if (!file) {
//		cout << "���� �� ����" << endl;
//		return 1;
//	}
//
//	file << "data structure1" << endl;
//
//	file.close();
//	return 0;*/
//
//	ifstream file("01.txt");
//
//	//string a;
//	char b[30];
//	char c[30];
//	file >> b >> c;
//	cout << b << endl;
//	cout << c << endl;
//
//	file.close();
//	return 0;
//}

int main() {
	ifstream file;

	file.open("00.txt", ifstream::in);

	char ch = file.get(); //���ڸ� �ϳ��� �޾ƺ���
	while (file.eof() == false) { //eof(end of file)_'������ �� ���� �� ����'�� �ǹ�
		cout << ch;
		ch = file.get();
	}
	cout << endl;

	file.close();

}