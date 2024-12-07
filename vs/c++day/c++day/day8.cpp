/*2023��7��24*/
/*�����ķ��ļ���д ָ��*/

/*�����ķ��ļ���д 
1������һ��.h��ͷ�ļ�
2������һ��.cpp��Դ�ļ�
3����ͷ�ļ�����������
4����Դ�ļ��ж��庯��	
*/

//ָ��
//	���壺 �洢��ַ��Ϣ   
//	���巽ʽ���������� * ָ�������

//��ָ��
//	ָ���ڴ��б��Ϊ0�Ŀռ�
//	���ڳ�ʼ��ָ�����
//	��ָ��ָ����ڴ��ǲ����Է��ʵ�

//Ұָ��
//	ָ��Ƿ����ڴ�ռ�

//const����ָ��
//	����ָ�룬����ָ��
//	���γ�����ָ�볣��
//	������ָ�룬�����γ���

	//ָ��������
	//	����ָ����������е�Ԫ��



#include <iostream>
#include "day_8.h"

using namespace std;

int main8(){
	//�����ķ��ļ���д
	int a = 10;
	int b = 20;
	swap_1(a, b);
	cout << endl;

	//ָ��Ķ���
	int *p;
	//pָ���¼a�ĵ�ַ
	p = &a;
	cout << "p�����ݣ�" << p << endl;
	cout << "a�ĵ�ַ��" << &a << endl;
	cout << "p�ĵ�ַ��" << &p << endl;

	//ָ��ĳ���ʹ��
	//��ָ�루��ȡָ��ָ����ڴ�ռ䣩��ʹ��
	*p = a;
	cout << "pָ��ָ����ڴ�ռ䣺" << *p << endl;
	cout << endl;


	//ָ����ռ�ڴ�ռ�
	//windows 32λ����ϵͳ  ռ4���ֽ�   64λ����ϵͳ  ռ8���ֽ�
	cout << "sizeof(int *) = " << sizeof(int *) << endl;
	cout << "sizeof(p) = " << sizeof(p) << endl;
	cout << "sizeof(double *) = " << sizeof(double *) << endl;
	cout << "sizeof(float *) = " << sizeof(float *) << endl;
	cout << "sizeof(char *) = " << sizeof(char *) << endl;
	cout << endl;

	//��ָ��
	//c++��null�����д����Ϊc++�����ϸ�Ĵ�Сд����
	//`null`����C++���ԵĹؼ��ֻ�Ԥ�����ʶ��
	//��C++11��׼����֮ǰ��ͨ��ʹ��`int * p = NULL;`����ָ���ʼ��Ϊ��ָ�롣NULL��һ���궨�壬������Ϊ��������0��
	//Ȼ����C++11������nullptr�ؼ��֣�����һ������Ŀ�ָ�볣����
	//ʹ��nullptr�����ṩ���õ����Ͱ�ȫ�ԣ���Ϊ�����Ա���ʽ��ת��Ϊ�κ����͵�ָ�롣
	//��ˣ�����ʹ��`int * p = nullptr;`����ʼ����ָ��
	int * x = NULL;
	/* cout << *x << endl; */
	/* * x = 100; */
	//0-255Ϊϵͳռ�ÿռ䣬����������
	cout << endl;

	//Ұָ��
	//int *z;		//δ��ʼ������δָ����ַ
	//*z = 10;	//ֱ�Ӹ�ֵ
	//int *p = (int *)0x1100;		//ָ��ĵ�ַ���Լ�������

	//const
	char C = 'c';		//����Ϊȥ��c���������·��C
	char D = 'd';		//����Ϊȥ��d���������·��D
	//const����ָ��  ����ָ��  �������ţ�
	//ָ��ָ��·�ߣ������޸ģ�ָ��ָ���ֵ��һ��·�ߵ�Ŀ�ĵأ��������޸�
	/*char const *zc = &C;*/
	const char *zc = &C;	//��ʼ����ѡ��c���������·��C
	cout << "zc = " << *zc << endl;
	zc = &D;	//ָ��ָ������޸�  ���ĳ�ѡ��ȥ��d���������·��D
	cout << "zc = " << *zc << endl;
	/**zc = 'e';*/	//ָ��ָ���ֵ�������޸� �޷���C·�ߵ�Ŀ�ĵظ���Ϊe����
	
	//const���γ���  ָ�볣��	���Լ��Σ�
	//ָ��ָ��·�ߣ��������޸ģ�ָ��ָ���ֵ��һ��·�ߵ�Ŀ�ĵأ������޸�
	char * const zd = &D;	//��ʼ����ѡ��d���������·��D
	cout << "zd = " << *zd << endl;
	*zd = 'e';		//ָ��ָ���ֵ�����޸� ���ĳ�ȥ��e���������·��D
	cout << "zd = " << *zd << endl;
	/*zd = &C;*/	//ָ��ָ�򲻿����޸�  �޷���D·�߸���Ϊ����·��

	//ָ�롢����������
	//ָ��ָ���ֵ��ָ���ָ�򶼲����Ը���
	cout << "D = " << D << endl;	//ָ���޸�ֵ��ֱ���޸�Ŀ�ĵص�ֵ ��ǰ�����ͨ����ֵ���޸�������
	const char * const zz = &D;
	cout << "zz = " << *zz << endl;
	/**zz = 'e';	
	zz = &C;*/
	cout << endl;

	//ָ��������
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	int *cq = arr;	//ָ�����������׵�ַ

	cout << "������Ԫ�أ�" << *(cq + 2) << endl; 
	//��������
	for(int i = 0; i < 10; i++){
		cout << "��" << i+1 << "��Ԫ��:" << *(cq + i) << endl;
		cout << "��" << i+1 << "��Ԫ��:" << cq[i] << endl;
	}
	cout << endl;

	//ֵ����(�����޸�ʵ��)
	int a0 = 10;
	int a1 = 20;
	swap01(a0, a1);
	cout << "a0 = " << a0 << endl;
	cout << "a1 = " << a1 << endl;
	//��ַ����(���޸�ʵ��)
	swap02(&a0, &a1);
	cout << "��ַ����֮�� a0 = " << a0 << endl;
	cout << "��ַ����֮�� a1 = " << a1 << endl;
	cout << endl;

	////��ȡ�������
	//int x0 = 1;
	//int *maoPao = new int[x0];	//��̬����

	//cout << "����������ĳ��ȣ�" << endl;
	//cin >> x0;

	////��ȡ�������ֵ
	//cout << "�����볤��Ϊ" << x0 <<"�����飺" << endl;
	//for(int i = 0; i < x0; i++){
	//	cin >> maoPao[i];
	//}

	////����ð��������Զ��庯��
	//MaoPao01(x0, maoPao);

	system("pause");

	return 0;
}