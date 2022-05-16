#include <iostream>
using namespace std;

class MyInteger {
	friend ostream& operator<< (ostream& out, MyInteger myInteger);

private :
	int m_Num;

public :
	MyInteger() {
		m_Num = 0;
	}
	//重载前置++ 返回引用是为了一直对一个数据进行递增操作
	MyInteger& operator++() {
		++m_Num;
		return *this; //将自身作一个返回
	}

	//重载后置++
	MyInteger operator++ (int) { //int代表占位参数，可以用于区分呢前置和后置递增
		//先返回结果
		MyInteger temp = *this;
		//后递增
		++m_Num;
		//最后将记录结果作返回
		return temp;
	}
};

ostream& operator<< (ostream &out, MyInteger myInteger) {
	out << myInteger.m_Num;
	return out;
}

void test0032() {
	MyInteger my;
	cout << ++(++my) << endl;
	cout << my << endl;

	cout << "---------------------------" << endl;

	//不能使用(my++)++，虽然这里编译器没有直接报错，但是也并不会返回预期的自增两次后的运行结果
	//如果换成普通的int值进行(a++)++，就会看到报错信息
	//因为a++返回的是一个没有进行自增操作的临时变量
	// 而这个临时变量其实就是一个常量，不可以被修改，即不能作为一个左值
	// 而后续的不论是再使用前置++或者后置++，都需要对可以被修改和引用的值（左值）进行操作
	// （关于前置和后置++返回值的问题，可以参考重载函数中的函数返回值）
	// 左值：指定内存，生命周期长
	// 右值：一般不指向任何地方，生命周期短暂
	// a++的结果是拷贝a的值，不是变量的本身，所以无法向一个值进行赋值操作
	cout << (my++)++ << endl;
	cout << (++my)++ << endl;
	cout << my << endl;
}

int test32() {
	test0032();

	system("pause");

	return 0;
}