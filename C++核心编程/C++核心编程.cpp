/*
* 1.内存分区模型
* C++程序在执行时，将内存大方向划分为4个区域
* （1）代码区：存放函数体的二进制代码，由操作系统进行管理。共享的、只读的。
* （2）全局区：存放全局变量和静态变量以及常量。
* （3）栈区：由编译器自动分配释放，存放函数的参数值，局部变量等
* （4）堆区：由程序员分配和释放，若程序员不释放，程序结束时由操作系统回收
* 意义：
*	不同取余存放的数据，赋予不同的生命周期，给我们更大的灵活编程
*/

/*
* C++面向对象三大特性：封装、继承、多态
* 1.封装：
* 将属性和行为作为一个整体表现生活中的事物，将属性和行为加以权限控制
* class 类名 {访问权限： 属性/行为 };
*/

/*
* 多态的基本概念：
* 多态分为两类：
* 1.静态多态：函数重载和运算符重载属于静态多态，复用函数名
* 2.动态多态：派生类和虚函数实现运行时多态
* 
* 静态多态和动态多态的区别：
* 1.静态多态的函数地址早绑定---编译阶段确定函数地址
* 2.动态多态的函数地址晚绑定---运行阶段确定函数地址
*/

/*
* 写文件：
* 1.包含头文件 #include <fstream>
* 2.创建流对象 ofstream ofs;
* 3.打开文件 ofs.open("文件路径", 打开方式);
* 4.写数据 ofs << "写入的数据";
* 5.关闭文件 ofs.close();
* 
* 文件打开方式：
* 1.ios::in		为读文件而打开文件
* 2.ios::out	为写文件而打开文件
* 3.ios::ate	初始位置:文件尾
* 4.ios::app	追加方式写文件
* 5.ios::trunc	如果文件存在先删除再创建
* 6.ios::binary	二进制方式
* 
* 注：文件打开方式可以配合使用，利用 | 操作符
* eg：用二进制方式写文件：ios::binary | ios::out
*/

/*
* 读文件：
* 1.包含头文件 #include <fstream>
* 2.创建流对象 ifstream ifs;
* 3.打开文件 ifs.open("文件路径", 打开方式);
* 4.读数据 四种方式读取
* 5.关闭文件 ifs.close();
*/

/*
* 二进制文件：
* 打开方式要指定为ios::binary
* 
* 写文件：
* 二进制方式写文件主要利用流对象调用成员函数write
* 函数原型： ostream& write(const char *buffer, int len);
* 参数解释：字符指针buffer指向内存中一段存储空间。len是读写的字节数
* 
* 读文件：
* 二进制方式读文件主要利用流对象调用成员函数read
* 函数原型： istream& read(char *buffer, int len);
* 参数解释：字符指针buffer指向内存中一段存储空间。len是读写的字节数
*/