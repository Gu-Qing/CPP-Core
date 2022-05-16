#include <iostream>
using namespace std;

class AbstractDringking {
public :
	//煮水
	virtual void BoilWarter() = 0;
	//冲泡
	virtual void Brew() = 0;
	//倒入杯中
	virtual void PourInCup() = 0;
	//加入佐料
	virtual void AddOthers() = 0;
	//制作饮品
	void makeDrink() {
		BoilWarter();
		Brew();
		PourInCup();
		AddOthers();
	}
};

class Coffee : public AbstractDringking {

public:
	//煮水
	virtual void BoilWarter() {
		cout << "将煮沸的水放到70℃..." << endl;
	}
	//冲泡
	virtual void Brew() {
		cout << "研磨咖啡豆，用70℃的水冲泡..." << endl;
	}
	//倒入杯中
	virtual void PourInCup() {
		cout << "将冲泡好的咖啡倒入杯中..." << endl;
	}
	//加入佐料
	virtual void AddOthers() {
		cout << "加入冰糖等佐料..." << endl;
	}
};

class Tea : public AbstractDringking {

public:
	//煮水
	virtual void BoilWarter() {
		cout << "让井水煮沸..." << endl;
	}
	//冲泡
	virtual void Brew() {
		cout << "用煮沸的水冲泡茶叶..." << endl;
	}
	//倒入杯中
	virtual void PourInCup() {
		cout << "将冲泡好的茶叶倒入茶具中..." << endl;
	}
	//加入佐料
	virtual void AddOthers() {
		cout << "加入枸杞等佐料..." << endl;
	}
};

void doWork(AbstractDringking* abs) {
	abs->makeDrink();
	delete abs;
}

void test0047() {
	doWork(new Coffee);
	cout << "---------------------------------" << endl;
	doWork(new Tea);
}

int test47() {

	test0047();

	system("pause");

	return 0;
}