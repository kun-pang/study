/*2023-8-20*/

//����������
//	���ú���ģ���װһ�������������ԶԲ����������������������
//	�������Ӵ�С�������㷨Ϊѡ������
//	�ֱ�����char�����int������в���

#include <iostream>

using namespace std;


template<typename T>
//ѡ��������
//����Ϊ"T b" ����forѭ���޷�����
void mySwap(T *a, int b){		
	for(int i = 0; i < b; i++ ){
		int Max = i;		//�ٶ�Ϊ��ǰ�±������Ϊ���ֵ
		for(int j = i + 1; j < b; j++){
			if(a[Max] < a[j]){
				Max = j;
			}
		}

		if(Max != i){
			T t = a[i];
			a[i] = a[Max];
			a[Max] = t;
		}
	}
	cout << "�������!" << endl;
}



void test01(){
	int a[3] = {1, 7, 4};
	char b[5] = {'a', 'b','A', 'B','c'};

	//������ sizeof(b) / sizeof(char)	�����С����

	cout << "δ����ǰ��" << endl;
	for(int i = 0; i < 3; i++){
		cout << a[i] << " ";
	}
	cout  << endl;
	for(int i = 0; i < 5; i++){
		cout << b[i] << " ";
	}
	

	mySwap(a, 3);
	mySwap(b, 5);

	for(int i = 0; i < 3; i++){
		cout << a[i] << " ";
	}
	cout  << endl;
	for(int i = 0; i < 5; i++){
		cout << b[i] << " ";
	}
}

int main(){

	test01();

	system("pause");
	return 0;
}