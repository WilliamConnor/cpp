#define _CRT_SECURE_NO_WARNINGS 1
#include"circle.h"//Բ���Դ�ļ� ���� Բ���ͷ�ļ� �� ����

//Բ��
//���º�����ǰ��Circle::����Ԫ��center�޷�ʶ��
void Circle::SetR(int n)//���ð뾶��
{
	r = n;
}
int Circle::GetR()//��ȡ�뾶
{
	return r;
}
void Circle::SetCenter(int i, int j)//����Բ��
{
	center.SetX(i);
	center.SetY(j);
}
Point Circle::GetCenter()//��ȡԲ��
{
	return center;
}
void Circle::isInCircle(Point p)//�ڲ���Ϊ�������
{
	int D1 = (p.GetX() - center.GetX()) * (p.GetX() - center.GetX());//Բ�й�ʽ��(X-x)^2 + (Y-y)^2 = r^2
	int D2 = (p.GetY() - center.GetY()) * (p.GetY() - center.GetY());//D1��(X-x)^2		D2��(Y-y)^2
	int D = r * r;
	if (D1 + D2 > D)
	{
		cout << "����Բ��" << endl;
	}
	else if (D1 + D2 < D)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}
}