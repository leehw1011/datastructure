#include <iostream>
#include <string>

using namespace std;

int main() {
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	
	for (int i = 0;i < 10;i++) {
		if (a[i] % 2 == 0) {
			cout << a[i] << ": ¦��"<<endl;
		}
		else {
			cout << a[i] << ": Ȧ��"<<endl;
		}
	}
	cout << endl << endl;

	int age = 21;
	string job = "�л�";
	cout << "���� : " << age << endl;
	cout << "���� : " << job << endl;
}