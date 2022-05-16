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
		cout << "Per的析构函数" << endl;
	}

	//重载赋值运算符  解决浅拷贝造成的重复释放空间问题
	Per& operator= (Per& p) {
		//编译器的浅拷贝操作：
		//m_Age = p.m_Age;
		
		//先判断是否有属性在堆区，如果有先释放干净再进行深拷贝
		if (m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;
		} 
		//深拷贝
		m_Age = new int(*p.m_Age);
		//返回对象本身
		return *this;
	}
};

void test0034() {
	Per p1(18);
	Per p2(20);
	Per p3(30);

	p3 = p2 = p1;

	cout << "p1的年龄： " << *p1.getAge() << endl;
	cout << "p2的年龄： " << *p2.getAge() << endl;
	cout << "p3的年龄： " << *p3.getAge() << endl;
}

int test34() {

	test0034();
	
	system("pause");

	return 0;
}