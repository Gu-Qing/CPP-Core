#include <iostream>
#include <string>
using namespace std;

const double PI = 3.14;

class Circle {

public: //����Ȩ��
	int m_r; //����

	double getCircumference() { //��Ϊ
		return 2 * PI * m_r;
	}
};

class Student {
	//���е����Ժ���Ϊͳһ��Ϊ ��Ա
	//���ԣ� ��Ա��������Ա����
	//��Ϊ�� ��Ա��������Ա����
public :
	string m_Name;
	int m_Id;

	void showStudent() {
		cout << "Name: " << m_Name << ", Id: " << m_Id << endl;
	}

	void setName(string name) {
		m_Name = name;
	}
	void setId(int id) {
		m_Id = id;
	}
};

int test12() {

	//ͨ��Բ�ഴ�������Բ
	//ʵ������ͨ��һ���ഴ��һ������Ĺ���
	Circle c1;
	c1.m_r = 10; //��Բ��������Խ��и�ֵ
	cout << "Circumference: " << c1.getCircumference() << endl;

	Student s1;
	s1.m_Name = "��˹";
	s1.m_Id = 1;
	s1.showStudent();

	Student s2;
	s2.setName("����");
	s2.setId(12);
	s2.showStudent();

	system("pause");

	return 0;
}