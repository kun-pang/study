/*2023-8-6*/

//�̳з�ʽ��public�������̳У� private��˽�м̳У� protected�������̳У�

/*
public�̳У�
						�����public			�����private				�����protected

������ı�ʾȨ��		   public					��							protected

�����ܷ����				��						����							��



protected�̳У�
						�����public			�����private				�����protected

������ı�ʾȨ��		   protected				��							protected

�����ܷ����				��						����							��



private�̳У�
						�����public			�����private				�����protected

������ı�ʾȨ��		   private					��							private

�����ܷ����				��						����							��

*/

//Ȩ�޷��� ˽�� >  ���� > ����
//����Ԫȫ������

#include <iostream>

using namespace std;

//����
class Father{
public:
	int a;
protected:
	int b;
private:
	int c;
};

//����
//���м̳�
class Son1 : public Father{
public:
	void func(){
		a = 100;		//����Ĺ��г�Ա   ���м̳���  ���������˹��г�Ա
		b = 10;			//����ı�����Ա   ���м̳���  ���������˱�����Ա
		//c = 1;		//�����˽�г�Ա   ���м̳���  �����޷�����
	}
};

void text1(){
	Son1 s1;
	cout << s1.a <<endl;
	//cout << s1.b << end;		������Ա �޷����������	
}

//�����̳�
class Son2 : protected Father{
public:
	void func(){
		a = 100;		//����Ĺ��г�Ա   �����̳���  ���������˱�����Ա
		b = 10;			//����ı�����Ա   �����̳���  ���������˱�����Ա
		//c = 1;		//�����˽�г�Ա   �����̳���  �����޷�����
	}
};

void text2(){
	Son2 s2;
	//cout << s2.a <<endl;		������Ա �޷����������	
	//cout << s2.b << end;		������Ա �޷����������	
}

//˽�м̳�
class Son3 : private Father{
	friend class  GrandSon1;	//��Ԫ��   ��Ԫ��������������ͨ�����ģ����Բ�Ҫ���ⶨ�壩
public:
	void func(){
		a = 100;		//����Ĺ��г�Ա   ˽�м̳���  ����������˽�г�Ա
		b = 10;			//����ı�����Ա   ˽�м̳���  ����������˽�г�Ա
		//c = 1;		//�����˽�г�Ա   ˽�м̳���  �����޷�����
	}
};

void text3(){
	Son3 s3;
	//cout << s3.a <<endl;		˽�г�Ա �޷����������	
	//cout << s3.b << end;		˽�г�Ա �޷����������	
}

//������
class GrandSon1 : public Son3{
public:
	void func(){
		a = 100;		//��Son3���Ѿ���˽�г�Ա  ��ʹ�ǹ��м̳�Ҳ�޷�����
		b = 1;
		//c = 1;		// ˽�г�Ա�޷�����������ֱ�ӷ���
	}
};

int main(){
	/*text1();*/
	/*text2();*/
	text3();

	system("pause");
	return 0;
}

//cout << '' << ""; ����ʹ�õ����ţ�'����ʾ�ַ�����������ʹ��˫���ţ�"����ʾ�ַ���������