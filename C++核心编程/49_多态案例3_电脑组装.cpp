#include <iostream>
using namespace std;

class CPU {
public :
	//������㺯��
	virtual void calculate() = 0;
};

class VideoCard {
public :
	//������ʾ����
	virtual void display() = 0;
};
class Memory {
public :
	//����洢����
	virtual void storage() = 0;
};

//������
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

	//�����ĺ���
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
	//��һ̨���Ե���װ
	Computer* cmp1 = new Computer(intelCpu, intelCard, intelMemory);
	cmp1->work();
	delete cmp1;
	cout << "----------------------------------------" << endl;
	//�ڶ�̨���Ե���װ
	Computer* cmp2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	cmp2->work();
	delete cmp2;
	cout << "----------------------------------------" << endl;
	//�ڶ�̨���Ե���װ
	Computer* cmp3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);
	cmp3->work();
	delete cmp3;
}

int test49() {

	test0049();

	system("pause");

	return 0;
}