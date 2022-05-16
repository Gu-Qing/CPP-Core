#include <iostream>
using namespace std;

/*
* ǳ�������򵥵ĸ�ֵ��������
* ������ڶ�����������ռ䣬���п�������
* �ܽ᣺����������ڶ������ٵģ�һ��Ҫ�Լ��ṩ������������ֹǳ��������������
*/
class Animal {
public :
	Animal() {
		cout << "Animal��Ĭ�Ϲ��캯������" << endl;
	}
	Animal(int num, int types) {
		m_Num = num;
		m_Types = new int(types);
		cout << "Animal���вι��캯������" << endl;
	}

	//�Լ�ʵ�ֿ������캯����ʵ�����
	Animal(const Animal& a) {
		cout << "Animal�������캯������" << endl;
		m_Num = a.m_Num;
		//m_Types = a.m_Types; //������Ĭ�ϵ�ǳ��������
		m_Types = new int(*a.m_Types);
	}

	~Animal() {
		//�������룬�����������������ͷŲ���
		if (m_Types != NULL) {
			delete m_Types;
			m_Types = NULL;
		}
		cout << "Animal��������������" << endl;
	}

	int getNum() {
		return m_Num;
	}
	int getTypes() {
		return *m_Types;
	}

private :
	int m_Num;
	int* m_Types;
};


void test0019() {
	Animal a1(18, 2);
	cout << "a1's num = " << a1.getNum() << ", Type is " << a1.getTypes() << endl;

	//ǳ�������ܻ�����������ڴ��ظ��ͷŵ�����
	Animal a2(a1); //���ñ������ṩ�Ŀ������캯��������ǳ��������
	cout << "a2's num = " << a2.getNum() << ", Type is " << a2.getTypes() << endl;

}
int test19() {

	test0019();

	system("pause");

	return 0;
}