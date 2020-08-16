#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//ostream 클래스에서 파생된 ofstream 클래스: 파일로 내보내기
//istream 클래스에서 파생된 ifstream 클래스: 파일에서 읽기

//ofstream과 ifstream을 이용하려면 표준 라이브러리 fstream을 인클루드 해야한다. 


//1번: 파일을 만들고 열고 닫기
//int main() {
//   ofstream file("text0.txt"); //파일 내보내기와 동시에 열기
//   if (!file) { //파일을 열지 못할 경우 경고문
//      cout << "파일을 열 수 없습니다." << endl;
//      return 1;
//   }
//   else
//      cout << "파일을 열었습니다." << endl;
//
//   file.close();//파일을 닫았습니다. 
//   return 0;
//}

//2번 파일에 출력하기
//int main() {
//   ofstream file("text1.txt"); //파일 내보내기와 동시에 열기
//   if (!file) { //파일을 열지 못할 경우 경고문
//      cout << "파일을 열 수 없습니다." << endl;
//      return 1;
//   }
//   else
//      cout << "파일을 열었습니다." << endl;
//
//   file << "Hello" << endl; //파일에 Hello를 입력
//   file << "Goodbye" << endl; //파일에 Goodbye를 입력
//
//   file.close();//파일을 닫았습니다. 
//   return 0;
//}

//3번 파일에서 데이터를 읽어들이기
//int main() {
//   ifstream file1("text1.txt"); //파일을 열고 파일에서 읽기
//   if (!file1) { //파일을 열지 못할 경우 경고문
//      cout << "파일을 열 수 없습니다." << endl;
//      return 1;
//   }
//   else
//      cout << "파일을 열었습니다." << endl;
//
//   char s1[16]; //문자열1
//   char s2[16]; //문자열2
//   file1 >> s1 >> s2; //파일에서 문자열을 읽어드립니다. 
//   cout << s1 << endl; //읽어드린 문자열을 출력
//   cout << s2 << endl; //읽어드린 문자열을 출력
//
//   file1.close();//파일을 닫았습니다. 
//   return 0;
//}


//4번 키보드로 입력해서 파일에 기록해보기

//int main() {
//   ofstream file2("text2.txt");
//   if (!file2) {
//      cout << "파일을 열수 없습니다." << endl;
//      return 1;
//   }
//
//   const int num = 5;
//   int test[num];
//   cout << num << "의 숫자를 입력하세요." << endl;
//   for (int i = 0; i < num; i++) {
//      cin >> test[i]; //데이터를 키보드로 입력
//   }
//   
//   for (int j = 0; j < num; j++) {
//      file2 << j + 1 << "  " << test[j] << endl;
//      //파일에서 데이터를 쓰기
//   }
//   file2.close();
//}

//5번 파일을 한 줄씩 읽고 출력하기

//int main() {
//   ifstream file; //ifstream 객체 생성
//   file.open("text1.txt", ifstream::in);
//   char line = file.get(); //파일의 첫 문자를 읽기
//
//   while (file.eof() == false) { //파일을 끝까지 읽는동안 아래의 과정을 반복
//      cout << line; //한문자 출력(줄바꿈없음)
//      line = file.get();//파일의 다음 문자 받기
//   }
//}

//6번 파일을 한줄씩 읽고 출력하기2

//int main() {
//   ifstream file2;
//   file2.open("text1.txt");
//
//   string line;
//
//   while ((getline(file2, line))) { //getline(읽을 파일, 문자열) - 한줄씩 출력하기
//      cout << line << endl; //문자열 출력 한줄씩!
//   }
//
//   file2.close();
//}

//7번 텍스트를 파일에 쓰자
//int main() {
//   const string file_name = "text3.txt";
//
//   ofstream file_out;//파일을 새로 생성하고
//   file_out.open(file_name, ifstream::out); //파일을 여는데 쓰기모드 
//
//   file_out << "안녕하세요." << endl; //파일에 아래내용을 입력
//   file_out << "안녕히계세요." << endl; //파일에 아래내용을 입력2
//
//   file_out.close();
//
//   ifstream file_in; //객체 생성
//   file_in.open(file_name, ifstream::in);//파일을 여는데 읽기모드
//   string line; //문자열
//   while (getline(file_in, line)) {//한줄씩 읽어드리자
//      cout << line << endl;//한줄씩 출력
//   }
//
//   file_in.close();//파일 닫기
//}