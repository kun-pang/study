/*2023��7��13*/
//��ϰ ��ֻС�����

#include <iostream>

using namespace std;

int main2t(){
	//��ʼ��
	int pig_a = 0,pig_b = 0,pig_c = 0;
	//��ȡ��ֻС������  չʾ��ֻС������
	cout << "��ֱ�����С��a��b��c��������" << endl;
	cin >> pig_a >> pig_b >> pig_c;
	cout << "a��" << pig_a << endl;
	cout << "b��" << pig_b << endl;
	cout << "c��" << pig_c << endl;

	//��ֻС���ȱȽ�a��b��ֻ���ص���c���бȽ�
	if(pig_a > pig_b){
		if(pig_a > pig_c && pig_b != pig_c){
			//ѡ������
			if(pig_c > pig_b){
				//a > c > b
				cout << "���ص�С���ǣ�pig_a;" << "�����С���ǣ�pig_b" << endl;	 
			}else{
				//a > b > c
				cout << "���ص�С���ǣ�pig_a;" << "�����С���ǣ�pig_c" << endl;
			}
		}else if(pig_c == pig_b){
				cout << "���ص�С���ǣ�pig_a;" << "�����С���ǣ�pig_b��pig_c" << endl;
		}else{// c > a > b
			cout << "���ص�С���ǣ�pig_c;" << "�����С���ǣ�pig_b" << endl;
		}
	}else if(pig_a == pig_b){
		if(pig_a > pig_c && pig_a != pig_c){
			cout << "���ص�С���ǣ�pig_a��pig_b;" << "�����С���ǣ�pig_c" << endl;
		}else if(pig_a == pig_c){
			cout << "��ֻһ����;" << endl;
		}else{
			cout << "���ص�С���ǣ�pig_c;" << "�����С���ǣ�pig_a��pig_b" << endl;
		}
	}else{   //b > a
		if(pig_b > pig_c && pig_a != pig_c){
			//ѡ������
			if(pig_c > pig_a){
				//b > c > a
				cout << "���ص�С���ǣ�pig_b;" << "�����С���ǣ�pig_a" << endl;	 
			}else{
				//b > a > c
				cout << "���ص�С���ǣ�pig_b;" << "�����С���ǣ�pig_c" << endl;
			}
		}else if(pig_c == pig_a){
			cout << "���ص�С���ǣ�pig_b;" << "�����С���ǣ�pig_a��pig_c" << endl;
		}else if(pig_c == pig_b){
			cout << "���ص�С���ǣ�pig_b��pig_c;" << "�����С���ǣ�pig_a" << endl;
		}else{ //c > b > a
			cout << "���ص�С���ǣ�pig_c;" << "�����С���ǣ�pig_a" << endl;
		}
	}


	system("pause");

	return 0;
}