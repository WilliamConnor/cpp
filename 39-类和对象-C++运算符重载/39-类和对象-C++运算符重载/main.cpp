#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>

using namespace std;


////���������-��ԭ�е���������м������������ݵ�����
//class Person
//{
//public:
//	int m_a;
//	////�ٳ�Ա���������������-��ȫ�ֺ�����ͻ��ֻ��һ��
//	//Person operator+ (Person & p)//operator�������صĺ�������+�Ų�Ҫ������ģ�������&
//	//{
//	//	Person temp;
//	//	temp.m_a = this->m_a + p.m_a;
//	//	return temp;//����ʱ��p3��Ϊp1+p2�ٷ������p3
//	//}
//};
//
////��ȫ�ֺ�������
//Person operator+ (Person& p1, Person& p2)//operator�������صĺ�������+�Ų�Ҫ������ģ�������&
//{
//	Person temp;
//	temp.m_a = p1.m_a + p2.m_a;
//	return temp;//����ʱ��p3��Ϊp1+p2�ٷ������p3
//}
//Person operator+ (Person& p1, int n)//������ͬ�ĺ�������
//{
//	Person temp;
//	temp.m_a = p1.m_a + n;
//	return temp;
//}
//
//void test01()
//{
//	Person p1;
//	p1.m_a = 1;
//	Person p2;
//	p2.m_a = 2;
//	//����Ϊ��������صļӷ�
//	Person p3 = p1 + p2;
//	Person p4 = p1 + 4;//ʵ�ֺ�������
//	cout << p3.m_a << endl;
//	cout << p4.m_a << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



////���������<<����cout<<������� ���� �������Զ�����������
//class Person
//{
//public:
//	int m_a = 1;
//	int m_b = 2;
//	//��Ա����ֻ��ʵ��p<<cout�������ڴ�ʹ��
//};
//ostream& operator<<(ostream &cout,Person &p)//ȫ�ֺ������������<<��cout��ostream-��׼�������ʽ�������Ҽ�ת������鿴��cout��Person��Ҫ&
////����ֵ��cout������ostream&�����return cout�������������ں�������ݣ���ʽ˼�롣������endl���ᱨ��
////��-���ÿ��������������cout�ĳ����������ھֲ������ڶ�����
//{
//	cout << "a=" << p.m_a << " b=" << p.m_b;
//	return cout;
//}
//////����������ݻᱨ��İ汾��û����������ʽ˼��
////void operator<<(ostream& cout, Person& p)
////{
////	cout << "a=" << p.m_a << " b=" << p.m_b;
////}
//void test01()
//{
//	Person p1;
//	p1.m_a = 1;
//	p1.m_b = 2;
//	cout << p1 << endl;//���������غ������û����cout���޷���endl�Ⱥ�������
//}
//int main()
//{
//	test01();
//	return 0;
//}



////��������� ++ -- �����ݼ�
//class myint//�Զ�������myint
//{
//	friend ostream& operator<<(ostream& cout, myint a);
//private:
//	int m_a;
//public:
//	myint()//���캯��
//	{
//		m_a = 0;
//	}
//	//�������������
//	myint& operator++()//ǰ�õ���++myint	����&�������Ƕ�ԭ���ݲ���
//	{
//		m_a++;
//		return *this;//*this���Ƿ�����ԭ����(ָ�������)
//	}
//	myint operator++(int)//���õ���myint++
//	{
//		myint temp = *this;//��temp�������ڵ��Զ�������ֵ��ע��temp������myint
//		m_a++;//����1
//		return temp;//��������ǰ��ֵ������ԭ�����Ѿ�+1��
//	}
//
//	//�Լ����������-ͬ��
//	myint& operator--()
//	{
//		m_a--;
//		return *this;
//	}
//	myint operator--(int)
//	{
//		myint temp = *this;
//		m_a--;
//		return temp;
//	}
//};
//
////����<<���صķ������������
//ostream& operator<<(ostream& cout, myint a)
//{
//	cout << a.m_a;
//	return cout;
//}
//
//void test01()
//{
//	//ǰ�õ���
//	myint a;
//	cout << ++(++a) << endl;
//	cout << a << endl;
//	//���õ���
//	myint b;
//	cout << b++ << endl;
//	cout << b << endl;
//	//ԭ����int�Ͳ����������������˴��䲻����������͵��ε���һ��
//	myint c;
//	cout << (((c++)++)++)++ << endl;
//	cout << c << endl;
//
//	cout << endl;
//}
//int main()
//{
//	test01();
//	int a = 10;
//	cout << ++(++a) << endl;//12
//	a = 10;
//	cout << (++a)++ << endl;//11
//	//cout << (a++)++ << endl;//�˾䱨����Ϊa������������2
//	return 0;
//}



////��ֵ�����=	����
//class Person
//{
//public:
//	int* m_a;//ָ���������ݻ���ǳ�������⣬����������������ɾ��ͬһ��ַ����new�����µ�ַ��ָ��ָ���µ�ַ�ɽ��
//	
//	Person(int n)
//	{
//		m_a = new int(n);
//	}
//	~Person()
//	{
//		if (m_a != NULL)//��Ϊ��ʱ�ͷſռ�
//		{
//			delete m_a;
//			m_a = NULL;
//		}
//	}
//	Person& operator=(Person& p)//��ֵ���������
//	{
//		if (m_a != NULL)
//		{
//			delete m_a;
//			m_a = NULL;
//		}
//		m_a = new int(*p.m_a);//������ֵ��ָ�룬���Խ�����*��ֵ����new����һ���µ�ַ�����ֵ�������ָ��ָ�����������Ͳ������ظ�delete�����⣬ʵ�����
//		return *this;//����������Ļ����޷�ʵ����ʽ������ֵ��ע�ⷵ������ҲҪ��Ӧ����ΪPerson&����
//	}
//};
//void test01()
//{
//	Person p1(18);
//	Person p2(20);
//	Person p3(30);
//	p3 = p2 = p1;
//
//	cout << "p1��a=" << *p1.m_a << endl;
//	cout << "p2��a=" << *p2.m_a << endl;
//	cout << "p3��a=" << *p3.m_a << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}



////��ϵ��������� =! ==
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
//	bool operator==(Person& p)//�ж���ȵ����� bool��������
//	{
//		if (m_name == p.m_name && m_age == p.m_age)//p1��p2�������Զ�����򷵻��棬�����
//			return true;
//		return false;
//	}
//	bool operator!=(Person& p)//�жϲ���ȵ�����
//	{
//		if (m_name == p.m_name && m_age == p.m_age)
//			return false;
//		return true;
//	}
//};
//void test01()
//{
//	Person p1("Tom", 18);
//	Person p2("Tom", 18);
//
//	if (p1 == p2)
//	{
//		cout << "p1��p2���" << endl;
//	}
//	else 
//	{
//		cout << "p1��p2�����" << endl;
//	}
//
//	if (p1 != p2)
//	{
//		cout << "p1��p2�����" << endl;
//	}
//	else
//	{
//		cout << "p1��p2���" << endl;
//	}
//}
//int main()
//{
//	test01();
//	return 0;
//}