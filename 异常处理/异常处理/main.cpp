#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<exception>

using namespace std;

////�쳣����-���ุ��catch����
//class A{};
//class B : public A{};
//
//void test01()
//{
//	try 
//	{
//		throw B();
//		cout << "���䲻��ִ��";//tryһ���õ���throw��֮����䲻��ִ�У�����û��ƥ���catch��
//	}
//	catch (A) 
//	{
//		cout << "catch A";
//	}
//	catch (B)
//	{
//		cout << "catch B";
//	}
//	//A��B�ĸ��࣬throw��B��Ҳ�ᴥ��catch������������ĸ�catchд��ǰ�棬��ִ���Ǹ�
//}
//int main()
//{
//	test01();
//	return 0;
//}





////�쳣����-����catch����
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
//		test01();//test01��û��ƥ���catch��������һ��main�����ˣ�Ҳ�ᴥ����Ӧcatch��
//	}
//	catch (int)
//	{
//		cout << "catch int";
//	}
//	return 0;
//}





////�쳣����-ץȡ�쳣�ַ�
//void test01()
//{
//	try
//	{
//		throw "Unknown Exception";
//	}
//	catch (const char* e)//��ʾ��catch�����ַ������浽e�У�������&e��ԭ������
//	{
//		cout << e << endl;
//	}
//}
//int main()
//{
//	test01();
//	return 0;
//}