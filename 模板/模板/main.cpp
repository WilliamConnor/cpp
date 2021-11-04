#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include"MyArray.hpp"

//#include"person.h"//直接用会出错
//#include"person.cpp"//类模板直接cpp可以调用成功，但不推荐
#include"person.hpp"//hpp是约定俗成的后缀名，推荐


using namespace std;


////模板 和 隐式类型转换
//template<typename T>//模板声明。typename表示后面的T数据类型。可换成class。T是数据类型，一般是大写字母，可任意名称
//void TemplateSwap(T& a, T& b)//交换函数模板，每个模板单独跟一个函数或类，模板声明可以完全一样
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//void test()
//{
//	int a = 10;
//	int b = 20;
//
//	//①自动类型推导，编译器自己判断数据类型，不会隐式类型转换
//	TemplateSwap(a, b);
//	cout << "a=" << a << " b=" << b;
//
//	//②显示指定类型，程序员给定数据类型<>，可以隐式类型转换
//	TemplateSwap<int>(a, b);
//	cout << "a=" << a << " b=" << b;
//}
//int main()
//{
//	test();
//	return 0;
//}





////模板-实现数组排序模板
////①两个数交换模板
//template<typename T>
//void SwapTemplate(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
////②数组排序模板-递增选择排序
//template<typename T>
//void SortTemplate(T a[], int sz)//注意数组形参，a[]而且不带&引用
//{
//	int i, j, min;
//	for (i = 0; i < sz; i++)
//	{
//		min = i;
//		for (j = i + 1; j < sz; j++)
//		{
//			if (a[min] > a[j])//修改<就可递减，递增时'\0'会作为第一个元素，虽然不显示，但是会有
//			{
//				min = j;
//			}
//		}
//		if (min != i)
//		{
//			SwapTemplate(a[min], a[i]);
//		}
//	}
//}
////③打印数组模板
//template<typename T>
//void PrintTemplate(T a[], int sz)//注意数组形参
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		cout << a[i] << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	int a[] = { 6,5,7,4,8,9,3,2,1 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	SortTemplate(a, sz);
//	PrintTemplate(a, sz);
//}
//void test02()
//{
//	char c[] = "fdbace";
//	int sz = sizeof(c) / sizeof(c[0]);
//	SortTemplate(c, sz);
//	PrintTemplate(c, sz);
//}
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}





////普通函数 先于 函数模板 调用
//int PrintTemplate(int& a, int& b)
//{
//	cout << "普通函数调用" << endl;
//	return a + b;
//}
//template<typename T>
//T PrintTemplate(T& a, T& b)
//{
//	cout << "模板调用" << endl;
//	return a + b;
//}
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	PrintTemplate(a, b);//默认优先普通函数，哪怕普通函数没有实现
//	PrintTemplate<>(a, b);//加了空的<>就会优先模板
//}
//void test02()
//{
//	char a = 'a';
//	char b = 'b';
//	PrintTemplate(a, b);//所以优先模板。普通函数对char进行隐式类型转换成ASCII码值也可int计算，但不如直接char计算方便。
//}
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}





////模板特例化-应对自定义数据类型比如对象时
//class Person
//{
//public:
//	string m_name;
//	int m_age;
//	Person(string name, int age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//};
//template<class T>
//bool IsSame(T& a, T& b)//判断两数是否相等
//{
//	if (a == b)
//		return true;
//	else
//		return false;
//}
//template<> bool IsSame(Person& a, Person& b)//特化模板，判断Person是否相等。前面加template<>，传参改成具体数据类型
//{
//	if (a.m_age==b.m_age&&a.m_name==b.m_name)
//		return true;
//	else
//		return false;
//}
//void test01()
//{
//	Person p1("Tom", 18);
//	Person p2("Tom", 18);
//	int ret = IsSame(p1, p2);
//	if (ret == true)
//		cout << "p1==p2" << endl;
//	else
//		cout << "p1!=p2" << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}





////类模板 和 默认参数
////补充默认参数要点：从开始设置默认开始，之后的都必须设置默认，之前的不必须。
//template<class NameType = string, class AgeType = int>//类模板NameType和AgeType就相当于T，名字任意。AgeType = int就是调用时<>没给定数据类型时的默认类型
//class Person
//{
//public:
//	NameType m_name;
//	AgeType m_age;
//	Person(NameType name, AgeType age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//};
//void test01()
//{
//	Person<string, int>p1("Tom", 18);//必须<>，否则无法识别参数的数据类型
//	Person<> p2("William", 21);//在有默认数据类型的情况可以只留<>，类型就用默认数据类型了
//
//	cout << p1.m_name <<" " << p1.m_age << endl;
//	cout << p2.m_name <<" " << p2.m_age << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}





////类模板-继承问题，和typeid().name查看数据类型
//template<class T>
//class Person
//{
//public:
//	T m_name;
//};
//template<class T, class T2>//子类继承灵活，父类和子类的数据类型在创建对象的时候再给定
//class Son:public Person<T>//继承时，在父类后加<>，里面写上父类的数据类型
//{
//	public:
//	T2 m_age;
//	Son()//构造函数，让对象创建时显示它被赋予的数据类型
//	{
//		cout << "T的数据类型为" << typeid(T).name() << endl;
//		cout << "T2的数据类型为" << typeid(T2).name() << endl;
//	}
//};
//
//void test01()
//{
//	Son<char, int> s;//子类作为类模板需要<>给定数据类型，否则无法申请空间创建对象
//}
//int main()
//{
//	test01();
//	return 0;
//}





////类模板-分文件编写(头文件、源文件问题)
//////以下是未分离的完整类模板
////template<class T>
////class Person
////{
////public:
////	Person()
////	{
////		cout << "构造函数调用" << endl;
////	}
////	void ShowPerson()
////	{
////		cout << "测试函数调用" << endl;
////	}
////};
//void test01()//类模板的声明和定义放在.hpp头文件里了
//{
//	Person<int>p;
//	p.ShowPerson();
//}
//int main()
//{
//	test01();
//	return 0;
//}





////类模板案例-数组模板-MyArray.hpp
//void test01()
//{
//	MyArray<int> arr1(10);//需要<>中指明元素，否则不知道申请多少空间
//	cout << "arr1的capacity = " << arr1.getCapacity() << endl;
//	cout << "arr1的size = " << arr1.getSize() << endl;
//	cout << endl;
//
//	MyArray<int>arr2(arr1);//拷贝构造
//	cout << "arr2的capacity = " << arr2.getCapacity() << endl;
//	cout << "arr2的size = " << arr2.getSize() << endl;
//	cout << endl;
//
//	MyArray<int> arr3(20);
//	arr3 = arr1;//赋值运算符重载
//	cout << "arr3的capacity = " << arr3.getCapacity() << endl;
//	cout << "arr3的size = " << arr3.getSize() << endl;
//	cout << endl;
//}
//void test02()
//{
//	//插入5个元素
//	int i;
//	MyArray<int> arr1(10);
//	for (i = 0; i < 5; i++)
//	{
//		arr1.Push_rear(i);//简单把i尾插进数组
//	}
//	arr1.Print();
//	cout << endl;
//
//	//删除两个元素
//	arr1.Pop_rear();
//	arr1.Pop_rear();
//	arr1.Print();
//}
//void test03()
//{
////不测了
//}
//
//int main()
//{
//	test01();//测试 数组初始化
//	test02();//测试 尾插和尾删
//	test03();//测试 自定义数据类型 的 数组模板
//	return 0;
//}