#include <iostream>
using namespace std;
/*
* 1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
* 2.ֵ���ݵķ�ʽ������������ֵ
* 3.ֵ��ʽ���ؾֲ�����
* 
* ���캯�����ù���
* ����û������вι��캯����C++�����ṩĬ���޲ι��캯�������ǻ��ṩĬ�Ͽ������캯��
* ����û����忽�����캯����C++�������ṩ�������캯��
*/
class Person2 {
public :
	Person2() {
		cout << "PersonĬ�Ϲ��캯��" << endl;
	}
	Person2(int age) {
		m_age = age;
		cout << "Person���вι���" << endl;
	}
	Person2(const Person2& p) {
		m_age = p.m_age;
		cout << "Person�Ŀ������캯��" << endl;
	}

	~Person2() {
		cout << "Person����������" << endl;
	}

	int getAge() {
		return m_age;
	}

private :
	int m_age;
};

void test003() {
	Person2 p1(20);
	Person2 p2(p1);

	cout << "p2�����䣺" << p2.getAge() << endl;
}

//ֵ���ݵķ�ʽ������������ֵ
void dow(Person2 p) {

}
void test004() {
	Person2 p;
	dow(p); //ʵ�δ����βε�ʱ��ͻ���ÿ������캯��
}

//ֵ��ʽ���ؾֲ�����
Person2 dow2() {
	Person2 p1;
	cout << "dow2��p1�ĵ�ַ�� " << (int)&p1 << endl;
	return p1;
}

void test005() {
	Person2 p = dow2();
	cout << "test005��p�ĵ�ַ�� " << (int)&p << endl;;
}

int test18() {

	//test003();
	//test004();
	test005();

	system("pause");

	return 0;
}