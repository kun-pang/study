/*2023-8-7*/

//�ֱ�������ͨд�� �� ��̬���������ʵ��������������������ļ�������

//��̬�ŵ㣺
//	������֯�ṹ����
//	�ɶ���ǿ
//	����ǰ�ںͺ��ڵ���չ�Լ�ά��

//�������ᳫ ����ԭ��
//����ԭ�� ����չ���п��� ���޸Ľ��йر�

#include <iostream>
#include <string>

using namespace std;

//������������
class Calculator{
public:

	
	virtual double getNum(){
		return 0;
	}

	

	double m_Num1;		//������1
	double m_Num2;		//������2
};

//�ӷ��� ���м̳� ��������
class JiaFa : public Calculator{
public:
	JiaFa(){}
	double getNum(){
		return m_Num1 + m_Num2;
	}

};

//������
class JianFa : public Calculator{
public:
	JianFa(){}
	double getNum(){
		return m_Num1 - m_Num2;
	}

};

//�˷���
class ChengFa : public Calculator{
public:
	ChengFa(){}
	double getNum(){
		return m_Num1 * m_Num2;
	}

};
//������
class ChuFa : public Calculator{
public:
	ChuFa(){}
	double getNum(){
		return m_Num1 / m_Num2;
	}

};
 

void text(){
	string oper;		//���Ų�����
	double a;
	double b;

	cout << "������ʽ��" << endl;
	cin >> a >> oper >> b;

	if(oper == "+"){
		//�����ָ�� ���� ���� ִ���������
		Calculator *abc = new JiaFa;
		abc->m_Num1 = a;
		abc->m_Num2 = b;

		cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getNum() << endl;
		
		delete abc;
		abc = NULL;
	}else if(oper == "-"){
		JianFa c;
		Calculator &cd = c;
		cd.m_Num1 = a;
		cd.m_Num2 = b;

		cout << cd.m_Num1 << "-" << cd.m_Num2 << "=" << cd.getNum() << endl;
	}else if(oper == "*"){
		ChengFa c;
		Calculator &cd = c;
		cd.m_Num1 = a;
		cd.m_Num2 = b;

		cout << cd.m_Num1 << "*" << cd.m_Num2 << "=" << cd.getNum() << endl;
	}else if(oper == "/"){
		ChuFa c;
		Calculator &cd = c;
		cd.m_Num1 = a;
		cd.m_Num2 = b;

		cout << cd.m_Num1 << "/" << cd.m_Num2 << "=" << cd.getNum() << endl;
	}
}

int main(){
	text();

	system("pause");
	return 0;
}