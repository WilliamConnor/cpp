#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include"point.h"//����ͷ�ļ��ſ�������ʹ����Ӧ��
#include"circle.h"

using namespace std;


////��Բ���ܳ�
//double PI = 3.1415926;//�����
////Բ��
//class Circle
//{
//	//����Ȩ��(�˴�����)
//public:
//	double r;//����
//	double CircleLong()//��Ϊ(����)�����ԵĲ����ɲ�д���β�
//	{
//		return 2 * PI * r;
//	}
//};
//
//int main()
//{
//	Circle c1, c2;//�����ڽṹ��
//	c1.r = 1;
//	c2.r = 10;
//	cout << "Բ���ܳ�=" << c1.CircleLong() << endl;//������()
//	cout << "Բ���ܳ�=" << c2.CircleLong() << endl;
//	return 0;
//}



////ѧ���࣬��ѧ�ź�����
//class Student
//{
//public:
//	string id;
//	string name;
//	void ShowStudent()//��ʾ����
//	{
//		cout << "ѧ�ţ�" << id << "   ������" << name << endl;
//	}
//	void ChangeName(string n)//��Ϊ�����Ը�ֵ��ʵ�ָ���
//	{
//		name = n;
//	}
//	void Changeid(string n)//ͬ��
//	{
//		id = n;
//	}
//
//};
//
//int main()
//{
//	Student s1,s2;//���ʼ��
//	s1.id = "0001";
//	s1.name = "����";
//	s2.id = "0002";
//	s2.name = "����";
//
//	//��ʾ����
//	s1.ShowStudent();
//	s2.ShowStudent();
//
//	//��Ϊ�����Ը�ֵ��ʵ�ָ���
//	s1.ChangeName("��С��");
//	s1.Changeid("0003");
//	s1.ShowStudent();
//	return 0;
//}



////���ַ���Ȩ��
//
//class Person
//{
//public:
//	string name;
//protected:
//	string car;
//private:
//	string password;
//public:
//	void Show()
//	{
//		cout << name << car << password << endl;
//	}
//};
//
//int main()
//{
//	Person p1;
//	p1.name = "����";
//	//�������ַ���Ȩ�ޣ������������޸�����
//	p1.Show();
//
//	return 0;
//}



////Բ�͵�-ģ�黯˼�루�жϵ��Բλ�ù�ϵ��
////���µ����Բ��Ĳ��ֱ�д����Ӧ"ͷ�ļ�"��"Դ�ļ�"���˴������������ο�
///*ʡ�Կ�ʼ
////����
//class Point
//{
//private://����ΪX��Yֵ
//	int x;
//	int y;
//public:
//	void SetX(int n)//�������趨X,Yֵ�ͻ�ȡֵ�ĺ���(����)
//	{
//		x = n;
//	}
//	int GetX()
//	{
//		return x;
//	}
//	void SetY(int n)
//	{
//		y = n;
//	}
//	int GetY()
//	{
//		return y;
//	}
//};
////Բ��
//class Circle
//{
//private://����Ϊ�뾶��Բ��(����)
//	int r;
//	Point center;
//public:
//	void SetR(int n)//���ð뾶��
//	{
//		r = n;
//	}
//	int GetR()//��ȡ�뾶
//	{
//		return r;
//	}
//	void SetCenter(int i, int j)//����Բ��
//	{
//		center.SetX(i);
//		center.SetY(j);
//	}
//	Point GetCenter()//��ȡԲ��
//	{
//		return center;
//	}
//	void isInCircle(Point p)//�ڲ���Ϊ�������
//	{
//		int D1 = (p.GetX() - center.GetX()) * (p.GetX() - center.GetX());//Բ�й�ʽ��(X-x)^2 + (Y-y)^2 = r^2
//		int D2 = (p.GetY() - center.GetY()) * (p.GetY() - center.GetY());//D1��(X-x)^2		D2��(Y-y)^2
//		int D = r * r;	
//		if (D1 + D2 > D)
//		{
//			cout << "����Բ��" << endl;
//		}
//		else if (D1 + D2 < D)
//		{
//			cout << "����Բ��" << endl;
//		}
//		else
//		{
//			cout << "����Բ��" << endl;
//		}
//	}
//};
////ʡ�Խ���
//*/
////�ⲿ����������⡣ע����Ҫ#include�㡢Բͷ�ļ�����Ȼ���޷�ʶ��
//void isInCircle2(Circle& c, Point& p)//ȡ��ַ&������ⴴ���ռ䡣�жϵ���Բ�����⣬��Ϊ������ͬ���Կ�������
//{
//	int D1 = (p.GetX() - c.GetCenter().GetX()) * (p.GetX() - c.GetCenter().GetX());//ԭ��ͬ��
//	int D2 = (p.GetY() - c.GetCenter().GetY()) * (p.GetY() - c.GetCenter().GetY());
//	int D = c.GetR() * c.GetR();
//	if (D1 + D2 > D)
//	{
//		cout << "����Բ��" << endl;
//	}
//	else if (D1 + D2 < D)
//	{
//		cout << "����Բ��" << endl;
//	}
//	else
//	{
//		cout << "����Բ��" << endl;
//	}
//}
//int main()
//{
//	Circle c;
//	Point p;
//
//	//�趨Բ������
//	c.SetCenter(10, 0);
//	c.SetR(10);
//
//	//�趨�������
//	p.SetX(10);
//	p.SetY(10);//�޸ĵ��Yֵʵ�ּ�����֤
//	
//	//�жϵ��Բλ�ù�ϵ
//	c.isInCircle(p);//���ڷ�
//	isInCircle2(c, p);//�ⲿ������
//
//	return 0;
//}



