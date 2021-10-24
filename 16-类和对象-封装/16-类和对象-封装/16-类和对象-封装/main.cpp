#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include"point.h"//引用头文件才可在这里使用相应类
#include"circle.h"

using namespace std;


////求圆的周长
//double PI = 3.1415926;//定义π
////圆类
//class Circle
//{
//	//访问权限(此处公共)
//public:
//	double r;//属性
//	double CircleLong()//行为(函数)，属性的参数可不写入形参
//	{
//		return 2 * PI * r;
//	}
//};
//
//int main()
//{
//	Circle c1, c2;//类似于结构体
//	c1.r = 1;
//	c2.r = 10;
//	cout << "圆的周长=" << c1.CircleLong() << endl;//别忘了()
//	cout << "圆的周长=" << c2.CircleLong() << endl;
//	return 0;
//}



////学生类，有学号和姓名
//class Student
//{
//public:
//	string id;
//	string name;
//	void ShowStudent()//显示属性
//	{
//		cout << "学号：" << id << "   姓名：" << name << endl;
//	}
//	void ChangeName(string n)//行为给属性赋值，实现改名
//	{
//		name = n;
//	}
//	void Changeid(string n)//同上
//	{
//		id = n;
//	}
//
//};
//
//int main()
//{
//	Student s1,s2;//类初始化
//	s1.id = "0001";
//	s1.name = "张三";
//	s2.id = "0002";
//	s2.name = "李四";
//
//	//显示属性
//	s1.ShowStudent();
//	s2.ShowStudent();
//
//	//行为给属性赋值，实现改名
//	s1.ChangeName("张小三");
//	s1.Changeid("0003");
//	s1.ShowStudent();
//	return 0;
//}



////三种访问权限
//
//class Person
//{
//public:
//	string name;
//protected:
//	string car;
//private:
//	string password;
//public:
//	void Show()
//	{
//		cout << name << car << password << endl;
//	}
//};
//
//int main()
//{
//	Person p1;
//	p1.name = "张三";
//	//其他两种访问权限，不可在类外修改属性
//	p1.Show();
//
//	return 0;
//}



////圆和点-模块化思想（判断点和圆位置关系）
////以下点类和圆类的部分被写入相应"头文件"和"源文件"，此处留完整版作参考
///*省略开始
////点类
//class Point
//{
//private://属性为X，Y值
//	int x;
//	int y;
//public:
//	void SetX(int n)//以下是设定X,Y值和获取值的函数(方法)
//	{
//		x = n;
//	}
//	int GetX()
//	{
//		return x;
//	}
//	void SetY(int n)
//	{
//		y = n;
//	}
//	int GetY()
//	{
//		return y;
//	}
//};
////圆类
//class Circle
//{
//private://属性为半径和圆心(点类)
//	int r;
//	Point center;
//public:
//	void SetR(int n)//设置半径，
//	{
//		r = n;
//	}
//	int GetR()//获取半径
//	{
//		return r;
//	}
//	void SetCenter(int i, int j)//设置圆心
//	{
//		center.SetX(i);
//		center.SetY(j);
//	}
//	Point GetCenter()//获取圆心
//	{
//		return center;
//	}
//	void isInCircle(Point p)//内部行为解决问题
//	{
//		int D1 = (p.GetX() - center.GetX()) * (p.GetX() - center.GetX());//圆有公式：(X-x)^2 + (Y-y)^2 = r^2
//		int D2 = (p.GetY() - center.GetY()) * (p.GetY() - center.GetY());//D1是(X-x)^2		D2是(Y-y)^2
//		int D = r * r;	
//		if (D1 + D2 > D)
//		{
//			cout << "点在圆外" << endl;
//		}
//		else if (D1 + D2 < D)
//		{
//			cout << "点在圆内" << endl;
//		}
//		else
//		{
//			cout << "点在圆上" << endl;
//		}
//	}
//};
////省略结束
//*/
////外部函数解决问题。注意需要#include点、圆头文件，不然类无法识别
//void isInCircle2(Circle& c, Point& p)//取地址&避免额外创建空间。判断点在圆的内外，因为参数不同所以可以重载
//{
//	int D1 = (p.GetX() - c.GetCenter().GetX()) * (p.GetX() - c.GetCenter().GetX());//原理同上
//	int D2 = (p.GetY() - c.GetCenter().GetY()) * (p.GetY() - c.GetCenter().GetY());
//	int D = c.GetR() * c.GetR();
//	if (D1 + D2 > D)
//	{
//		cout << "点在圆外" << endl;
//	}
//	else if (D1 + D2 < D)
//	{
//		cout << "点在圆内" << endl;
//	}
//	else
//	{
//		cout << "点在圆上" << endl;
//	}
//}
//int main()
//{
//	Circle c;
//	Point p;
//
//	//设定圆的属性
//	c.SetCenter(10, 0);
//	c.SetR(10);
//
//	//设定点的属性
//	p.SetX(10);
//	p.SetY(10);//修改点的Y值实现简易验证
//	
//	//判断点和圆位置关系
//	c.isInCircle(p);//类内法
//	isInCircle2(c, p);//外部函数法
//
//	return 0;
//}



