/*2023��7��15*/
/*������*/

/*	
	1-100
	ʮλ����λ��������7 ��ӡ�������ӡ�
	7�ı���Ҳ��ӡ�������ӡ�
	�����������������ӡ����
*/
#include <iostream>

using namespace std;


//��ȡ���ֱ�������λ��ʮλ
//forѭ����ʵ�����ֵ�����
//����if�������ж��Ƿ�7����Ϊ7����
//���������������������
//���������ӡ����
int main4t1(){
	int num = 0;
	int num_ge = 0;
	int num_shi = 0;

	for(;num <= 100; num++){
		if(num < 10){				//��ʵ���ø���ʮ����������   �����ֳ�����7�ı�������λ��7��ʮλ��7������������||���벻����������������
			if(num == 7){
				cout << "������" << endl;
			}else{
				cout << num << endl;
			}
		}else if(num <100){
			num_ge = num %10;
			num_shi = num / 10;
			if(num % 7 == 0){
				cout << "������" << endl;
			}else if(num_ge == 7 || num_shi == 7){
				cout << "������" << endl;
			}else{
				cout << num << endl;
			}
		}else{
			cout << num << endl;
			cout << "������" << endl;
		}

	}


	system("pause");

	return 0;
}