/*2023-8-6*/

//���������˳��

//���� ->  �ӹ� -> ���� -> ����
//����ջ�ṹ ������ջ

#include <iostream>

using namespace std;

//������
class Base{
public:
	Base(){
		cout << "Base�Ĺ��캯��!" << endl;
	}
	~Base(){
		cout << "Base����������!" << endl;
	}
};

//���� �̳���  ������
class Son : public Base{
public:
	Son(){
		cout << "Son�Ĺ��캯��!" << endl;
	}
	~Son(){
		cout << "Son����������!" << endl;
	}

};


void text(){
	Son s;

}

int main(){
	
	text();

	system("pause");
	return 0;
}