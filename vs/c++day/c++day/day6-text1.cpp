/*2023��7��17*/
/*��ֻС�����  */

/*
�ж���ֻС�����أ���ӡ���ص�С��
*/

#include <iostream>

using namespace std;

int main6t1(){
	//����С������
	int x = 1;
	int *pag = new int[x]; // ʹ�ö�̬�ڴ����  �ں�ָ�����ԭ��

	//��ȡС�����
	cout << "������С�������" << endl;
	cin >> x;


	//��ȡС������
	cout << "������" << x <<"ֻС������أ�" <<endl;
	for(int i = 0; i < x; i++){
		cin >> pag[i];
	}

	//ȡ��С����������Ƚ�
	//��һ��λ�ã�������С�����1 2 4 3 4
	for(int i = 0;i < x; i++){
		int arr[1] = {0};
		for(int j = x-1; j > i; j--){
			if(pag[i] < pag[j]){
				arr[0] = pag[i];
				pag[i] = pag[j];
				pag[j] = arr[0];
			}else{
				continue;
			}
		}
	
	}

	//�������С��
	for(int i = 0; i < x; i++){
		cout << pag[i] << endl;
	}
	cout << "����С��Ϊ��" << pag[0] << endl;


	/*���ⶨ��һ�����ֵ���������ÿ��ֵ������֮�Ƚϣ��������max ��ֵ��max��Ȼ������Ƚ�
	int max = 0;
	for(int i = 0; i < 5; i++){
		if(max < pag[i]){
			max = pag[i];
		}
	}
	cout << max << endl;
	*/

	system("pause");

	return 0;
}