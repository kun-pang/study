/*2023��7��17*/
/*����Ԫ������  */

/*
Ԫ����������
*/

#include <iostream>

using namespace std;

int main6t2(){
	//�����������飬һ���洢˳�����飬һ���洢��������
	int arr0[5] = {1,3,4,52,3};
	int arr1[5];

	//������������
	for(int i = 0; i < 5; i++){
		arr1[5-1-i] = arr0[i];
	}
	
	//�����������
	for(int i = 0; i < 5; i++){
		cout << arr0[i] << "  ";
	}
	cout << endl;
	for(int i = 0; i < 5; i++){
		cout << arr1[i] << "  ";
	}

	cout << endl;

	int start = 0;		//��ʼ�±�
	int end = sizeof(arr0)/sizeof(arr0[0]) - 1;			//ĩβ�±�
	while(start < end){
		int t;			//�м����
		t = arr0[start];
		arr0[start] = arr0[end];	
		arr0[end] = t;			//����
		start++;				//��ʼ�±����м���
		end--;					//ĩβ�±����м���
	}
	for(int i = 0; i < 5; i++){
		cout << arr0[i] << "  ";
	}


	system("pause");

	return 0;
}