#pragma once
#include<iostream>
#include"point.h"//����Point��ͷ�ļ�����������ȻԲ���ڵ�Point�޷�ʶ��
using namespace std;
//Բ�� ͷ�ļ�
//ֻ��������������������ʵ�֣�������Ҫ�ӷֺ�;
class Circle
{
private://����Ϊ�뾶��Բ��(����)
	int r;
	Point center;
public:
	void SetR(int n);//���ð뾶��
	int GetR();//��ȡ�뾶
	void SetCenter(int i, int j);//����Բ��
	Point GetCenter();//��ȡԲ��
	void isInCircle(Point p);//�ڲ���Ϊ�������
};
