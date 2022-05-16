#include <iostream>
using namespace std;

/*
* 菱形继承：
* 两个派生类继承同一个基类
* 又有某个类同时继承这两个派生类
* 称为菱形继承（钻石继承）
* 
* eg：动物为基类，羊和驼继承了动物类，羊驼分别继承了羊和驼
* 菱形继承问题：
* 1.羊继承了动物的数据，驼也继承了动物的数据，当羊驼使用数据时，会产生二义性
* 2.羊驼继承自动物的数据继承了两份，但事实上只需要一份
*/
class Animals {
public :
	int m_Age;
};

//虚继承 能解决菱形继承重复数据的问题
//在继承的继承关系之前加上virtual变为虚继承
//最大的类Animal称为虚基类
//实际上虚继承使羊驼类继承的不再是两个数据而是两个指针
//这两个指针会指向动物类的唯一的一个数据
class Sheep : virtual public Animals{};

class Tuo : virtual public Animals {};

class SheepTuo :public Sheep, public Tuo {};

void test0043() {
	SheepTuo st;
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;//加上虚继承以后数据就只剩下一份，取最后更改的值

	//当菱形继承，两个父类拥有相同数据，加作用域区分即可
	cout << "Sheep: " << st.Sheep::m_Age << endl;
	cout << "Tuo: " << st.Tuo::m_Age << endl;
	cout << "st.m_Age: " << st.m_Age << endl; //加上虚继承后不再报错，数据只剩下一份

	//菱形继承导致数据有两份，资源浪费
}

int test43() {

	test0043();

	system("pause");

	return 0;
}