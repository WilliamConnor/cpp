#pragma once
#include<iostream>
using namespace std;

//����ͷ�ļ�����
class Point
{
private://ͷ�ļ������Բ���
	int x;
	int y;
	//ͷ�ļ�ֻ������
	//�����º����ľ���ʵ�����ݲ��������Ҽӷֺ�;
public:
	void SetX(int n);
	int GetX();
	void SetY(int n);
	int GetY();
};
