/*2023��7��25*/
/*�ṹ�尸��1  */

/*
3����ʦ��ÿ����ʦ5��ѧ��
	��ʦ������������
	ѧ����������ѧ�š�����
��ӡ��ʦ�Լ���ʦ�����ѧ��

*/

#include <iostream>
#include <string>
#include <cstdlib>		
#include <ctime>		

using namespace std;

//����ѧ���ṹ��
struct Student{
	int id;			//ѧ��
	string name;	//����
	int score;		//�ɼ�
};

//������ʦ�ṹ��
struct Teacher{
	int id;			//����
	string name;	//����
	Student stu[5];	//���������ѧ��
};


//��������
void printfTS(Teacher *t);
void all(Teacher arr[], int len);

int main9t1(){
	// �����������
	srand(time(NULL));

	//������ʦ���������
	Teacher tea[3] = {
		{1,"����ʦ",{
			{1,"��һ",56},
			{2,"�¶�",73},
			{3,"����",57},
			{4,"����",98},
			{5,"����",60}
		}},
		{2,"����ʦ",{
			{6,"����",76},
			{7,"����",87},
			{8,"�ܰ�",98},
			{9,"���",48},
			{10,"֣ʮ",64}
		}},
		{3,"֣��ʦ",{
			{11,"��ʮһ",36},
			{12,"��ʮ��",83},
			{13,"Ԫʮ��",87},
			{14,"��ʮ��",78},
			{15,"��ʮ��",60}
		}}
	};

	Teacher arr1[3];
	int len;

	//���ô�ӡ����
	printfTS(tea);

	//���ø�ֵ����
	len = sizeof(arr1) / sizeof(arr1[0]);
	all(arr1,len);

	//���ô�ӡ����
	printfTS(arr1);
	

	system("pause");
	return 0;
}

//��ӡ����
void printfTS(Teacher *t){
	//ָ������ t[i]
	for(int i = 0; i < 3; i++){
		cout << t[i].id << " " << t[i].name << endl;
		for(int j = 0; j < 5; j++){
			cout <<"������ѧ�� " << t[i].stu[j].id << " " << t[i].stu[j].name 
			<< " " << t[i].stu[j].score << endl;
		}
	}
}

//�����鸳ֵ
void all(Teacher arr[], int len){
	//���
	string nameS = "ABCDE";
	for(int i = 0; i < len; i++){
		arr[i].id = i + 1;
		arr[i].name = "Teacher_";
		arr[i].name += nameS[i];	//ʵ��ÿ����ʦ���ֲ�һ��

		for(int j = 0; j < 5; j++){
			arr[i].stu[j].id = j + 1;
			arr[i].stu[j].name = "Student";
			arr[i].stu[j].name += nameS[i];
			arr[i].stu[j].score = rand()%101;
		}
	}
}