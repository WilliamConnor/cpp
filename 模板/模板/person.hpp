#pragma once
#include<iostream>
using namespace std;

template<class T>//��.hppͷ�ļ���ʽ������ģ��������Ͷ���д��һ���Ƽ�������
class Person
{
public:
	Person()
	{
		cout << "Person���캯������" << endl;
	}
	void ShowPerson()
	{
		cout << "ShowPerson���Ժ�������" << endl;
	}
};