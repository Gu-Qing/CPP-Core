#include <iostream>
using namespace std;

/*
* 通常父类中虚函数的实现是没有意义的，所以可以将虚函数改为纯虚函数
* virtual 返回值类型 函数名(参数列表) = 0;
* 当类中有了纯虚函数，也就称为抽象类
* 抽象类的特点：
* 1.无法实例化对象
* 2.子类必须重写抽象类中的纯虚函数，否则也属于抽象类
*/
//纯虚函数和抽象类
class AbstractBase {
public :
	//只要有一个纯虚函数，就是抽象类
	virtual void func() = 0;
};

class ExtendBase1 : public AbstractBase{
public :
	//不重写纯虚函数，也是抽象类
};

class ExtendBase2 : public AbstractBase {
public :
	virtual void func() {
		cout << "ExtendBase2" << endl;
	}
};

void test0046() {

	//会报错，不允许实例化对象
	//new AbstractBase;
	//AbstractBase ab; 

	//ExtendBase1 eb;

	AbstractBase *aBase = new ExtendBase2;
	aBase->func();
}

int test46() {

	test0046();

	system("pause");

	return 0;
}