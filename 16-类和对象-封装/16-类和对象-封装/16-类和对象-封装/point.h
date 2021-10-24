#pragma once
#include<iostream>
using namespace std;

//点类头文件声明
class Point
{
private://头文件中属性不变
	int x;
	int y;
	//头文件只留声明
	//即以下函数的具体实现内容不留，并且加分号;
public:
	void SetX(int n);
	int GetX();
	void SetY(int n);
	int GetY();
};
