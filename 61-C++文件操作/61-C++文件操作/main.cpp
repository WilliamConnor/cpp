#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<fstream>//��д�ļ���ͷ�ļ�
#include<string>

using namespace std;

////д�ļ�
//void test01()
//{
//	ofstream ofs;//ֱ���ã�����Ҫ������
//	ofs.open("text.txt", ios::out);//ofs.open���ļ���("·��",�򿪷�ʽ)��û��·������ڵ�ǰĿ¼�£�ios::out��������ļ�
//	ofs << "����������" << endl;//�൱��cout<<��������������ļ�
//	ofs << "�Ա���" << endl;
//	ofs << "���䣺18" << endl;
//	ofs.close();//�ر��ļ�
//}
//int main()
//{
//	test01();
//	return 0;
//}





////���ļ�
//void test01()
//{
//	ifstream ifs;
//	ifs.open("text.txt", ios::in);//���ļ�
//
//	if (!ifs.is_open())//�ж��ļ��Ƿ���ˣ�is_open�����Դ�����������()��!�ý��ȡ����Ҳ����ʧ��ʱִ��
//	{
//		cout << "�ļ���ʧ��" << endl;
//		return;//��ʧ�ܣ����ټ���ִ��test01
//	}
//
//	//���ļ����ַ�ʽ��һ�����ļ�����buf��һ�����buf����
//	// ���ж������飬������C�ķ���char buf[1024]={0}��Ҳ����C++����string buf
//	//��һ��:
//	char buf[1024] = { 0 };//buf��Ϊ��ʱ�������ifs��ȡ������
//	while (ifs >> buf)//��ifsд��buf����ifs��ȡ��EOF,�Զ�����ѭ��
//	{
//		cout << buf << endl;
//	}
//	//�ڶ���:
//	char buf[1024] = { 0 };
//	while (ifs.getline(buf, sizeof(buf)))//ifs��getline()������buf��Ҫд������飬����������Ԫ������
//	{
//		cout << buf << endl;
//	}
//	//������:�͵ڶ��ֵ�getline���ͻ
//	string buf;
//	while (getline(ifs, buf))//ȫ�ֺ���getline����һ����ifs��ȡ�ļ����ڶ�����������ʱ����buf
//	{
//		cout << buf << endl;
//	}
//	//������:���Ƽ���Ч�ʵ�
//	char c;
//	while ((c = ifs.get()) != EOF)//��ifsд����ֵ��ΪEOF��end of file��
//	{
//		cout << c;//һ��һ�����
//	}
//
//	ifs.close();//�ر��ļ�
//}
//int main()
//{
//	test01();
//	return 0;
//}





////������д�ļ�-����д���Զ����������ͣ��������		�����ƶ��ļ�
//class Person
//{
//public:
//	char m_name[64];//��������string,���ܳ����⣬��Ϊ�ײ���C����д�ġ��Լ�������[]���������С
//	int m_age;
//};
//
////һ��д�������ļ�
//void test01()
//{
//	//1.����ͷ�ļ�
//	
//	//2.���ļ���
//	////�����٣���ͳ��
//	//ofstream ofs;
//	//ofs.open("Person.txt", ios::out | ios::binary);
//	//�����ڣ����ù��캯����
//	ofstream ofs("person.txt", ios::out | ios::binary);//ofs���ù��캯��������ֱ�Ӵ���ִ��open��λ��|ʵ�ֶ���������
//
//	//3.д�ļ�
//	Person p = { "����",18 };//Ĭ��û����Ӧ���캯���������������Ӧ��ֵ����
//	ofs.write((const char*)&p, sizeof(p));
//	//�����٣�ȡ����p�ĵ�ַ��ǿ������ת����const char*ָ�롣�����ڣ�p�Ĵ�С
//	//write���������д����һ��������֮ǰ�ı����͵��ֶ�д�벻һ��
//	//������ı�����Ҳ�޷���ֻҪ����ȷ��ȡ��������
//
//	//4.�ر��ļ�
//	ofs.close();
//}
//
////�������������ļ�
//void test02()
//{
//	//1.���ļ�
//	ifstream ifs;
//	ifs.open("person.txt", ios::in | ios::binary);//�����ƶ�ȡ
//
//	//2.�ж��Ƿ�򿪣����ļ���Ҫ�жϣ�д����
//	if (!ifs.is_open())
//	{
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//
//	//3.��ȡ�ļ�
//	Person p2;
//	ifs.read((char*)&p2, sizeof(p2));//read������
//	//�����٣�Ҫ����Ķ���ĵ�ַ��������Ҫ����ת����ָ�롣�����ڣ�����Ĵ�С
//
//	//4.��֤��ȡ������
//	cout << "������" << p2.m_name << endl;
//	cout << "���䣺" << p2.m_age << endl;
//
//	//5.�ر��ļ�
//	ifs.close();
//}
//
////����������fstream���ifstream��ofstream��(Ӧ��ֻ��Ҫ����һ��fs�������)
//void test03()
//{
//	//д�������ļ�
//		fstream fs;
//		fs.open("person.txt", ios::out | ios::binary);
//		Person p = { "����",18 };
//		fs.write((const char*)&p, sizeof(p));
//		fs.close();
//
//	//���������ļ�
//		fs.open("person.txt", ios::in | ios::binary);
//		if (!fs.is_open())
//		{
//			cout << "�ļ���ʧ��" << endl;
//			return;
//		}
//		Person p3;
//		fs.read((char*)&p3, sizeof(p3));
//		cout << "������" << p3.m_name << endl;
//		cout << "���䣺" << p3.m_age << endl;
//		fs.close();
//}
//int main()
//{
//	test01();//д�������ļ�
//	test02();//���������ļ�
//	test03();//����fstream���ifstream��ofstream
//	return 0;
//}