#include <iostream>
#include <string>
using namespace std;

class Room {
	//GoodGay������Ǳ���ĺ����ѣ����Է��ʴ����˽������
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
	void visit(); //�ιۺ�����������Romm�е�����
	Room* room;
};

//����д��Ա����
Room::Room() {
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

GoodGay::GoodGay() {
	room = new Room;
}

void GoodGay::visit() {
	cout << "�û������ڷ��ʣ�" << room->m_SittingRoom << endl;
	cout << "�û������ڷ��ʣ�" << room->m_BedRoom << endl;
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