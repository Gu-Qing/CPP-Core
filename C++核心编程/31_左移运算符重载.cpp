#include <iostream>
using namespace std;

class Person {
public:
	int m_A;
	int m_B;

	//���ó�Ա�����������������
	// ͨ���������ó�Ա��������<<���������Ϊ�޷�ʵ��cout�����
	//void operator<< (cout) {	} //p.operator<< (cout) �򻯰汾��p << cout
};

//ֻ������ȫ�ֺ����������������
//���������˽�еģ��Ͱ����غ�����Ϊ��Ԫ����
ostream& operator<< (ostream &out, Person &p) {
	out << "m_A = " << p.m_A << ", m_B = " << p.m_B;
	return out;
}

void test0031() {
	Person p1;
	p1.m_A = 10;
	p1.m_B = 20;

	cout << p1 << endl;
}

int test31() {

	test0031();

	system("pause");

	return 0;
}