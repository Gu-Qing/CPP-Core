#include <iostream>
using namespace std;

/*
* 成员属性设置为私有：
* 1.自己控制读写的权限
* 2.对于写可以检测数据的有效性
*/
class Test {
private :
	string m_Name; //可读可写
	int m_Age; //只读
	string m_Lover; //只写
public :
	void setName(string name) {
		m_Name = name;
	}
	string getName() {
		return m_Name;
	}
	void setAge(int age) {
		m_Age = 0;
		if (age < 0 || age > 150) {
			cout << "Error!" << endl;
			return;
		}
		m_Age = age;
	}
	int getAge() {
		return m_Age;
	}
	void setLover(string lover) {
		m_Lover = lover;
	}
};

int test15() {

	Test t;
	t.setName("Lisi");
	t.setLover("Fyy");
	t.setAge(151);

	cout << t.getName() << " " << t.getAge() << " " << endl;

	t.setAge(11);

	cout << t.getName() << " " << t.getAge() << " " << endl;

	system("pause");

	return 0;
}