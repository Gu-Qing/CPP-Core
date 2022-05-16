#include <iostream>
using namespace std;

class Base {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C; //父类中私有的成员属性虽然访问不到，但是依旧会被继承下去
};
class Son : public Base {
public:
	int m_D;
};

int test39() {
	/*
	* 利用开发人员命令提示工具查看对象模型
	* 1.跳转盘符
	* 2.跳转文件路径： cd 具体路径
	* 3.查看文件名 dir
	* 4.输入：cl /d1 reportSingleClassLayoutSon "39_继承中的对象模型.cpp"
	*/

	//父类中的所有非静态成员属性都会被子类继承下去
	cout << "sizeof(Son) = " << sizeof(Son) << endl;

	system("pause");

	return 0;
}