////���졢��������������
//class Person
//{
//public:
//	int age;
//	Person()
//	{
//		cout << "Ĭ�Ϲ��캯������" << endl;//��д��������Ҳ���Զ�д
//	}
//	Person(int n)
//	{
//		age = n;
//		cout << "�вι��캯������" << endl;//д���вΣ��������Ͳ��ṩĬ�ϣ������ṩ����
//	}
//	~Person()
//	{
//		cout << "������������" << endl;
//	}
//	Person(const Person& p)//�ٲ�д��������Ҳ���Զ�д������п�������д�ˣ�����������ṩ�������캯��
//	{
//		age = p.age;//ע�������const��&����
//		cout << "�������캯������" << endl;
//	}
//};
//void test01()
//{
//	Person p;//Ĭ�Ϲ���
//	p.age = 18;
//	Person p2(p);//��������
//	cout << p2.age << endl;
//
//	Person p3(10);//�вι���
//}
//int main()
//{
//	test01();
//
//	return 0;
//}



////ǳ���������
////ǳ��������Ĭ�ϡ�	�����Աд������ظ�delete�ͷ��ڴ�����
//class Person
//{
//public:
//	int* m_age;//ָ�������ԣ���Ҫnew int(ֵ);����ʽ�����ٿռ丳ֵ
//	Person()
//	{
//		cout << "Ĭ�Ϲ��캯������" << endl;
//	}
//	Person(int age)
//	{
//		int* m_age = new int(age);//���ٿռ丳ֵ
//		cout << "�вι��캯������" << endl;
//	}
//	~Person()
//	{
//		cout << "������������" << endl;
//		if (m_age != NULL)//�жϷǿգ����ͷ��ڴ�
//		{
//			delete m_age;
//			m_age = NULL;
//			cout << "delete����" << endl;
//		}
//	}
//	Person(const Person& p)//��������ڻ������ظ��ͷŵ����������д����������bug
//	{
//		m_age = new int(*p.m_age);//������ʱ������ԭ���ĵ�ַ�����ǿ���һ���¿ռ䣬�����˶���delete
//		cout << "�������캯������" << endl;
//	}
//};
//void test01()
//{
//	Person p;
//	p.m_age = new int(18);
//	Person p2(p);
//	cout << *(p2.m_age) << endl;
//	//����ջ�����ʣ������Ǻ�����p2��������������p1������
//}
//int main()
//{
//	test01();
//	return 0;
//}



////��ʼ���б��﷨(���캯��)
//
//class Person
//{
//public:
//	int m_a;
//	int m_b;
//	int m_c;
//
//	Person() :m_a(1), m_b(2), m_c(3) {}//Ĭ��״̬��ʼ���б�
//	Person(int a, int b, int c) :m_a(a), m_b(b), m_c(c) {}//�¸�ֵ��
//	//Person(int a, int b, int c)//��ͳ��ֵ��
//	//{
//	//	m_a = a;
//	//	m_b = b;
//	//	m_c = c;
//	//}
//
//};
//void test01()
//{
//	Person p1;
//	Person p2(4, 5, 6);
//	cout << p1.m_a << p1.m_b << p1.m_c << endl;
//	cout << p2.m_a << p2.m_b << p2.m_c << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}



////return *this ʵ����ʽ���
//class Person
//{
//public:
//	int m_age;
//	Person(int age)
//	{
//		m_age = age;//����βκͱ��嶼��age����this->age��ʾ�����age
//	}
//	Person& PersonAddPerson(Person& p)//������ļӷ�������ע����&���غ��β�����
//	{
//		m_age += p.m_age;//p1�ӵ�p2��
//		return *this;//*this�����ҵ������߱���
//	}
//	Person PersonAddPerson2(Person& p)//������ز���&�����൱��ÿ���¿���һ��p2����p1
//	{
//		m_age += p.m_age;//p1�ӵ�p2��
//		return *this;//*this�����ҵ������߱���
//	}
//};
//
//void test01()
//{
//	Person p1(10);
//	Person p2(5);
//	Person p3(5);
//	p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);//�൱��ͬһ��p2��������p1��ֵ��
//	cout << "p2��ageΪ" << p2.m_age << endl;//5+10+10+10
//
//	p3.PersonAddPerson2(p1).PersonAddPerson2(p1).PersonAddPerson2(p1);//������ú�������ֵû��&�������⿽��p2
//	cout << "p3��ageΪ" << p3.m_age << endl;//5+10���൱���ܹ�3��p3+p1,���ﷵ��������һ����������������Ʒ��֪������
//}
//int main()
//{
//	test01();
//	return 0;
//}



////�����󣬳�����
//class Person
//{
//public:
//	int m_age;
//	mutable int m_id;//mutableʹ�ñ�����const�����������������Կ��޸ģ���Ϊ����
//
//	void ChangePerson()
//	{
//		m_age = 10;
//	}
//	void ChangePerson2() const//������
//	{
//		//m_age = 10;//�����������������ڲ����޸Ĳ���
//		m_id = 10;//��mutable���εı���Ϊ���⣬������const�������ͳ������б��޸�
//	}
//
//};
//void test01()
//{
//	const Person p;//������
//	//p.ChangePerson();//������ֻ�ܵ��ó���������ͨ�������ɵ���
//	p.ChangePerson2();//�������������ó�����
//
//	//p.m_age = 10;//������ֵ�����޸�
//	p.m_id = 10;//��������Ȼ���޸ļ���mutable�ı���
//}
//int main()
//{
//	test01();
//	return 0;
//}



//friend��Ԫ-δд����