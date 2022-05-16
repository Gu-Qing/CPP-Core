#include <iostream>
using namespace std;

class Person {
public :

	//1.��Ա��������+��
	//Person operator+(Person& p) {
	//	Person temp;
	//	temp.m_A = this->m_A + p.m_A;
	//	temp.m_B = this->m_B + p.m_B;
	//	return temp;
	//}

	int m_A;
	int m_B;
};

//2.ȫ�ֺ�������+��
Person operator+ (Person& p1, Person &p2) {
	Person temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}

//��������صĺ�������
Person operator+ (Person& p1, int a) {
	Person temp;
	temp.m_A = p1.m_A + a;
	temp.m_B = p1.m_B + a;
	return temp;
}

void test0030() {
	Person p1;
	p1.m_A = 100;
	p1.m_B = 200;
	Person p2;
	p2.m_A = 100;
	p2.m_B = 200;

	//��Ա�������ر��ʵ���
	//Person p3 = p1.operator+(p2);
	//ȫ�ֺ������ر��ʵ���
	//Person p3 = operator+(p1, p2);

	Person p3 = p1 + p2;
	cout << "A = " << p3.m_A << endl;
	cout << "B = " << p3.m_B << endl;

	//���������Ҳ���Է�����������
	p3 = p1 + 10;
	cout << "A = " << p3.m_A << endl;
	cout << "B = " << p3.m_B << endl;
}

int test30() {

	test0030();

	system("pause");

	return 0;
}