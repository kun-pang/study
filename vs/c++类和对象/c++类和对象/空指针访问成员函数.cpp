//2023-8-3

//��ָ����ó�Ա����

#include <iostream>

using namespace std;

class Person{
public:
	void show1(){
		cout << "1" << endl;
	}
	
	void show2(){

		//ȷ����׳�ԣ�����Ŀ������ԣ�
		if(this == NULL){
			return;
		}
		
		//age -> ʵ������this->age this���ܵ���һ��NULL����ָ�� �൱�ڶ���û��ʵ�� �޷��������ԣ�
		cout << "age = " << age << endl;
	}


	int age;
};

void text1(){
	Person *p = NULL;	//������ָ��

	//p->show1();		//��ָ���ܷ���

	p->show2();			//��ָ�벻�ܷ��ʣ��漰��this��
}

int main(){
	text1();

	system("pause");
	return 0;
}