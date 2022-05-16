#include <iostream>
#include <string>
using namespace std;

class Room {
	//GoodGay这个类是本类的好朋友，可以访问此类的私有内容
	friend class GoodGay;
private :
	string m_BedRoom;
public :
	string m_SittingRoom;
	Room();
};
class GoodGay {
public :
	GoodGay();
	void visit(); //参观函数，访问呢Romm中的属性
	Room* room;
};

//类外写成员函数
Room::Room() {
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodGay::GoodGay() {
	room = new Room;
}

void GoodGay::visit() {
	cout << "好基友正在访问：" << room->m_SittingRoom << endl;
	cout << "好基友正在访问：" << room->m_BedRoom << endl;
}

void test0028() {
	GoodGay g;
	g.visit();
}

int test28() {

	test0028();

	system("pause");

	return 0;
}