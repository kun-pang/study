/*2023��7��27*/
/* �ڴ�ģ��  ����*/


/* �ڴ�ģ�� 
����		�ɳ���Ա������ͷţ��������Ա���ͷţ��������ʱ�ɲ���ϵͳ����
ջ��		�������Զ������ͷţ���Ų���ֵ���ֲ��������������ʱ�ɲ���ϵͳ����
������		�����Ŀ����Դ�ļ����������Ķ����ƴ��룬�ɲ���ϵͳ����--����ֻ��
ȫ����		���ȫ�ֱ�������̬����������
*/

/*����
���ã������������
�﷨���������� &���� = ԭ����

��������������
���Լ�ָ���޸�ָ��
*/


#include <iostream>

using namespace std;

//ȫ�ֱ���
int g_a = 0;
int g_b = 0;

//const���ε�ȫ�ֱ���  ȫ�ֳ���
const int t_b =20;

//��������
int* func();

int* func1();

void func2();

void func3();
//������������
void swap1(int a, int b);
void swap2(int *a, int *b);
void swap3(int &a, int &b);

int main10(){
	//ȫ����
	//�ֲ�����--ջ��
	int a = 10;
	int b = 20;

	cout << "�ֲ�����a�ĵ�ַ��" << (int)&a << endl;
	cout << "�ֲ�����b�ĵ�ַ��" << (int)&b << endl;

	cout << "ȫ�ֱ���g_a�ĵ�ַ��" << (int)&g_a << endl;
	cout << "ȫ�ֱ���g_b�ĵ�ַ��" << (int)&g_b << endl;

	//��̬������static���Σ�
	static int h_a = 10;

	cout << "��̬����h_a�ĵ�ַ��" << (int)&h_a << endl;

	//����
	//�ַ�����������""�����ģ�
	cout << "�ַ��������ĵ�ַ��" << (int)&"niHao!" << endl;

	//const���εľֲ�����(�ֲ�����)--ջ��   const���ε�ȫ�ֱ���
	const int t_a = 10;
	int const s_a = 20;			//����const���ξֲ�����  ֻ�����ε�λ�ò�ͬ
								//ʹ�÷����ͷ��ʷ�ʽ��һ����		

	cout << "const���εľֲ�����t_a�ĵ�ַ��" << (int)&t_a << endl;
	cout << "const���εľֲ�����s_a�ĵ�ַ��" << (int)&s_a << endl;
	cout << "const���ε�ȫ�ֱ���t_b�ĵ�ַ��" << (int)&t_b << endl;
	cout << endl;

	//ջ�� - - �����в�Ҫ���ؾֲ�������ַ
	int *p = func();

	cout << *p <<endl;		//��һ�α������ᱣ��һ�ξֲ���ַ
	cout << *p <<endl;		//�ڶ�������
	cout << endl;

	//����
	int *p0 = func1();

	cout << *p0 << endl;
	cout << *p0 << endl;
	//�ֶ��Զ��������ݽ����ͷ�  delete�ؼ��� 
	delete p0;

	cout << *p0 << endl;

	func2();
	cout << endl;

	//����
	func3();

	//swap1(a,b);		//����Ӱ��ʵ��
	//swap2(&a,&b);
	swap3(a,b);
	cout << "a = " << a << "  b = " << b << endl;

	
	system("pause");
	return 0;
}


int* func(){		//�β�Ҳ�����ջ��
	int a = 10;		//����ִ������Զ��ͷ�
	return &a;		//���ؾֲ�������ַ
}

int* func1(){		//��new������������
	int *p = new int(20);		//new ��������(��ʼֵ)			*p ���ܵ�ַ
								//new���ص��Ǹ��������͵�ָ��
	return p;
}

void func2(){
	//�ڶ���new����
	int *p = new int[4];	//new���ص���������׵�ַ

	for(int i = 0; i < 4; i++){
		p[i] = i;
	}

	for(int i = 3; i >= 0; i--){
		cout << p[i] << endl;
	}

	//�ͷ�new������
	delete[] p;
}

void func3(){
	int a = 10;
	int c = 20;
	//��������
	int &b = a;

	/*int &d;   ���ñ����ʼ��*/
	

	cout << "a= " << a << " b= " << b <<endl;

	b = 100;

	cout << "a= " << a << " b= " << b <<endl;

	//int &b = c;		//һ����ʼ�������ܸ�������
	b = c;				//���Ǹ�ֵ����
	cout << "a= " << a << " b= " << b <<endl;
	c = 30;
	cout << "a= " << a << " b= " << b <<endl;
	cout << "c= " << c << endl;
	
	cout << endl;
}
//ֵ����
void swap1(int a, int b){
	int t = a;
	a = b;
	b = t;
}
//��ַ����
void swap2(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = *a;
}
//��������������
void swap3(int &a, int &b){
	int t = a;
	a = b;
	b = t;
}