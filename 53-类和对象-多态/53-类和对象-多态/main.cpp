#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>

using namespace std;

//////��̬��̬
////��������û��virtual���ڱ���׶���ȷ����ַ�ķ�ʽ���������"������˵��"
//////class Animal
//////{
//////public:
//////	void Speak()
//////	{
//////		cout << "������˵��" << endl;
//////	}
//////};
//////class Cat :public Animal
//////{
//////public:
//////	void Speak()
//////	{
//////		cout << "Сè��˵��" << endl;
//////	}
//////};
//////class Dog :public Animal
//////{
//////public:
//////	void Speak()
//////	{
//////		cout << "С����˵��" << endl;
//////	}
//////};
//////void DoSpeak(Animal& animal)
//////{
//////	animal.Speak();
//////}
//////void test()
//////{
//////	Cat cat;
//////	Dog dog;
//////	DoSpeak(cat);
//////	DoSpeak(dog);
//////}
//
////��������virtual�麯���������н׶β�ȷ����ַ�ķ�ʽ��ʵ����������ĺ���������ֱ���Сè��С��
//class Animal
//{
//public:
//	virtual void Speak()//Ψһ��Ҫ�޸ĵĵط������ຯ������virtual���麯�����ɣ����ַ��ȷ��
//	{
//		cout << "������˵��" << endl;
//	}
//};
//class Cat :public Animal
//{
//public:
//	void Speak()//����virtual������virtual�����Ӱ�졣��������д�������أ���д��������ͬ������������ȫһ����
//	{
//		cout << "Сè��˵��" << endl;
//	}
//};
//class Dog :public Animal
//{
//public:
//	void Speak()
//	{
//		cout << "С����˵��" << endl;
//	}
//};
//void DoSpeak(Animal& animal)//�������˸�������&��ͨ��
//{
//	animal.Speak();//������������Ĳ�ͬ�������麯��������߲�ͬ�����·��
//}
//void test()
//{
//	Cat cat;
//	Dog dog;
//	DoSpeak(cat);
//	DoSpeak(dog);
//}
//int main()
//{
//	test();
//	return 0;
//}





////��̬�ļ��������������麯����������
////��̬�ṹ����������ά������չ
//class AbstractCal//�����������
//{
//public:
//	int m_num1;
//	int m_num2;
//	virtual int GetResult() = 0;//���麯������д������ʵ�֣�ֱ������=0
//	//�����˴��麯��������Ϊ�����࣬�����಻�ܴ�����������
//};
//class AddCal : public AbstractCal//�ӷ�����
//{
//	int GetResult()//������д����Ĵ��麯������������Ҳ�ǳ����࣬�޷�������������
//	{
//		return m_num1 + m_num2;
//	}
//};
//class SubCal : public AbstractCal//��������
//{
//	int GetResult()
//	{
//		return m_num1 - m_num2;
//	}
//};
//class MulCal : public AbstractCal//�˷�����
//{
//	int GetResult()
//	{
//		return m_num1 * m_num2;
//	}
//};
//void test01()
//{
//	AbstractCal* a = new AddCal;//�ø���ָ�� ָ�� ������󣬴�����̬��̬��ִ������ĺ��������Ǹ���
//	a->m_num1 = 3;
//	a->m_num2 = 2;
//	cout << a->m_num1 << "+" << a->m_num2 << "=" << a->GetResult() << endl;
//	delete a;//�ǵ��ͷſռ�
//
//	a = new SubCal;//����������
//	a->m_num1 = 3;
//	a->m_num2 = 2;
//	cout << a->m_num1 << "-" << a->m_num2 << "=" << a->GetResult() << endl;
//	delete a;
//
//	a = new MulCal;//�˷�
//	a->m_num1 = 3;
//	a->m_num2 = 2;
//	cout << a->m_num1 << "*" << a->m_num2 << "=" << a->GetResult() << endl;
//	delete a;
//}
//int main()
//{
//	test01();
//	return 0;
//}





////��̬-���ȺͲ�-���麯����������
//class AbstractDrink//������Ʒ������
//{
//public:
//	virtual void Boil() = 0;
//	virtual void Brew() = 0;
//	virtual void InCup() = 0;
//	virtual void AddSomething() = 0;
//	void MakeDrink()//�������Ҫ��д
//	{
//		Boil();
//		Brew();
//		InCup();
//		AddSomething();
//	}
//};
//class Coffee : public AbstractDrink//�忧��
//{
//	void Boil()
//	{
//		cout << "��ˮ" << endl;
//	}
//	void Brew() 
//	{
//		cout << "�忧��" << endl;
//	}
//	void InCup()
//	{
//		cout << "���뿧�ȱ�" << endl;
//	}
//	void AddSomething() 
//	{
//		cout << "���Ǻ�ţ��" << endl;
//	}
//};
//class Tea : public AbstractDrink//�ݲ�
//{
//	void Boil()
//	{
//		cout << "��ˮ" << endl;
//	}
//	void Brew()
//	{
//		cout << "�ݲ�" << endl;
//	}
//	void InCup()
//	{
//		cout << "����豭" << endl;
//	}
//	void AddSomething()
//	{
//		cout << "�����" << endl;
//	}
//};
//
//void doMakeDrink(AbstractDrink* abs)//����*
//{
//	abs->MakeDrink();//������()����
//	delete abs;//�Դ�����Ҫ�ͷ�
//}
//void test()
//{
//	cout << "�忧�����̣�" << endl;
//	doMakeDrink(new Coffee);//�ַ���ֱ��newһ�����󣬲���Ҫ�����ˣ�һ����
//	cout << "��������������������" << endl;
//	cout << "�ݲ����̣�" << endl;
//	doMakeDrink(new Tea);
//}
//int main()
//{
//	test();
//	return 0;
//}