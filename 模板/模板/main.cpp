#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include"MyArray.hpp"

//#include"person.h"//ֱ���û����
//#include"person.cpp"//��ģ��ֱ��cpp���Ե��óɹ��������Ƽ�
#include"person.hpp"//hpp��Լ���׳ɵĺ�׺�����Ƽ�


using namespace std;


////ģ�� �� ��ʽ����ת��
//template<typename T>//ģ��������typename��ʾ�����T�������͡��ɻ���class��T���������ͣ�һ���Ǵ�д��ĸ������������
//void TemplateSwap(T& a, T& b)//��������ģ�壬ÿ��ģ�嵥����һ���������࣬ģ������������ȫһ��
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//void test()
//{
//	int a = 10;
//	int b = 20;
//
//	//���Զ������Ƶ����������Լ��ж��������ͣ�������ʽ����ת��
//	TemplateSwap(a, b);
//	cout << "a=" << a << " b=" << b;
//
//	//����ʾָ�����ͣ�����Ա������������<>��������ʽ����ת��
//	TemplateSwap<int>(a, b);
//	cout << "a=" << a << " b=" << b;
//}
//int main()
//{
//	test();
//	return 0;
//}





////ģ��-ʵ����������ģ��
////������������ģ��
//template<typename T>
//void SwapTemplate(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
////����������ģ��-����ѡ������
//template<typename T>
//void SortTemplate(T a[], int sz)//ע�������βΣ�a[]���Ҳ���&����
//{
//	int i, j, min;
//	for (i = 0; i < sz; i++)
//	{
//		min = i;
//		for (j = i + 1; j < sz; j++)
//		{
//			if (a[min] > a[j])//�޸�<�Ϳɵݼ�������ʱ'\0'����Ϊ��һ��Ԫ�أ���Ȼ����ʾ�����ǻ���
//			{
//				min = j;
//			}
//		}
//		if (min != i)
//		{
//			SwapTemplate(a[min], a[i]);
//		}
//	}
//}
////�۴�ӡ����ģ��
//template<typename T>
//void PrintTemplate(T a[], int sz)//ע�������β�
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		cout << a[i] << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	int a[] = { 6,5,7,4,8,9,3,2,1 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	SortTemplate(a, sz);
//	PrintTemplate(a, sz);
//}
//void test02()
//{
//	char c[] = "fdbace";
//	int sz = sizeof(c) / sizeof(c[0]);
//	SortTemplate(c, sz);
//	PrintTemplate(c, sz);
//}
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}





////��ͨ���� ���� ����ģ�� ����
//int PrintTemplate(int& a, int& b)
//{
//	cout << "��ͨ��������" << endl;
//	return a + b;
//}
//template<typename T>
//T PrintTemplate(T& a, T& b)
//{
//	cout << "ģ�����" << endl;
//	return a + b;
//}
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	PrintTemplate(a, b);//Ĭ��������ͨ������������ͨ����û��ʵ��
//	PrintTemplate<>(a, b);//���˿յ�<>�ͻ�����ģ��
//}
//void test02()
//{
//	char a = 'a';
//	char b = 'b';
//	PrintTemplate(a, b);//��������ģ�塣��ͨ������char������ʽ����ת����ASCII��ֵҲ��int���㣬������ֱ��char���㷽�㡣
//}
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}





////ģ��������-Ӧ���Զ����������ͱ������ʱ
//class Person
//{
//public:
//	string m_name;
//	int m_age;
//	Person(string name, int age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//};
//template<class T>
//bool IsSame(T& a, T& b)//�ж������Ƿ����
//{
//	if (a == b)
//		return true;
//	else
//		return false;
//}
//template<> bool IsSame(Person& a, Person& b)//�ػ�ģ�壬�ж�Person�Ƿ���ȡ�ǰ���template<>�����θĳɾ�����������
//{
//	if (a.m_age==b.m_age&&a.m_name==b.m_name)
//		return true;
//	else
//		return false;
//}
//void test01()
//{
//	Person p1("Tom", 18);
//	Person p2("Tom", 18);
//	int ret = IsSame(p1, p2);
//	if (ret == true)
//		cout << "p1==p2" << endl;
//	else
//		cout << "p1!=p2" << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}





