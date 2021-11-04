#pragma once
#include<iostream>
using namespace std;

template<class T>//用.hpp头文件形式，将类模板的声明和定义写在一起，推荐做法。
class Person
{
public:
	Person()
	{
		cout << "Person构造函数调用" << endl;
	}
	void ShowPerson()
	{
		cout << "ShowPerson测试函数调用" << endl;
	}
};