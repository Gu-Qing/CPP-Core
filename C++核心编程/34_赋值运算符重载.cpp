#include <iostream>
using namespace std;

class Per {
private :
	int* m_Age;

public :
	Per(int age) {
		m_Age = new int(age);
	}
	int* getAge() {
		return m_Age;
	}

	~Per() {
		if (m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;
		}
		cout << "Per����������" << endl;
	}

	//���ظ�ֵ�����  ���ǳ������ɵ��ظ��ͷſռ�����
	Per& operator= (Per& p) {
		//��������ǳ����������
		//m_Age = p.m_Age;
		
		//���ж��Ƿ��������ڶ�������������ͷŸɾ��ٽ������
		if (m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;
		} 
		//���
		m_Age = new int(*p.m_Age);
		//���ض�����
		return *this;
	}
};

void test0034() {
	Per p1(18);
	Per p2(20);
	Per p3(30);

	p3 = p2 = p1;

	cout << "p1�����䣺 " << *p1.getAge() << endl;
	cout << "p2�����䣺 " << *p2.getAge() << endl;
	cout << "p3�����䣺 " << *p3.getAge() << endl;
}

int test34() {

	test0034();
	
	system("pause");

	return 0;
}