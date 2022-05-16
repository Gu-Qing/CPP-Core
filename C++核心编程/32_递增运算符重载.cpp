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
	//����ǰ��++ ����������Ϊ��һֱ��һ�����ݽ��е�������
	MyInteger& operator++() {
		++m_Num;
		return *this; //��������һ������
	}

	//���غ���++
	MyInteger operator++ (int) { //int����ռλ��������������������ǰ�úͺ��õ���
		//�ȷ��ؽ��
		MyInteger temp = *this;
		//�����
		++m_Num;
		//��󽫼�¼���������
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

	//����ʹ��(my++)++����Ȼ���������û��ֱ�ӱ�������Ҳ�����᷵��Ԥ�ڵ��������κ�����н��
	//���������ͨ��intֵ����(a++)++���ͻῴ��������Ϣ
	//��Ϊa++���ص���һ��û�н���������������ʱ����
	// �������ʱ������ʵ����һ�������������Ա��޸ģ���������Ϊһ����ֵ
	// �������Ĳ�������ʹ��ǰ��++���ߺ���++������Ҫ�Կ��Ա��޸ĺ����õ�ֵ����ֵ�����в���
	// ������ǰ�úͺ���++����ֵ�����⣬���Բο����غ����еĺ�������ֵ��
	// ��ֵ��ָ���ڴ棬�������ڳ�
	// ��ֵ��һ�㲻ָ���κεط����������ڶ���
	// a++�Ľ���ǿ���a��ֵ�����Ǳ����ı��������޷���һ��ֵ���и�ֵ����
	cout << (my++)++ << endl;
	cout << (++my)++ << endl;
	cout << my << endl;
}

int test32() {
	test0032();

	system("pause");

	return 0;
}