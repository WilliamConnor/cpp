#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
#include<string>
using namespace std;

//����ģ��
template<class T>
class MyArray
{
private:
	int m_capacity;//������������
	int m_size;//���鵱ǰԪ�ظ���
	T* p;//�����ַ
public:
	MyArray(int capacity)//�вι���
	{
		m_capacity = capacity;
		m_size = 0;
		p = new T[m_capacity];//ע�������ڴ濪�ٷ���
	}
	~MyArray()
	{
		if (p != NULL)
		{
			delete[] p;//����delete[]���Ӹ�[]
			p = NULL;
		}
	}
	int getSize()
	{
		return m_size;
	}
	int getCapacity()
	{
		return m_capacity;
	}
	MyArray(const MyArray& arr)//�������죬��ʽ�������������캯��
	{
		m_capacity = arr.m_capacity;
		m_size = arr.m_size;
		p = new T[arr.m_capacity];
		for (int i = 0; i < m_size; i++)
		{
			p[i] = arr.p[i];
		}
		//���캯����Щ����Ҫreturn;
	}
	MyArray& operator=(const MyArray& arr)//��ֵ��������أ�return��MyArray&��ʵ��a=b=c��ʽ���
	{
		if (p != NULL)//�Ȱ�ԭ�ȵ���������ٸ�ֵ���������
		{
			delete[] p;
			p = NULL;
			m_capacity = 0;
			m_size = 0;
		}
		m_capacity = arr.m_capacity;
		m_size = arr.m_size;
		p = new T[m_capacity];
		for (int i = 0; i < m_size; i++)
		{
			p[i] = arr.p[i];
		}
		return *this;//ʵ������Ҫ���ص�ַ��Ҳ��*this
	}
	T& operator[] (int index)//�����±����Ԫ�����أ�����ֵ��T&�����ص�ַ������arr[0]=1�����ĸ�ֵ����ʵ��
	{
		return p[index];
	}
	void Push_rear(const T val)//β�巨��const��ʾ�����ݲ�Ӧ�ñ��޸�
	{
		if (m_size == m_capacity)
		{
			cout << "����������" << endl;
			return;
		}
		p[m_size] = val;
		m_size++;
	}
	void Pop_rear()//βɾ��
	{
		if (m_size == 0)
		{
			cout << "����ɾ���������Ѿ�Ϊ�գ�" << endl;
			return;
		}
		m_size--;
	}
	void Print()
	{
		for (int i = 0; i < m_size; i++)
		{
			cout << p[i] << endl;
		}
	}
};