////��ģ�� �� Ĭ�ϲ���
////����Ĭ�ϲ���Ҫ�㣺�ӿ�ʼ����Ĭ�Ͽ�ʼ��֮��Ķ���������Ĭ�ϣ�֮ǰ�Ĳ����롣
//template<class NameType = string, class AgeType = int>//��ģ��NameType��AgeType���൱��T���������⡣AgeType = int���ǵ���ʱ<>û������������ʱ��Ĭ������
//class Person
//{
//public:
//	NameType m_name;
//	AgeType m_age;
//	Person(NameType name, AgeType age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//};
//void test01()
//{
//	Person<string, int>p1("Tom", 18);//����<>�������޷�ʶ���������������
//	Person<> p2("William", 21);//����Ĭ���������͵��������ֻ��<>�����;���Ĭ������������
//
//	cout << p1.m_name <<" " << p1.m_age << endl;
//	cout << p2.m_name <<" " << p2.m_age << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}





////��ģ��-�̳����⣬��typeid().name�鿴��������
//template<class T>
//class Person
//{
//public:
//	T m_name;
//};
//template<class T, class T2>//����̳����������������������ڴ��������ʱ���ٸ���
//class Son:public Person<T>//�̳�ʱ���ڸ�����<>������д�ϸ������������
//{
//	public:
//	T2 m_age;
//	Son()//���캯�����ö��󴴽�ʱ��ʾ�����������������
//	{
//		cout << "T����������Ϊ" << typeid(T).name() << endl;
//		cout << "T2����������Ϊ" << typeid(T2).name() << endl;
//	}
//};
//
//void test01()
//{
//	Son<char, int> s;//������Ϊ��ģ����Ҫ<>�����������ͣ������޷�����ռ䴴������
//}
//int main()
//{
//	test01();
//	return 0;
//}





////��ģ��-���ļ���д(ͷ�ļ���Դ�ļ�����)
//////������δ�����������ģ��
////template<class T>
////class Person
////{
////public:
////	Person()
////	{
////		cout << "���캯������" << endl;
////	}
////	void ShowPerson()
////	{
////		cout << "���Ժ�������" << endl;
////	}
////};
//void test01()//��ģ��������Ͷ������.hppͷ�ļ�����
//{
//	Person<int>p;
//	p.ShowPerson();
//}
//int main()
//{
//	test01();
//	return 0;
//}





////��ģ�尸��-����ģ��-MyArray.hpp
//void test01()
//{
//	MyArray<int> arr1(10);//��Ҫ<>��ָ��Ԫ�أ�����֪��������ٿռ�
//	cout << "arr1��capacity = " << arr1.getCapacity() << endl;
//	cout << "arr1��size = " << arr1.getSize() << endl;
//	cout << endl;
//
//	MyArray<int>arr2(arr1);//��������
//	cout << "arr2��capacity = " << arr2.getCapacity() << endl;
//	cout << "arr2��size = " << arr2.getSize() << endl;
//	cout << endl;
//
//	MyArray<int> arr3(20);
//	arr3 = arr1;//��ֵ���������
//	cout << "arr3��capacity = " << arr3.getCapacity() << endl;
//	cout << "arr3��size = " << arr3.getSize() << endl;
//	cout << endl;
//}
//void test02()
//{
//	//����5��Ԫ��
//	int i;
//	MyArray<int> arr1(10);
//	for (i = 0; i < 5; i++)
//	{
//		arr1.Push_rear(i);//�򵥰�iβ�������
//	}
//	arr1.Print();
//	cout << endl;
//
//	//ɾ������Ԫ��
//	arr1.Pop_rear();
//	arr1.Pop_rear();
//	arr1.Print();
//}
//void test03()
//{
////������
//}
//
//int main()
//{
//	test01();//���� �����ʼ��
//	test02();//���� β���βɾ
//	test03();//���� �Զ����������� �� ����ģ��
//	return 0;
//}