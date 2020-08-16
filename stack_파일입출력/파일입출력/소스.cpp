#include <iostream>
#include <fstream>
#include <ostream> //파일로 내보내기
#include <istream> //파일에서 읽기
#include <string>

using namespace std;

//int main() {
//	ifstream file;
//	file.open("00.txt", ifstream::in); //열기모드
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
//		cout << "파일 못 연다" << endl;
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

	char ch = file.get(); //문자를 하나씩 받아보자
	while (file.eof() == false) { //eof(end of file)_'파일을 다 읽을 때 까지'의 의미
		cout << ch;
		ch = file.get();
	}
	cout << endl;

	file.close();

}