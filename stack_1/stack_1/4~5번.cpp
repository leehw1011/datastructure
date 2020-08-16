#include <iostream>
#include <string>

using namespace std;

int main() {
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	
	for (int i = 0;i < 10;i++) {
		if (a[i] % 2 == 0) {
			cout << a[i] << ": Â¦¼ö"<<endl;
		}
		else {
			cout << a[i] << ": È¦¼ö"<<endl;
		}
	}
	cout << endl << endl;

	int age = 21;
	string job = "ÇÐ»ý";
	cout << "³ªÀÌ : " << age << endl;
	cout << "Á÷¾÷ : " << job << endl;
}