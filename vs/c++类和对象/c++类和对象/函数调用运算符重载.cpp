//2023-8-5

//�������������()����

//��������֮��ǳ�����������Ҳ�зº���

//û�й̶�д�����ǳ����	


#include <iostream>
#include <string>

using namespace std;

//��ӡ��
class MyPrintf{
public:
	MyPrintf(){
		cout << "�޲ι��캯����" << endl;
	}

	MyPrintf(string test){
		cout << test << endl;
		cout << "1" << endl;
	}
	//���أ���
	void operator()(string test){
		cout << test << endl;
	}

};

//�ӷ���
class MyAdd{
public:
	
	////û�й̶�д�����ǳ����	
	int operator()(int a, int b){
		return a + b;
	}
};

void text(){
	//����������������õ����вι��캯��
	MyPrintf p("hi");

	//��������������ȵ��õ����޲ι��캯�����ڵ��á�������������
	MyPrintf p1;

	p1("aa");

	MyAdd myadd;

	cout << myadd(100,100) << endl;

	//��������
	cout << MyAdd()(200,100) << endl;
}

int main(){
	text();

	
	system("pause");
	return 0;
}