#include <iostream>
using namespace std;

/*友元：让一个函数或类 访问另一个类中的私有成员*/

class Building {
	//goodGay全局函数是此类的好朋友，可以访问Buiding中的私有成员
	friend void goodGay(Building* building);
private :
	string m_BedRoom;

public :
	string m_SittingRoom;

	Building() {
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}
};

void goodGay(Building* building) {
	cout << "好基友的全局函数 正在访问：" << building->m_SittingRoom << endl;
	cout << "好基友的全局函数 正在访问：" << building->m_BedRoom << endl;
}

void test0027() {
	Building building;
	goodGay(&building);
}

int test27() {

	test0027();

	system("pause");

	return 0;
}