//2023-8-5

//�������ݼ������������

//���Զ����������ͽ��е������ݼ���

//ǰ�õ�������� `++` ���ȶԲ��������е���������Ȼ�󷵻ص������ֵ��
//���õ�������� `++` ���ȷ��ز�������ԭʼֵ��Ȼ���ٶԲ��������е���������

#include <iostream>

using namespace std;

//�Զ�����������
class MyIntger{
	friend ostream& operator<<(ostream &cout, MyIntger &myInt);
	friend MyIntger& operator--(MyIntger &myInt);
	friend MyIntger operator--(MyIntger &myInt,int);
public:
	//��ʼ���б��ʼ������
	MyIntger():m_Num(0){
		
	}

	//ǰ��++
	//MyIntger& ����Ϊ���ص����������ֵ��
	//����������� �����ص���ϵͳ������ֵ����ִ��++��++a��ʱ�ᷢ�֣�
	//������ڴ�ӡ���ֵ�ᷢ�ֺͳ�ֵһ��
	MyIntger& operator++(){
		//�� ��
		m_Num++;
		//�� ����ֵ������*this��
		return *this;
	}

	//����++
	//operator++(int )  int ռλ��
	//�������� ����Ϊt����ʱ���� ���������������
	MyIntger operator++(int ){	
		//�� ��¼����
		MyIntger t = *this;
		//�� �Ӽ�
		m_Num++;
		return t;
	}


private:
	int m_Num;
};

//����<< 
ostream& operator<<(ostream &cout, MyIntger &myInt){
	//cout << myInt;		���޵��õݹ�
	cout << myInt.m_Num;
	return cout;
}

//ȫ�ֵķ�ʽǰ��--
MyIntger& operator--(MyIntger &myInt){
	//�ȼ�
	myInt.m_Num--;
	//�󷵻ر���
	return myInt;
}

//����--
MyIntger operator--(MyIntger &myInt,int){
	//�ȼ�¼
	MyIntger t = myInt;
	//�����
	myInt.m_Num--;
	return t;
}

void text1(){
	MyIntger myInt;

	cout << ++myInt << endl;
	cout << myInt << endl;
	
	//֤���Ӳ������õ�����
	//cout << ++(++myInt) << endl;
	//cout << myInt << endl;
	
}

void text2(){
	MyIntger myInt;
	cout << myInt++ << endl;
	cout << myInt << endl;
}

void text3(){
	MyIntger myInt;
	cout << --myInt << endl;
	cout << myInt << endl;

	//cout << --(--myInt) << endl;
	//cout << myInt << endl;
}

void text4(){
	MyIntger myInt;
	cout << myInt-- << endl;
	cout << myInt << endl;

	//cout << (myInt--)-- << endl;
	//cout << myInt << endl;

	//MyIntger myInt1;
	//cout << (myInt1++)++ << endl;
	//cout << myInt1 << endl;
	//���õ�������� `++` ֻ��Ӧ���ڿ��޸ĵ���ֵ��
	//�� `(a++)` �Ľ����һ����ֵ�������ٴ�Ӧ�õ����������
}

int main(){
	/*text1();*/

	/*text2();*/

	/*text3();*/

	text4();

	int a = 0;

	/*cout << (a++)++ << endl; ���� a++ �Ǳ��ʽ �ں�������ʱ����������ʶ�� */

	//int a = 0;

	//cout << ++(++a) << endl;
	//cout << a << endl;
	////��ͬһ������a���в���

	system("pause");
	return 0;
}