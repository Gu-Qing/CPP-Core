#include <iostream>
using namespace std;

//公共继承
class Base1 {
public :
	int m_A;
protected :
	int m_B;
private :
	int m_C;
};

//公共继承
class Son1 : public Base1 {
public :
	void func() {
		m_A = 10; //父类中的公共权限成员，子类中仍然是公共权限
		m_B = 20; //父类中的保护权限成员，子类中仍然是保护写权限
		//m_C = 30; //父类中的私有权限成员，子类访问不到
	}
};

void test0038() {
	Son1 s1;
	s1.m_A = 100;
	//s1.m_B = 200; //到了Son1中，m_B是保护权限，类外访问不到
}

//保护继承
class Base2 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son2 : protected Base2 {
public:
	void func() {
		m_A = 10; //父类中的公共权限成员，子类中变为保护权限
		m_B = 20; //父类中的保护权限成员，子类中仍然是保护写权限
		//m_C = 30; //父类中的私有权限成员，子类访问不到
	}
};
void test0138() {
	Son2 s1;
	//s1.m_A = 100; //Son2中，m_A变为了保护权限，类外无法访问
	//s1.m_B = 200; //到了Son2中，m_B是保护权限，类外访问不到
}

//私有继承
class Base3 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son3 : private Base3 {
public:
	void func() {
		m_A = 10; //父类中的公共权限成员，子类中变为私有权限
		m_B = 20; //父类中的保护权限成员，子类中变为私有权限
		//m_C = 30; //父类中的私有权限成员，子类访问不到
	}
};

void test0238() {
	Son3 s1;
	//s1.m_A = 100; //Son3中，m_A变为了私有权限，类外无法访问
	//s1.m_B = 200; //到了Son3中，m_B是私有权限，类外访问不到
}

class GrandSon3 : public Son3 {
public :
	void func() {
		//m_A = 10; //父类中的私有权限成员，子类访问不到
		//m_B = 20; //父类中的私有权限成员，子类访问不到
	}
};

int test38() {

	system("pause");

	return 0;
}