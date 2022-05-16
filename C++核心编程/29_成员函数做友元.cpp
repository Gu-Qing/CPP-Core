#include <iostream>
#include <string>
using namespace std;

class Build; //声明类

class GoodFriend {
public :
	Build* build;

	GoodFriend();

	void visit(); //让visit()函数可以访问Build中的私有成员
	void visit2();//让visit()函数不可以访问Build中的私有成员
};
class Build {
	//告诉编译器 GoodFriend类下的visit成员函数作为本类的友元函数，可以访问私有成员
	friend void GoodFriend::visit();

private :
	string m_BedRoom;

public :
	string m_SittingRoom;

	Build();
}; 

//类外实现成员函数
Build::Build() {
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodFriend::GoodFriend() {
	build = new Build;
}

void GoodFriend::visit() {
	cout << "visit函数正在访问：" << build->m_SittingRoom << endl;
	cout << "visit函数正在访问：" << build->m_BedRoom << endl;
}
void GoodFriend::visit2() {
	cout << "visit2函数正在访问：" << build->m_SittingRoom << endl;
	//cout << "visit2函数正在访问：" << build->m_BedRoom << endl;
}

void test0029() {
	GoodFriend f;
	f.visit();
	f.visit2();
}

int test29() {

	test0029();

	return 0;
}