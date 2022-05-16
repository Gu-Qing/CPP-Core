#include <iostream>
using namespace std;

class MyInt {
	friend ostream& operator<< (ostream& out, MyInt myint);
private :
	int num;

public :
	MyInt() {
		num = 0;
	}

	MyInt& operator-- () {
		--num;
		return *this;
	}

	MyInt operator-- (int) {
		MyInt temp = *this;
		--num;
		return temp;
	}
};

ostream& operator<< (ostream &out, MyInt myint) {
	out << myint.num;
	return out;
}

int test33() {

	MyInt myint;
	cout << --(--myint) << endl;
	cout << myint << endl;
	cout << "---------------" << endl;
	cout << (--myint)-- << endl;
	cout << myint-- << endl;
	cout << myint << endl;

	system("pause");

	return 0;
}