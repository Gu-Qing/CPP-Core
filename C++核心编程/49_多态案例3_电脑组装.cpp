#include <iostream>
using namespace std;

class CPU {
public :
	//抽象计算函数
	virtual void calculate() = 0;
};

class VideoCard {
public :
	//抽象显示函数
	virtual void display() = 0;
};
class Memory {
public :
	//抽象存储函数
	virtual void storage() = 0;
};

//电脑类
class Computer {
private :
	CPU *cpu;
	VideoCard *videoCard;
	Memory *memory;

public :
	Computer(CPU* cpu, VideoCard* videoCard, Memory* memory) {
		this->cpu = cpu;
		this->videoCard = videoCard;
		this->memory = memory;
	}

	//工作的函数
	void work() {
		cpu->calculate();
		videoCard->display();
		memory->storage();
	}

	~Computer() {
		if (cpu != NULL) {
			delete cpu;
			cpu = NULL;
		}
		if (videoCard != NULL) {
			delete videoCard;
			videoCard = NULL;
		}
		if (memory != NULL) {
			delete memory;
			memory = NULL;
		}
	}
};

class IntelCPU : public CPU {
public:
	virtual void calculate() {
		cout << "IntelCPU" << endl;
	}
};
class IntelVideoCard : public VideoCard {
public:
	virtual void display() {
		cout << "IntelVideoCard" << endl;
	}
};
class IntelMemory : public Memory {
public:
	virtual void storage() {
		cout << "IntelMemory" << endl;
	}
};

//Lenovo
class LenovoCPU : public CPU {
public:
	virtual void calculate() {
		cout << "LenovoCPU" << endl;
	}
};
class LenovoVideoCard : public VideoCard {
public:
	virtual void display() {
		cout << "LenovoVideoCard" << endl;
	}
};
class LenovoMemory : public Memory {
public:
	virtual void storage() {
		cout << "LenovoMemory" << endl;
	}
};

void test0049() {

	CPU* intelCpu = new IntelCPU;
	VideoCard* intelCard = new IntelVideoCard;
	Memory* intelMemory = new IntelMemory;
	//第一台电脑的组装
	Computer* cmp1 = new Computer(intelCpu, intelCard, intelMemory);
	cmp1->work();
	delete cmp1;
	cout << "----------------------------------------" << endl;
	//第二台电脑的组装
	Computer* cmp2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	cmp2->work();
	delete cmp2;
	cout << "----------------------------------------" << endl;
	//第二台电脑的组装
	Computer* cmp3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);
	cmp3->work();
	delete cmp3;
}

int test49() {

	test0049();

	system("pause");

	return 0;
}