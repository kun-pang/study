/*2023-8-6*/

//�̳��еĶ���ģ��

#include <iostream>

using namespace std;

//������
class Base{
public:
	int m_A;
private:
	int m_C;
protected:
	int m_B;
};

//����  �̳� ������
class Son : public Base{
public:
	int m_D;
};

//���� visual Studio �Ŀ�����Ա������ʾ������ �鿴����ļ̳����
//�� visual Studio �Ŀ�����Ա������ʾ����Developer Command Prompt for VS �汾�ţ�
//��ת�̷�����ת����Ŀ�����̷���  �̷���
//��ת������Դ�ļ�  cd ..��Ŀ·��
//�鿴��Ŀ�ļ���Ϣ  dir
//�鿴��������Ľṹ��
//cl /d1 reportSingleClassLayout���� Դ�ļ�����������tab��ȫ��
//���磺cl /d1 reportSingleClassLayoutSon 1a.cpp
//	reportSingleClassLayout�����浥����Ĳ��֣�	  report  ����    Single  ����   Class  ��    Layout  ����


void text(){
	//��СΪ16  4������
	//����������Ȩ���µķǾ�̬��Ա���Զ��ᱻ����̳���ȥ
	//������˽�г�Ա���� �Ǳ����������� ��˲��ܹ����� ����ȷʵ�Ǳ��̳������˵�
	cout << "Son��ռ�ÿռ��С��" <<  sizeof(Son) << endl;
}

int main(){
	
	text();

	system("pause");
	return 0;
}