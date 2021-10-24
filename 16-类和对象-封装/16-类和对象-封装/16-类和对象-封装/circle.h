#pragma once
#include<iostream>
#include"point.h"//引用Point的头文件以声明，不然圆类内的Point无法识别
using namespace std;
//圆类 头文件
//只留声明，不留函数具体实现，函数后要加分号;
class Circle
{
private://属性为半径和圆心(点类)
	int r;
	Point center;
public:
	void SetR(int n);//设置半径，
	int GetR();//获取半径
	void SetCenter(int i, int j);//设置圆心
	Point GetCenter();//获取圆心
	void isInCircle(Point p);//内部行为解决问题
};
