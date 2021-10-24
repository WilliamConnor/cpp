#define _CRT_SECURE_NO_WARNINGS 1
#include"circle.h"//圆类的源文件 引用 圆类的头文件 作 声明

//圆类
//以下函数名前加Circle::否则元素center无法识别
void Circle::SetR(int n)//设置半径，
{
	r = n;
}
int Circle::GetR()//获取半径
{
	return r;
}
void Circle::SetCenter(int i, int j)//设置圆心
{
	center.SetX(i);
	center.SetY(j);
}
Point Circle::GetCenter()//获取圆心
{
	return center;
}
void Circle::isInCircle(Point p)//内部行为解决问题
{
	int D1 = (p.GetX() - center.GetX()) * (p.GetX() - center.GetX());//圆有公式：(X-x)^2 + (Y-y)^2 = r^2
	int D2 = (p.GetY() - center.GetY()) * (p.GetY() - center.GetY());//D1是(X-x)^2		D2是(Y-y)^2
	int D = r * r;
	if (D1 + D2 > D)
	{
		cout << "点在圆外" << endl;
	}
	else if (D1 + D2 < D)
	{
		cout << "点在圆内" << endl;
	}
	else
	{
		cout << "点在圆上" << endl;
	}
}