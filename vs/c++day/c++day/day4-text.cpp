/*2023��7��15*/
/*ˮ�ɻ���   һ����λ������ÿһλ�����η����֮�͵��ڱ���   1^3+5^3+3^3=153 */


#include <iostream>
#include <cmath>		//�ݴκ�����ͷ�ļ�

using namespace std;

int main4t(){
	int num = 100;		//��ȡ���ֵı���
	int snum = 0;       //���ֵ�λ��3����֮��
	int num_ge = 0;		//��ȡ���ָ�λ
	int num_shi = 0;	//��ȡ����ʮλ
	int num_bai = 0;	//��ȡ���ְ�λ

	num_ge = num % 10;	//ȡģ���ø�λ
	num_shi = (num / 10) % 10;	//��10ȡģ ��ʮλ
	num_bai = num /100;	//��100 �ð�λ

	snum = static_cast<int>(pow(static_cast<double>(num_ge), 3) + pow(static_cast<double>(num_shi), 3) + pow(static_cast<double>(num_bai), 3));
	/*ע��pow��������ֻ�ܽ���double�� ��Ҫǿ��ת������ static_cast<��������>��������*/

	do{
		num_ge = num % 10;	
		num_shi = (num / 10) % 10;	
		num_bai = num /100;	

		snum = static_cast<int>(pow(static_cast<double>(num_ge), 3) + 
			pow(static_cast<double>(num_shi), 3) + pow(static_cast<double>(num_bai), 3));
		if(num == snum){			//��ӡˮ�ɻ���
			cout << num << endl;
		}
		num_ge = 0;	
		num_shi = 0;	
		num_bai = 0;	
		num ++;
	}while(num < 1000);


	system("pause");

	return 0;
}