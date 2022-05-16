#include <iostream>
using namespace std;

//普通实现计算器
class Calculator{
private :
	int m_Num1;
	int m_Num2;

public :
	int getResult(char oper) {
		if (oper == '+') {
			return m_Num1 + m_Num2;
		}
		else if (oper == '-') {
			return m_Num1 - m_Num2;
		}
		else if (oper == '*') {
			return m_Num1 * m_Num2;
		}
		else {
			return m_Num1 / m_Num2;
		}
		/*如果想扩展新的功能，需要修改源码
		* 再真实开发中，提倡“开-闭原则”
		* 即对扩展进行开发，对修改进行关闭
		*/
	}

	int getNum1() {
		return m_Num1;
	}
	void setNum1(int num) {
		m_Num1 = num;
	}
	int getNum2() {
		return m_Num2;
	}
	void setNum2(int num) {
		m_Num2 = num;
	}
};

// 利用多态实现计算器
// 多态的好处：
// 1.组织结构清晰
// 2.可读性强
// 实现计算器抽象类
class AbstactCalculator {
private :
	int num1;
	int num2;

public :
	virtual int getResult() {
		return 0;
	}

	int getNum1() {
		return num1;
	}
	void setNum1(int num) {
		num1 = num;
	}
	int getNum2() {
		return num2;
	}
	void setNum2(int num) {
		num2 = num;
	}
};

//加法计算器类
class AddCalculator : public AbstactCalculator {
public :
	int getResult() {
		return getNum1() + getNum2();
	}
};
//减法计算器类
class SubCalculator : public AbstactCalculator {
public:
	int getResult() {
		return getNum1() - getNum2();
	}
};
//乘法计算器类
class MulCalculator : public AbstactCalculator {
public:
	int getResult() {
		return getNum1() * getNum2();
	}
};
//除法计算器类
class DivCalculator : public AbstactCalculator {
public:
	int getResult() {
		return getNum1() / getNum2();
	}
};


//普通实现计算器测试
void test0045() {
	Calculator c;
	c.setNum1(10);
	c.setNum2(20);
	cout << c.getNum1() << "+" << c.getNum2() << "=" << c.getResult('+') << endl;
	cout << c.getNum1() << "-" << c.getNum2() << "=" << c.getResult('-') << endl;
	cout << c.getNum1() << "*" << c.getNum2() << "=" << c.getResult('*') << endl;
	cout << c.getNum1() << "/" << c.getNum2() << "=" << c.getResult('/') << endl;
}

//多态实现计算器测试
void test0145() {
	/*
	* 多态使用条件：
	* 父类指针或引用指向子类对象
	*/
	AbstactCalculator* abc = new AddCalculator();
	abc->setNum1(10);
	abc->setNum2(10);
	cout << abc->getNum1() << " + " << abc->getNum2() << " = " << abc->getResult() << endl;
	delete abc; //用完要记得销毁

	abc = new SubCalculator(); //销毁之后只是把堆区的数据释放了，指针类型没有变
	abc->setNum1(20);
	abc->setNum2(10);
	cout << abc->getNum1() << " - " << abc->getNum2() << " = " << abc->getResult() << endl;
	delete abc; //用完要记得销毁

	abc = new MulCalculator(); //销毁之后只是把堆区的数据释放了，指针类型没有变
	abc->setNum1(20);
	abc->setNum2(10);
	cout << abc->getNum1() << " * " << abc->getNum2() << " = " << abc->getResult() << endl;
	delete abc; //用完要记得销毁

	abc = new DivCalculator(); //销毁之后只是把堆区的数据释放了，指针类型没有变
	abc->setNum1(20);
	abc->setNum2(10);
	cout << abc->getNum1() << " / " << abc->getNum2() << " = " << abc->getResult() << endl;
	delete abc; //用完要记得销毁
}

int test45() {

	//test0045();
	test0145();

	system("pause");

	return 0;
}