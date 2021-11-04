#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
#include<string>
using namespace std;

//数组模板
template<class T>
class MyArray
{
private:
	int m_capacity;//数组容量上限
	int m_size;//数组当前元素个数
	T* p;//数组地址
public:
	MyArray(int capacity)//有参构造
	{
		m_capacity = capacity;
		m_size = 0;
		p = new T[m_capacity];//注意数组内存开辟方法
	}
	~MyArray()
	{
		if (p != NULL)
		{
			delete[] p;//数组delete[]，加个[]
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
	MyArray(const MyArray& arr)//拷贝构造，格式类似于其他构造函数
	{
		m_capacity = arr.m_capacity;
		m_size = arr.m_size;
		p = new T[arr.m_capacity];
		for (int i = 0; i < m_size; i++)
		{
			p[i] = arr.p[i];
		}
		//构造函数这些不需要return;
	}
	MyArray& operator=(const MyArray& arr)//赋值运算符重载，return是MyArray&以实现a=b=c链式编程
	{
		if (p != NULL)//先把原先的数组清空再赋值，保险起见
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
		return *this;//实际上需要返回地址，也即*this
	}
	T& operator[] (int index)//数组下标访问元素重载，返回值是T&，返回地址才能让arr[0]=1这样的赋值操作实现
	{
		return p[index];
	}
	void Push_rear(const T val)//尾插法，const表示该数据不应该被修改
	{
		if (m_size == m_capacity)
		{
			cout << "数组已满！" << endl;
			return;
		}
		p[m_size] = val;
		m_size++;
	}
	void Pop_rear()//尾删法
	{
		if (m_size == 0)
		{
			cout << "不可删除，数组已经为空！" << endl;
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