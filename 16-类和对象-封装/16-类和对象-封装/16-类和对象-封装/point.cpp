#define _CRT_SECURE_NO_WARNINGS 1
#include"point.h"//������Ӧ��ͷ�ļ�

//����Դ�ļ�
//ֻ��������ʵ�֣���Ҫ��Point::�Ա����亯�������ڵĳ�Ա������Ͳ��������ȫ�ֺ���
void Point::SetX(int n)//�������趨X,Yֵ�ͻ�ȡֵ�ĺ���(����)
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
//Shfit+Tab	�����������