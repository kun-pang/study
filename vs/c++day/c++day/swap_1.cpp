/*2023��7��24*/
/*�����ķ��ļ���д */



//""��ʾ�����Զ����ļ�
//<>��ʾ�ٷ��ı�׼���ļ�
#include "day_8.h"

void swap_1(int a, int b){
	cout << "����ǰ��" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	int t = a;
	a = b;
	b = t;
	cout << "������" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

}

//�������ֵ
void swap01(int a, int b){
	int t = a;
	a = b;
	b = t;
	cout << "swap01 a = " << a << endl;
	cout << "swap01 b = " << b << endl;
}

//������ǵ�ַ����
void swap02(int *p1, int *p2){
	int t = *p1;
	*p1 = *p2;
	*p2 = t;
	cout << "swap02 *p1 = " << *p1 << endl;
	cout << "swap02 *p2 = " << *p2 << endl;
}