#include <iostream>
#include <string>
using namespace std;

class Build; //������

class GoodFriend {
public :
	Build* build;

	GoodFriend();

	void visit(); //��visit()�������Է���Build�е�˽�г�Ա
	void visit2();//��visit()���������Է���Build�е�˽�г�Ա
};
class Build {
	//���߱����� GoodFriend���µ�visit��Ա������Ϊ�������Ԫ���������Է���˽�г�Ա
	friend void GoodFriend::visit();

private :
	string m_BedRoom;

public :
	string m_SittingRoom;

	Build();
}; 

//����ʵ�ֳ�Ա����
Build::Build() {
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

GoodFriend::GoodFriend() {
	build = new Build;
}

void GoodFriend::visit() {
	cout << "visit�������ڷ��ʣ�" << build->m_SittingRoom << endl;
	cout << "visit�������ڷ��ʣ�" << build->m_BedRoom << endl;
}
void GoodFriend::visit2() {
	cout << "visit2�������ڷ��ʣ�" << build->m_SittingRoom << endl;
	//cout << "visit2�������ڷ��ʣ�" << build->m_BedRoom << endl;
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