#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>

using namespace std;


////运算符重载-让原有的运算符具有计算新类型数据的能力
//class Person
//{
//public:
//	int m_a;
//	////①成员函数的运算符重载-和全局函数冲突，只留一个
//	//Person operator+ (Person & p)//operator就是重载的函数名，+号不要打成中文，别忘了&
//	//{
//	//	Person temp;
//	//	temp.m_a = this->m_a + p.m_a;
//	//	return temp;//让临时的p3成为p1+p2再返回这个p3
//	//}
//};
//
////②全局函数重载
//Person operator+ (Person& p1, Person& p2)//operator就是重载的函数名，+号不要打成中文，别忘了&
//{
//	Person temp;
//	temp.m_a = p1.m_a + p2.m_a;
//	return temp;//让临时的p3成为p1+p2再返回这个p3
//}
//Person operator+ (Person& p1, int n)//参数不同的函数重载
//{
//	Person temp;
//	temp.m_a = p1.m_a + n;
//	return temp;
//}
//
//void test01()
//{
//	Person p1;
//	p1.m_a = 1;
//	Person p2;
//	p2.m_a = 2;
//	//以下为运算符重载的加法
//	Person p3 = p1 + p2;
//	Person p4 = p1 + 4;//实现函数重载
//	cout << p3.m_a << endl;
//	cout << p4.m_a << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



////运算符重载<<，让cout<<可以输出 对象 这样的自定义数据类型
//class Person
//{
//public:
//	int m_a = 1;
//	int m_b = 2;
//	//成员函数只能实现p<<cout，不能在此使用
//};
//ostream& operator<<(ostream &cout,Person &p)//全局函数重载运算符<<。cout是ostream-标准输出流格式，可以右键转到定义查看。cout和Person都要&
////返回值是cout的类型ostream&，最后return cout，这样才能再在后面接内容，链式思想。否则连endl都会报错
////另-引用可以起别名，这里cout改成任意名字在局部函数内都可行
//{
//	cout << "a=" << p.m_a << " b=" << p.m_b;
//	return cout;
//}
//////后接其他内容会报错的版本，没有有体现链式思想
////void operator<<(ostream& cout, Person& p)
////{
////	cout << "a=" << p.m_a << " b=" << p.m_b;
////}
//void test01()
//{
//	Person p1;
//	p1.m_a = 1;
//	p1.m_b = 2;
//	cout << p1 << endl;//算数符重载函数如果没返回cout，无法接endl等后续内容
//}
//int main()
//{
//	test01();
//	return 0;
//}



////运算符重载 ++ -- 递增递减
//class myint//自定义整型myint
//{
//	friend ostream& operator<<(ostream& cout, myint a);
//private:
//	int m_a;
//public:
//	myint()//构造函数
//	{
//		m_a = 0;
//	}
//	//自增运算符重载
//	myint& operator++()//前置递增++myint	引用&，否则不是对原数据操作
//	{
//		m_a++;
//		return *this;//*this就是返回了原数据(指针解引用)
//	}
//	myint operator++(int)//后置递增myint++
//	{
//		myint temp = *this;//让temp等于现在的自定义数据值，注意temp类型是myint
//		m_a++;//自增1
//		return temp;//返回自增前的值，但是原数据已经+1了
//	}
//
//	//自减运算符重载-同上
//	myint& operator--()
//	{
//		m_a--;
//		return *this;
//	}
//	myint operator--(int)
//	{
//		myint temp = *this;
//		m_a--;
//		return temp;
//	}
//};
//
////借用<<重载的方法来输出数据
//ostream& operator<<(ostream& cout, myint a)
//{
//	cout << a.m_a;
//	return cout;
//}
//
//void test01()
//{
//	//前置递增
//	myint a;
//	cout << ++(++a) << endl;
//	cout << a << endl;
//	//后置递增
//	myint b;
//	cout << b++ << endl;
//	cout << b << endl;
//	//原本的int就不可以连续后增，此处虽不报错，但输出和单次递增一样
//	myint c;
//	cout << (((c++)++)++)++ << endl;
//	cout << c << endl;
//
//	cout << endl;
//}
//int main()
//{
//	test01();
//	int a = 10;
//	cout << ++(++a) << endl;//12
//	a = 10;
//	cout << (++a)++ << endl;//11
//	//cout << (a++)++ << endl;//此句报错因为a不可连续后增2
//	return 0;
//}



////赋值运算符=	重载
//class Person
//{
//public:
//	int* m_a;//指针类型数据会有浅拷贝问题，即析构函数会两次删除同一地址，用new开辟新地址再指针指向新地址可解决
//	
//	Person(int n)
//	{
//		m_a = new int(n);
//	}
//	~Person()
//	{
//		if (m_a != NULL)//不为空时释放空间
//		{
//			delete m_a;
//			m_a = NULL;
//		}
//	}
//	Person& operator=(Person& p)//赋值运算符重载
//	{
//		if (m_a != NULL)
//		{
//			delete m_a;
//			m_a = NULL;
//		}
//		m_a = new int(*p.m_a);//欲赋的值是指针，所以解引用*得值，再new开辟一个新地址放这个值，最后本体指针指向它，这样就不会有重复delete的问题，实现深拷贝
//		return *this;//不返回自身的话，无法实现链式连续赋值，注意返回类型也要相应设置为Person&本身
//	}
//};
//void test01()
//{
//	Person p1(18);
//	Person p2(20);
//	Person p3(30);
//	p3 = p2 = p1;
//
//	cout << "p1的a=" << *p1.m_a << endl;
//	cout << "p2的a=" << *p2.m_a << endl;
//	cout << "p3的a=" << *p3.m_a << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}



////关系运算符重载 =! ==
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
//	bool operator==(Person& p)//判断相等的重载 bool布尔类型
//	{
//		if (m_name == p.m_name && m_age == p.m_age)//p1和p2所有属性都相等则返回真，否则假
//			return true;
//		return false;
//	}
//	bool operator!=(Person& p)//判断不相等的重载
//	{
//		if (m_name == p.m_name && m_age == p.m_age)
//			return false;
//		return true;
//	}
//};
//void test01()
//{
//	Person p1("Tom", 18);
//	Person p2("Tom", 18);
//
//	if (p1 == p2)
//	{
//		cout << "p1和p2相等" << endl;
//	}
//	else 
//	{
//		cout << "p1和p2不相等" << endl;
//	}
//
//	if (p1 != p2)
//	{
//		cout << "p1和p2不相等" << endl;
//	}
//	else
//	{
//		cout << "p1和p2相等" << endl;
//	}
//}
//int main()
//{
//	test01();
//	return 0;
//}