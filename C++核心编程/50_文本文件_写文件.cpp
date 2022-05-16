#include <iostream>
#include <fstream>
using namespace std;

int test50() {
	//创建流对象
	ofstream ofs; 

	//指定打开方式
	ofs.open("test1.txt", ios::out); //运行后可以在当前文件所在文件夹找到test1.txt文件

	//写内容
	ofs << "姓名：张三" << endl;
	ofs << "年龄：男" << endl;
	ofs << "年龄：18" << endl;

	ofs.close();
	
	system("pause");

	return 0;
}