/*2023��7��25*/
/*�ṹ�尸��2  */

/*
Ӣ�۽ṹ��(5��)
	���������䣬�Ա�
�������ð���㷨��ͨ���������һ��������������ӡ
*/

#include <iostream>
#include <string>

using namespace std;




//����һ��Ӣ�۽ṹ��
struct YingXiong{
	string name;	//����
	int age;		//����
	string gender;	//�Ա�
};


//��������
void PaiXu(YingXiong yx[], int len);
void printfYX(YingXiong *t, int len);

int main9t2(){
	int len;
	//����һ��Ӣ������
	YingXiong yx[5] = {
		{"����", 23, "��"},
		{"����", 22, "��"},
		{"�ŷ�", 20, "��"},
		{"����", 21, "��"},
		{"����", 19, "Ů"}
	};

	//����ð������
	len = sizeof(yx) / sizeof(yx[0]);
	PaiXu(yx, len);

	system("pause");
	return 0;
}

//��ӡ����
void printfYX(YingXiong *t, int len){
	for(int i = 0; i < len; i++){
		cout << "Ӣ��������" << t[i].name << endl;
		cout << "Ӣ�����䣺" << t[i].age << endl;
		cout << "Ӣ���Ա�" << t[i].gender << endl;
	}
}

//ð��������
void PaiXu(YingXiong *yx, int len){
	for(int i = 0; i < len -1; i++){
		for(int j = 0; j < len - i -1; j++){
			if(yx[j].age > yx[j + 1].age){
				YingXiong t;
				t = yx[j];
				yx[j] = yx[j + 1];
				yx[j + 1] = t;
				/*t[0].name = yx[j].name;
				t[0].age = yx[j].age;
				t[0].gender = yx[j].gender;

				yx[j].name = yx[j + 1].name;
				yx[j].age = yx[j + 1].age;
				yx[j].gender = yx[j + 1].gender;

				yx[j + 1].name = t[0].name;
				yx[j + 1].age = t[0].age;
				yx[j + 1].gender = t[0].gender;*/
			}
		}
	}
	//���ô�ӡ����
	printfYX(yx, len);
}