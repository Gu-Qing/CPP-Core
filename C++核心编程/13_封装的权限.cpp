#include <iostream>
using namespace std;

/*
* public：公共权限 类内可以访问，类外可以访问
* protected：保护权限 类内可以访问，类外不可以访问 儿子可以访问父亲中的protected内容
* private：私有权限 类内可以访问，类外不可以访问 儿子不可以访问父亲中的private内容
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
		m_Name = "张三";
		m_id = "333333333";
		m_password = "1234";
	}
};
int test13() {

	Person p1;
	p1.m_Name = "里斯";
	/*p1.m_id = "34343434";
	p1.m_password = "123145";*/
	p1.func();
	
	system("pause");

	return 0;
}