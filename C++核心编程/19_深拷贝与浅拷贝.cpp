#include <iostream>
using namespace std;

/*
* 浅拷贝：简单的赋值拷贝操作
* 深拷贝：在堆区重新申请空间，进行拷贝操作
* 总结：如果属性有在堆区开辟的，一定要自己提供拷贝函数，防止浅拷贝带来的问题
*/
class Animal {
public :
	Animal() {
		cout << "Animal的默认构造函数调用" << endl;
	}
	Animal(int num, int types) {
		m_Num = num;
		m_Types = new int(types);
		cout << "Animal的有参构造函数调用" << endl;
	}

	//自己实现拷贝构造函数，实现深拷贝
	Animal(const Animal& a) {
		cout << "Animal拷贝构造函数调用" << endl;
		m_Num = a.m_Num;
		//m_Types = a.m_Types; //编译器默认的浅拷贝操作
		m_Types = new int(*a.m_Types);
	}

	~Animal() {
		//析构代码，将堆区开辟数据做释放操作
		if (m_Types != NULL) {
			delete m_Types;
			m_Types = NULL;
		}
		cout << "Animal的析构函数调用" << endl;
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

	//浅拷贝可能会带来堆区的内存重复释放的问题
	Animal a2(a1); //利用编译器提供的拷贝构造函数，会做浅拷贝操作
	cout << "a2's num = " << a2.getNum() << ", Type is " << a2.getTypes() << endl;

}
int test19() {

	test0019();

	system("pause");

	return 0;
}