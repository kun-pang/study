/*2023��7��31*/
/* ѧ���� */

/*
����--������ѧ��
��Ϊ--��ʾ������ѧ��
*/

#include <iostream>
#include <string>

using namespace std;

//ѧ����
//ѧ����
class Students{
	//���з���Ȩ��
public:
	//����
	string name;		//����
	int num;			//ѧ��

	//��Ϊ
	void studenXX(){
		system("cls");
		cout << "������" << name << " ѧ�ţ�" << num << endl;
	}
	//ͨ����Ϊ��ֵ
	void setName(){
		string name1 = getName();
		name = name1;
	}
	/*void steName1(string name1){
		name = name1;
	}*/
	string getName(){
		string name1;
		cin >> name1;
		return name1;
	}
	void setNum(){
		int num1= getNum();
		num = num1;
	}
	int getNum(){
		int num1;
		cin >> num1;
		return num1;
	}


};

int main12t1(){
	//ѧ����ʵ����
	Students s1;

	cout << "����������" << endl; 
	/*cin >> s1.name;*/
	s1.setName();
	cout << "������ѧ��" << endl; 
	/*cin >> s1.num;*/
	s1.setNum();

	/*s1.steName1("����");*/

	/*s1.name = "������";
	s1.num = 2111030833;*/
	s1.studenXX();

	system("pause");
	return 0;
}