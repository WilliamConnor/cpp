#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<fstream>//读写文件的头文件
#include<string>

using namespace std;

////写文件
//void test01()
//{
//	ofstream ofs;//直接用，不需要创建类
//	ofs.open("text.txt", ios::out);//ofs.open打开文件，("路径",打开方式)，没有路径则放在当前目录下，ios::out是输出到文件
//	ofs << "姓名：张三" << endl;//相当于cout<<，但是是输出到文件
//	ofs << "性别：男" << endl;
//	ofs << "年龄：18" << endl;
//	ofs.close();//关闭文件
//}
//int main()
//{
//	test01();
//	return 0;
//}





////读文件
//void test01()
//{
//	ifstream ifs;
//	ifs.open("text.txt", ios::in);//读文件
//
//	if (!ifs.is_open())//判断文件是否打开了，is_open是类自带函数带括号()，!让结果取反，也即打开失败时执行
//	{
//		cout << "文件打开失败" << endl;
//		return;//打开失败，则不再继续执行test01
//	}
//
//	//打开文件四种方式。一边让文件读入buf，一边输出buf内容
//	// 其中定义数组，可以用C的方法char buf[1024]={0}，也可以C++方法string buf
//	//第一种:
//	char buf[1024] = { 0 };//buf作为临时数组存入ifs读取的内容
//	while (ifs >> buf)//让ifs写入buf，当ifs读取到EOF,自动结束循环
//	{
//		cout << buf << endl;
//	}
//	//第二种:
//	char buf[1024] = { 0 };
//	while (ifs.getline(buf, sizeof(buf)))//ifs的getline()函数，buf是要写入的数组，后面是数组元素数量
//	{
//		cout << buf << endl;
//	}
//	//第三种:和第二种的getline会冲突
//	string buf;
//	while (getline(ifs, buf))//全局函数getline，第一个填ifs读取文件，第二个填放入的临时数组buf
//	{
//		cout << buf << endl;
//	}
//	//第四种:不推荐，效率低
//	char c;
//	while ((c = ifs.get()) != EOF)//当ifs写出的值不为EOF（end of file）
//	{
//		cout << c;//一个一个输出
//	}
//
//	ifs.close();//关闭文件
//}
//int main()
//{
//	test01();
//	return 0;
//}





////二进制写文件-可以写入自定义数据类型，比如对象		二进制读文件
//class Person
//{
//public:
//	char m_name[64];//不建议用string,可能出问题，因为底层是C语言写的。以及别忘了[]加上数组大小
//	int m_age;
//};
//
////一、写二进制文件
//void test01()
//{
//	//1.引用头文件
//	
//	//2.打开文件：
//	////方法①：传统打开
//	//ofstream ofs;
//	//ofs.open("Person.txt", ios::out | ios::binary);
//	//方法②：利用构造函数打开
//	ofstream ofs("person.txt", ios::out | ios::binary);//ofs内置构造函数，可以直接传参执行open。位或|实现二进制输入
//
//	//3.写文件
//	Person p = { "张三",18 };//默认没有相应构造函数，但是有这个相应赋值函数
//	ofs.write((const char*)&p, sizeof(p));
//	//参数①：取对象p的地址，强制类型转换成const char*指针。参数②：p的大小
//	//write本身完成了写的这一操作，和之前文本类型的手动写入不一样
//	//输出的文本乱码也无妨，只要能正确读取回来就行
//
//	//4.关闭文件
//	ofs.close();
//}
//
////二、读二进制文件
//void test02()
//{
//	//1.打开文件
//	ifstream ifs;
//	ifs.open("person.txt", ios::in | ios::binary);//二进制读取
//
//	//2.判断是否打开，读文件都要判断，写不用
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败" << endl;
//		return;
//	}
//
//	//3.读取文件
//	Person p2;
//	ifs.read((char*)&p2, sizeof(p2));//read读函数
//	//参数①：要放入的对象的地址，并且需要类型转换成指针。参数②：对象的大小
//
//	//4.验证读取对象结果
//	cout << "姓名：" << p2.m_name << endl;
//	cout << "年龄：" << p2.m_age << endl;
//
//	//5.关闭文件
//	ifs.close();
//}
//
////三、可以用fstream替代ifstream和ofstream，(应该只需要创建一次fs对象就行)
//void test03()
//{
//	//写二进制文件
//		fstream fs;
//		fs.open("person.txt", ios::out | ios::binary);
//		Person p = { "张三",18 };
//		fs.write((const char*)&p, sizeof(p));
//		fs.close();
//
//	//读二进制文件
//		fs.open("person.txt", ios::in | ios::binary);
//		if (!fs.is_open())
//		{
//			cout << "文件打开失败" << endl;
//			return;
//		}
//		Person p3;
//		fs.read((char*)&p3, sizeof(p3));
//		cout << "姓名：" << p3.m_name << endl;
//		cout << "年龄：" << p3.m_age << endl;
//		fs.close();
//}
//int main()
//{
//	test01();//写二进制文件
//	test02();//读二进制文件
//	test03();//测试fstream替代ifstream和ofstream
//	return 0;
//}