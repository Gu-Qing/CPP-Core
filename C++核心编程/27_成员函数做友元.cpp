#include <iostream>
using namespace std;

/*��Ԫ����һ���������� ������һ�����е�˽�г�Ա*/

class Building {
	//goodGayȫ�ֺ����Ǵ���ĺ����ѣ����Է���Buiding�е�˽�г�Ա
	friend void goodGay(Building* building);
private :
	string m_BedRoom;

public :
	string m_SittingRoom;

	Building() {
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}
};

void goodGay(Building* building) {
	cout << "�û��ѵ�ȫ�ֺ��� ���ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "�û��ѵ�ȫ�ֺ��� ���ڷ��ʣ�" << building->m_BedRoom << endl;
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