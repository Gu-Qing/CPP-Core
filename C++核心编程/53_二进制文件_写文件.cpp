#include <iostream>
#include <fstream>
using namespace std;

class P {

public :

	char m_Name[64]; //最好不要用string，会有一些不可预知的问题
	int m_Age;
};

int test53() {
	//创建流对象 且打开文件
	ofstream ofs("person.txt", ios::out | ios::binary);
	//打开文件
	//ofs.open("person.txt", ios::out | ios::binary);
	
	//写文件  会发现txt文件中有乱码，但是没有关系，因为是二进制的方式，电脑能看懂就行
	P p = { "Lisi", 18 };
	//把要写入的数据的地址转成const char *
	ofs.write((const char*)&p, sizeof(P));

	//关闭文件
	ofs.close();

	system("pause");

	return 0;
}