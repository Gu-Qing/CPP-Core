#include <iostream>
using namespace std;

/*
* 多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码
* 解决凡是：将父类中的析构函数改为虚析构或纯虚析构
* 
* 虚析构和纯虚析构共性：
* 1.可以解决父类指针释放子类对象的问题
* 2.都需要有具体的函数实现
* 虚析构和纯虚析构的区别：
* 1.纯虚析构是一个抽象类，无法实例化对象
*/

class Animal47 {
public :
	Animal47() {
		cout << "Animal的构造函数" << endl;
	}
	//纯虚函数
	virtual void speak() = 0;
	//利用虚析构解决 父类指针释放子类对象时释放不干净的问题
	//virtual ~Animal47() {
	//	cout << "Animal的析构函数" << endl;
	//}
	// 
	//也可以使用纯虚析构解决这个问题
	//有了纯虚析构之后，这个类也属于抽象类，无法实例化对象
	virtual ~Animal47() = 0;
};

//纯虚析构实现，必须要实现
Animal47 :: ~Animal47() {
	cout << "Animal的纯虚析构" << endl;
}

class Cat47 : public Animal47 {
private :
	string* name;
public :

	Cat47() {
		cout << "Cat的构造函数" << endl;
		this->name = new string("");
	}
	Cat47(string name) {
		cout << "Cat的构造函数" << endl;
		this->name = new string(name);
	}
	virtual void speak() {
		cout << *this->name << "Cat speak" << endl;
	}
	void setName(string name) {
		*(this->name) = name;
	}
	string getName() {
		return *(this->name);
	}

	~Cat47(){
		if (name != NULL) {
			cout << "Cat的析构函数" << endl;
			delete name;
			name = NULL;
		}
	}
};

void test0048() {
	Animal47 *an = new Cat47;
	an->speak();
	delete an;
	an = new Cat47("Tom");
	an->speak();
	//父类指针在析构的时候，不会调用子类中的析构函数
	//导致子类如果有堆区属性，会出现内存泄漏
	delete an;
}

int test48() {

	test0048();

	system("pause");

	return 0;
}