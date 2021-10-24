#define _CRT_SECURE_NO_WARNINGS 1
#include"point.h"//引用相应的头文件

//点类源文件
//只保留函数实现，需要加Point::以表明其函数所属于的成员，否则就不是类而是全局函数
void Point::SetX(int n)//以下是设定X,Y值和获取值的函数(方法)
{
	x = n;
}
int Point::GetX()
{
	return x;
}
void Point::SetY(int n)
{
	y = n;
}
int Point::GetY()
{
	return y;
}
//Shfit+Tab	按左对齐缩进