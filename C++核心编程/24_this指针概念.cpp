#include <iostream>
using namespace std;

/*
* C++ͨ���ṩ����Ķ���ָ�룬thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
* 1.thisָ��������ÿһ���Ǿ�̬��Ա�����ڵ�һ��ָ��
* 2.thisָ�벻��Ҫ���壬ֱ��ʹ�ü���
* thisָ�����;��
* 1.���βκͳ�Ա����ͬ��ʱ������thisָ��������
* 2.����ķǾ�̬��Ա�����з��ض���������return *this
*/

class Users {

private :
	int age;
public :
	Users(int age) {
		//thisָ��ָ����Ǳ����õĳ�Ա���� �����Ķ���
		this->age = age;
	}
	int getAge() {
		return this->age;
	}

	Users& UserAddAge(Users& u) {
		this->age += u.age;
		//this��ָ��p2��ָ�룬��*thisָ�����p2���������
		return *this;
	}
};

void test0024() {
	Users u(18);
	cout << u.getAge() << endl;

	Users u1(10);
	Users u2(10);

	//��ʽ���˼��
	u2.UserAddAge(u1).UserAddAge(u1).UserAddAge(u1);
	cout << "u2's age = " << u2.getAge() << endl;

}

int test24() {

	test0024();

	system("pause");

	return 0;
}