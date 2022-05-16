#include <iostream>
#include <string>
using namespace std;

const double PI = 3.14;

class Circle {

public: //公共权限
	int m_r; //属性

	double getCircumference() { //行为
		return 2 * PI * m_r;
	}
};

class Student {
	//类中的属性和行为统一称为 成员
	//属性： 成员函数、成员变量
	//行为： 成员函数、成员方法
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

	//通过圆类创建具体的圆
	//实例化：通过一个类创建一个对象的过程
	Circle c1;
	c1.m_r = 10; //给圆对象的属性进行赋值
	cout << "Circumference: " << c1.getCircumference() << endl;

	Student s1;
	s1.m_Name = "里斯";
	s1.m_Id = 1;
	s1.showStudent();

	Student s2;
	s2.setName("张三");
	s2.setId(12);
	s2.showStudent();

	system("pause");

	return 0;
}