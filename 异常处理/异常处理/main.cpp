#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<exception>

using namespace std;

////异常处理-子类父类catch问题
//class A{};
//class B : public A{};
//
//void test01()
//{
//	try 
//	{
//		throw B();
//		cout << "本句不被执行";//try一旦拿到了throw，之后语句不再执行，哪怕没有匹配的catch。
//	}
//	catch (A) 
//	{
//		cout << "catch A";
//	}
//	catch (B)
//	{
//		cout << "catch B";
//	}
//	//A是B的父类，throw出B，也会触发catch。这种情况下哪个catch写在前面，就执行那个
//}
//int main()
//{
//	test01();
//	return 0;
//}





////异常处理-套娃catch问题
//void test01()
//{
//	try
//	{
//		throw int();
//	}
//	catch (char)
//	{
//		cout << "catch char";
//	}
//	catch (long)
//	{
//		cout << "catch long";
//	}
//	catch (float)
//	{
//		cout << "catch float";
//	}
//}
//int main()
//{
//	try
//	{
//		test01();//test01中没有匹配的catch，再往上一层main就有了，也会触发相应catch。
//	}
//	catch (int)
//	{
//		cout << "catch int";
//	}
//	return 0;
//}





////异常处理-抓取异常字符
//void test01()
//{
//	try
//	{
//		throw "Unknown Exception";
//	}
//	catch (const char* e)//表示将catch到的字符串储存到e中，不能用&e，原因不明。
//	{
//		cout << e << endl;
//	}
//}
//int main()
//{
//	test01();
//	return 0;
//}