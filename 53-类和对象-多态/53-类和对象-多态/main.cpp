#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>

using namespace std;

//////动态多态
////①以下是没有virtual，在编译阶段早确定地址的方式，结果都是"动物在说话"
//////class Animal
//////{
//////public:
//////	void Speak()
//////	{
//////		cout << "动物在说话" << endl;
//////	}
//////};
//////class Cat :public Animal
//////{
//////public:
//////	void Speak()
//////	{
//////		cout << "小猫在说话" << endl;
//////	}
//////};
//////class Dog :public Animal
//////{
//////public:
//////	void Speak()
//////	{
//////		cout << "小狗在说话" << endl;
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
////②以下是virtual虚函数，在运行阶段才确定地址的方式，实现了走子类的函数，结果分别是小猫和小狗
//class Animal
//{
//public:
//	virtual void Speak()//唯一需要修改的地方，父类函数增加virtual变虚函数即可，其地址晚确定
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//class Cat :public Animal
//{
//public:
//	void Speak()//父类virtual，子类virtual与否无影响。这里是重写而非重载，重写的作用域不同，函数声明完全一样。
//	{
//		cout << "小猫在说话" << endl;
//	}
//};
//class Dog :public Animal
//{
//public:
//	void Speak()
//	{
//		cout << "小狗在说话" << endl;
//	}
//};
//void DoSpeak(Animal& animal)//子类走了父类引用&的通道
//{
//	animal.Speak();//根据引用子类的不同，启用虚函数后可以走不同子类的路线
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





////多态的计算器案例、纯虚函数、抽象类
////多态结构清晰，利于维护和拓展
//class AbstractCal//抽象类计算器
//{
//public:
//	int m_num1;
//	int m_num2;
//	virtual int GetResult() = 0;//纯虚函数，不写大括号实现，直接让其=0
//	//出现了纯虚函数，该类为抽象类，抽象类不能创建单个对象
//};
//class AddCal : public AbstractCal//加法计算
//{
//	int GetResult()//子类重写父类的纯虚函数，否则子类也是抽象类，无法创建单个对象
//	{
//		return m_num1 + m_num2;
//	}
//};
//class SubCal : public AbstractCal//减法计算
//{
//	int GetResult()
//	{
//		return m_num1 - m_num2;
//	}
//};
//class MulCal : public AbstractCal//乘法计算
//{
//	int GetResult()
//	{
//		return m_num1 * m_num2;
//	}
//};
//void test01()
//{
//	AbstractCal* a = new AddCal;//用父类指针 指向 子类对象，触发动态多态，执行子类的函数，而非父类
//	a->m_num1 = 3;
//	a->m_num2 = 2;
//	cout << a->m_num1 << "+" << a->m_num2 << "=" << a->GetResult() << endl;
//	delete a;//记得释放空间
//
//	a = new SubCal;//减法的运行
//	a->m_num1 = 3;
//	a->m_num2 = 2;
//	cout << a->m_num1 << "-" << a->m_num2 << "=" << a->GetResult() << endl;
//	delete a;
//
//	a = new MulCal;//乘法
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





////多态-咖啡和茶-纯虚函数、抽象类
//class AbstractDrink//制作饮品抽象类
//{
//public:
//	virtual void Boil() = 0;
//	virtual void Brew() = 0;
//	virtual void InCup() = 0;
//	virtual void AddSomething() = 0;
//	void MakeDrink()//这个不需要重写
//	{
//		Boil();
//		Brew();
//		InCup();
//		AddSomething();
//	}
//};
//class Coffee : public AbstractDrink//冲咖啡
//{
//	void Boil()
//	{
//		cout << "煮水" << endl;
//	}
//	void Brew() 
//	{
//		cout << "冲咖啡" << endl;
//	}
//	void InCup()
//	{
//		cout << "倒入咖啡杯" << endl;
//	}
//	void AddSomething() 
//	{
//		cout << "加糖和牛奶" << endl;
//	}
//};
//class Tea : public AbstractDrink//泡茶
//{
//	void Boil()
//	{
//		cout << "煮水" << endl;
//	}
//	void Brew()
//	{
//		cout << "泡茶" << endl;
//	}
//	void InCup()
//	{
//		cout << "倒入茶杯" << endl;
//	}
//	void AddSomething()
//	{
//		cout << "加枸杞" << endl;
//	}
//};
//
//void doMakeDrink(AbstractDrink* abs)//用了*
//{
//	abs->MakeDrink();//别忘了()括号
//	delete abs;//自创建的要释放
//}
//void test()
//{
//	cout << "冲咖啡流程：" << endl;
//	doMakeDrink(new Coffee);//手法：直接new一个对象，不需要命名了，一次性
//	cout << "——————————" << endl;
//	cout << "泡茶流程：" << endl;
//	doMakeDrink(new Tea);
//}
//int main()
//{
//	test();
//	return 0;
//}