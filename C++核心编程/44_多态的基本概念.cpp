#include <iostream>
using namespace std;

/*
* Animal内部结构：
* 加上virtual之后相当于内部存在一个4字节的指针：
* Animal类的vfptr【v-virtual,f-function,ptr-pointer. 虚函数(表)指针】
* 这个指针指向 Animal类的vftable【v-virtual,f-function.虚函数表】
* 这个表的内部记录虚函数的地址【&Animal1::speak()】
*/
class Animal1 {
public :
	//函数类型前加上virtual表示为虚函数
	virtual void speak() {
		cout << "Animal Speak" << endl;
	}
};

/*
* Cats类内部结构
* Cats类的vfptr ---> Cats类的vftable[&Animal::speak]
* 当子类重写了父类的虚函数，子类中的虚函数表会替换程子类的虚函数地址
* Cats类的vfptr ---> Cats类的vftable[&Cat::speak]
*/
class Cats : public Animal1 {
public:
	void speak() {
		cout << "Cat Speak" << endl;
	}
};

class Dogs : public Animal1 {
public:
	void speak() {
		cout << "Dog Speak" << endl;
	}
};

//地址早绑定，在编译阶段就确定了函数地址
//如果想执行让猫说话，那么这个函数地址就不能提前绑定，需要再运行阶段绑定

//动态多态满足条件：
//1、要实现动态多态，需要有继承关系
//2、子类重写（返回值、形参列表、函数名都要相同）父类的虚函数

//动态多态的使用：
//父类的指针或引用 执行子类对象

/*
* 当父类的指针或引用指向子类对象时，就发生多态：
* Animal &animal = cat; //传的是cat的对象，就动态绑定cat虚函数表中的地址
* animal.speak();
*/
void doSpeak(Animal1& animal) { //Animal1 &animal = cat;
	animal.speak();
}

int test44() {

	Cats cat;
	doSpeak(cat);

	Dogs dog;
	doSpeak(dog);

	//加上virtual之后Animal就变为了4字节
	cout << "sizeof(Animal) = " << sizeof(Animal1) << endl; //4
	
	system("pause");

	return 0; 
}