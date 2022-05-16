#include <iostream>
using namespace std;

//��ͨʵ�ּ�����
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
		/*�������չ�µĹ��ܣ���Ҫ�޸�Դ��
		* ����ʵ�����У��ᳫ����-��ԭ��
		* ������չ���п��������޸Ľ��йر�
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

// ���ö�̬ʵ�ּ�����
// ��̬�ĺô���
// 1.��֯�ṹ����
// 2.�ɶ���ǿ
// ʵ�ּ�����������
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

//�ӷ���������
class AddCalculator : public AbstactCalculator {
public :
	int getResult() {
		return getNum1() + getNum2();
	}
};
//������������
class SubCalculator : public AbstactCalculator {
public:
	int getResult() {
		return getNum1() - getNum2();
	}
};
//�˷���������
class MulCalculator : public AbstactCalculator {
public:
	int getResult() {
		return getNum1() * getNum2();
	}
};
//������������
class DivCalculator : public AbstactCalculator {
public:
	int getResult() {
		return getNum1() / getNum2();
	}
};


//��ͨʵ�ּ���������
void test0045() {
	Calculator c;
	c.setNum1(10);
	c.setNum2(20);
	cout << c.getNum1() << "+" << c.getNum2() << "=" << c.getResult('+') << endl;
	cout << c.getNum1() << "-" << c.getNum2() << "=" << c.getResult('-') << endl;
	cout << c.getNum1() << "*" << c.getNum2() << "=" << c.getResult('*') << endl;
	cout << c.getNum1() << "/" << c.getNum2() << "=" << c.getResult('/') << endl;
}

//��̬ʵ�ּ���������
void test0145() {
	/*
	* ��̬ʹ��������
	* ����ָ�������ָ���������
	*/
	AbstactCalculator* abc = new AddCalculator();
	abc->setNum1(10);
	abc->setNum2(10);
	cout << abc->getNum1() << " + " << abc->getNum2() << " = " << abc->getResult() << endl;
	delete abc; //����Ҫ�ǵ�����

	abc = new SubCalculator(); //����֮��ֻ�ǰѶ����������ͷ��ˣ�ָ������û�б�
	abc->setNum1(20);
	abc->setNum2(10);
	cout << abc->getNum1() << " - " << abc->getNum2() << " = " << abc->getResult() << endl;
	delete abc; //����Ҫ�ǵ�����

	abc = new MulCalculator(); //����֮��ֻ�ǰѶ����������ͷ��ˣ�ָ������û�б�
	abc->setNum1(20);
	abc->setNum2(10);
	cout << abc->getNum1() << " * " << abc->getNum2() << " = " << abc->getResult() << endl;
	delete abc; //����Ҫ�ǵ�����

	abc = new DivCalculator(); //����֮��ֻ�ǰѶ����������ͷ��ˣ�ָ������û�б�
	abc->setNum1(20);
	abc->setNum2(10);
	cout << abc->getNum1() << " / " << abc->getNum2() << " = " << abc->getResult() << endl;
	delete abc; //����Ҫ�ǵ�����
}

int test45() {

	//test0045();
	test0145();

	system("pause");

	return 0;
}