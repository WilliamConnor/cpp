#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>

using namespace std;


////继承-以网页为例
//class BasePage//父类，即网站统一布局的部分
//{
//public:
//	void header()
//	{
//		cout << "项目、视频、登录、注册……(网站上面)" << endl;
//	}
//	void footer()
//	{
//		cout << "声明、语言……(网站下面)" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++……(网站左边)" << endl;
//	}
//};
//class Java : public BasePage//继承的格式，class A : 继承方式 B		A是子类或叫派生类，B是父类或叫基类
//{
//public:
//	void content()
//	{
//		cout << "Java视频列表(网页核心内容)" << endl;
//	}
//};
//class Python : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Python视频列表(网页核心内容)" << endl;
//	}
//};
//class Cpp : public BasePage//Ja Py Cpp三种学习页面的子类
//{
//public:
//	void content()
//	{
//
//		cout << "C++视频列表(网页核心内容)" << endl;
//	}
//};
//void test01()
//{
//	Java ja;
//	Python py;
//	Cpp cpp;
//	//子类包含继承来的共性，和自身的个性
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	cout << "----------------------------------------" << endl;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//	cout << "----------------------------------------" << endl;
//	cpp.header();
//	cpp.footer();
//	cpp.left();
//	cpp.content();
//}
//int main()
//{
//	test01();
//	return 0;
//}





////VS开发人员命令提示符 查看对象模型(类的结构)-被编译器隐藏的父类private继承
////D:			跳转盘符
////cd 路径		跳至路径
////dir			查看当前目录内容
////cl /d1 reportSingleClassLayout类名 "文件名.cpp"
////文件名.cpp可以TAB快速填充（cl是字母L，d1是数字1）- 没成功可能是类名写的有出入
//class Father
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//};
//class Son : public Father
//{
//public:
//	int m_d;
//};
//void test01()
//{
//	cout<<sizeof(Son);//16
//}
//int main()
//{
//	test01();
//	return 0;
//}





////多继承	不同父类的成员同名引发二义性，需要作用域::解决
//class Base1
//{
//public:
//	int m_a;
//	Base1()
//	{
//		m_a = 1;
//	}
//};
//class Base2
//{
//public:
//	int m_a;
//	Base2()
//	{
//		m_a = 2;
//	}
//};
//class Son : public Base1, public Base2
//{
//public:
//	static int m_a;//静态成员类内声明
//};
//int Son::m_a = 3;//静态成员类外初始化，注意格式
//
//void test01()
//{
//	Son s;
//	cout << s.Base1::m_a << endl;
//	cout << s.Base2::m_a << endl;
//	cout << s.m_a << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}