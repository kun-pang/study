/*2023��7��18*/
/*����  ����*/

/*��ά����
��һά��һ��ά��
���巽ʽ��
			��������  ������[����][����]��
			��������  ������[����][����] = {{ֵ1��ֵ2}��{ֵ3��ֵ4}....};			һ��������һ�е�����
			��������  ������[����][����] = {ֵ1��ֵ2��ֵ4....};						
			��������  ������[][����] = {ֵ1��ֵ2....};								��������ʡ
*/

/*����
��װ�ظ����� ���ٴ�����
���巽ʽ��
			����ֵ����  ���������������б�{
				���������
				return ���ʽ
			}

��ʽ��
		�޲Σ���ʽ�������з���return���������ͣ�void�������������ͣ���
		�в��з�
		�޲��޷�
		�в��޷�

���������ж�Σ�����ֻ����һ��
*/


#include <iostream>
#include "day_8.h"

using namespace std;

//����ֵ�ļӷ�
int Add(int num1, int num2){		//�˴�num1��2Ϊ�β�
	return num1 + num2;
}

//����������
int Sub(int num1 ,int num2);

//��������������
void swap(int a, int b);

int main7(){
	//��������
	int arr0[2][3] = {{1,2,3},{4,5,6}};
	//�鿴ռ�ÿռ�
	cout << "ռ�ÿռ䣺" << sizeof(arr0) << endl;
	cout << "��һ��ռ�ÿռ䣺" << sizeof(arr0[0]) << endl;
	cout << "����ռ�ÿռ䣺" << sizeof(arr0[0][0]) << endl;
	cout << "�ܸ�������" << sizeof(arr0) / sizeof(arr0[0][0]) << endl;
	cout << "��������" << sizeof(arr0) / sizeof(arr0[0]) << endl;
	cout << "��������" << sizeof(arr0[0]) / sizeof(arr0[0][0]) << endl;
	//�鿴�׵�ַ
	cout << "�׵�ַ��" << arr0 << endl;
	cout << "��һ����ַ��" << &arr0[0][0] << endl;
	cout << "��һ�е�ַ��" << arr0[0] << endl;					//����& ������
	cout << "�ڶ��е�������ַ��" << &arr0[1][2] << endl;
	cout << endl;

	//����			һд��mian����֮ǰ		��дmian����֮�󣬱���������		�淶������ĸ��д
	int num1,num2;
	int sum;
	cout << "����ֵ�ļӷ���������ֵ��" << endl;
	cin >> num1 >> num2;

	//���üӷ�������
	sum =  Add(num1, num2);		//�˴�num1��2Ϊʵ��
	cout << "sum = " << sum << endl;

	//���ü���������
	sum =  Sub(num1, num2);
	cout << "sum = " << sum << endl;
	cout << endl;

	//ֵ����
	//����ʵ�ν�ֵ����a��b�У�Ȼ�����a��b������ֵ������num1��num2û�б仯
	//ֵ���� �βα��ʵ�β���
	swap(num1, num2);
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	swap_1(100,200);

	system("pause");

	return 0;
}

//����ֵ�ļ���
int Sub(int num1, int num2){
	return num1 - num2;
}

//��������
void swap(int a, int b){
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