////构造、析构、拷贝函数
//class Person
//{
//public:
//	int age;
//	Person()
//	{
//		cout << "默认构造函数调用" << endl;//不写，编译器也会自动写
//	}
//	Person(int n)
//	{
//		age = n;
//		cout << "有参构造函数调用" << endl;//写了有参，编译器就不提供默认，但仍提供拷贝
//	}
//	~Person()
//	{
//		cout << "析构函数调用" << endl;
//	}
//	Person(const Person& p)//①不写，编译器也会自动写，会进行拷贝。②写了，则编译器不提供其他构造函数
//	{
//		age = p.age;//注意参数的const和&符号
//		cout << "拷贝构造函数调用" << endl;
//	}
//};
//void test01()
//{
//	Person p;//默认构造
//	p.age = 18;
//	Person p2(p);//拷贝构造
//	cout << p2.age << endl;
//
//	Person p3(10);//有参构造
//}
//int main()
//{
//	test01();
//
//	return 0;
//}



////浅拷贝，深拷贝
////浅：编译器默认。	深：程序员写，解决重复delete释放内存问题
//class Person
//{
//public:
//	int* m_age;//指针型属性，需要new int(值);等形式，开辟空间赋值
//	Person()
//	{
//		cout << "默认构造函数调用" << endl;
//	}
//	Person(int age)
//	{
//		int* m_age = new int(age);//开辟空间赋值
//		cout << "有参构造函数调用" << endl;
//	}
//	~Person()
//	{
//		cout << "析构函数调用" << endl;
//		if (m_age != NULL)//判断非空，则释放内存
//		{
//			delete m_age;
//			m_age = NULL;
//			cout << "delete调用" << endl;
//		}
//	}
//	Person(const Person& p)//深拷贝，对于会引起重复释放的情况，不自写拷贝函数会bug
//	{
//		m_age = new int(*p.m_age);//拷贝的时候不再用原来的地址，而是开辟一个新空间，避免了二次delete
//		cout << "拷贝构造函数调用" << endl;
//	}
//};
//void test01()
//{
//	Person p;
//	p.m_age = new int(18);
//	Person p2(p);
//	cout << *(p2.m_age) << endl;
//	//由于栈的性质，所以是后来的p2先析构，先来的p1再析构
//}
//int main()
//{
//	test01();
//	return 0;
//}



////初始化列表语法(构造函数)
//
//class Person
//{
//public:
//	int m_a;
//	int m_b;
//	int m_c;
//
//	Person() :m_a(1), m_b(2), m_c(3) {}//默认状态初始化列表
//	Person(int a, int b, int c) :m_a(a), m_b(b), m_c(c) {}//新赋值法
//	//Person(int a, int b, int c)//传统赋值法
//	//{
//	//	m_a = a;
//	//	m_b = b;
//	//	m_c = c;
//	//}
//
//};
//void test01()
//{
//	Person p1;
//	Person p2(4, 5, 6);
//	cout << p1.m_a << p1.m_b << p1.m_c << endl;
//	cout << p2.m_a << p2.m_b << p2.m_c << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}



////return *this 实现链式编程
//class Person
//{
//public:
//	int m_age;
//	Person(int age)
//	{
//		m_age = age;//如果形参和本体都叫age，用this->age表示本体的age
//	}
//	Person& PersonAddPerson(Person& p)//类与类的加法函数，注意用&返回和形参引用
//	{
//		m_age += p.m_age;//p1加到p2上
//		return *this;//*this就是找到调用者本体
//	}
//	Person PersonAddPerson2(Person& p)//如果返回不用&，则相当于每次新拷贝一个p2来加p1
//	{
//		m_age += p.m_age;//p1加到p2上
//		return *this;//*this就是找到调用者本体
//	}
//};
//
//void test01()
//{
//	Person p1(10);
//	Person p2(5);
//	Person p3(5);
//	p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);//相当于同一个p2加了三次p1的值。
//	cout << "p2的age为" << p2.m_age << endl;//5+10+10+10
//
//	p3.PersonAddPerson2(p1).PersonAddPerson2(p1).PersonAddPerson2(p1);//如果调用函数返回值没有&则是另外拷贝p2
//	cout << "p3的age为" << p3.m_age << endl;//5+10。相当于总共3个p3+p1,这里返回了其中一个，另外两个拷贝品不知道在哪
//}
//int main()
//{
//	test01();
//	return 0;
//}



////常对象，常函数
//class Person
//{
//public:
//	int m_age;
//	mutable int m_id;//mutable使得变量在const常函数，常对象中仍可修改，成为特例
//
//	void ChangePerson()
//	{
//		m_age = 10;
//	}
//	void ChangePerson2() const//常函数
//	{
//		//m_age = 10;//常函数不允许在其内部做修改操作
//		m_id = 10;//有mutable修饰的变量为例外，可以在const常函数和常对象中被修改
//	}
//
//};
//void test01()
//{
//	const Person p;//常对象
//	//p.ChangePerson();//常对象只能调用常函数，普通函数不可调用
//	p.ChangePerson2();//常对象正常调用常函数
//
//	//p.m_age = 10;//常对象值不可修改
//	p.m_id = 10;//常对象仍然可修改加了mutable的变量
//}
//int main()
//{
//	test01();
//	return 0;
//}



//friend友元-未写代码