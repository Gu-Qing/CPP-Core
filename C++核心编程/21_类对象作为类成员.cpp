#include <iostream>
#include <string>
using namespace std;

class B {
private :
	string b_Name;
public :
	B(string name){
		b_Name = name;
		cout << "B的构造函数" << endl;
	}
	~B() {
		cout << "B的析构函数" << endl;
	}

	string getName() {
		return b_Name;
	}

};

class A {
private:
	string a_Name;
	//当其它类对象作为本类的成员，构造时候先构造其他类对象再构造本类
	//析构顺序相反
	B a_B;

public :
	//B m_Name = pName; //隐式转换法
	A(string name, string bName) : a_Name(name), a_B(bName) {
		cout << "A的构造函数" << endl;
	}
	~A() {
		cout << "A的析构函数" << endl;
	}

	string getName() {
		return a_Name;
	}
	B getB() {
		return a_B;
	}
};

void test0021() {
	A a("里斯", "IPhone");
	cout << a.getName() << endl;
	cout << a.getB().getName() << endl;
}

int test21() {

	test0021();

	system("pause");

	return 0;
}