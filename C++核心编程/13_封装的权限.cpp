#include <iostream>
using namespace std;

/*
* public������Ȩ�� ���ڿ��Է��ʣ�������Է���
* protected������Ȩ�� ���ڿ��Է��ʣ����ⲻ���Է��� ���ӿ��Է��ʸ����е�protected����
* private��˽��Ȩ�� ���ڿ��Է��ʣ����ⲻ���Է��� ���Ӳ����Է��ʸ����е�private����
*/
class Person {
public :
	string m_Name;
protected :
	string m_id;
private :
	string m_password;

public :
	void func() {
		m_Name = "����";
		m_id = "333333333";
		m_password = "1234";
	}
};
int test13() {

	Person p1;
	p1.m_Name = "��˹";
	/*p1.m_id = "34343434";
	p1.m_password = "123145";*/
	p1.func();
	
	system("pause");

	return 0;
}