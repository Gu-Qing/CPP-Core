#include <iostream>
#include <string>
using namespace std;

class Student {
private :
	string name;
	int age;

public :
	Student(string name, int age) {
		this->name = name;
		this->age = age;
	}
	string getName() {
		return name;
	}
	int getAge() {
		return age;
	}

	//ÖØÔØ == ÔËËã·û
	bool operator== (Student& s) {
		if (this->name == s.name && this->age == s.age) {
			return true;
		}
		return false;
	}

	//ÖØÔØ != ÔËËã·û
	bool operator!= (Student& s) {
		if (this->name == s.name && this->age == s.age) {
			return false;
		}
		return true;
	}
};

void test0035() {

	Student s1("Tom", 18);
	Student s2("Tom", 18);
	Student s3("Som", 18);
	if (s1 == s2) {
		cout << "s1 == s2" << endl;
	}
	if (s1 != s3) {
		cout << "s1 != s3" << endl;
	}
}

int test35() {

	test0035();

	system("pause");

	return 0;
}