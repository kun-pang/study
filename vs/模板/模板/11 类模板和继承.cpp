/*2023-8-24*/

//��ģ��ͼ̳�
//������̳еĸ�����һ����ģ��ʱ��������������ʱ��Ҫָ�����������������
//�����ָ�����������޷�����������ڴ�
//�����Ҫ���ָ���������е�T���ͣ�����ҲҪ�����ģ��


#include <iostream>
#include <string>

using namespace std;


//��ģ��
template<typename T>
class Base{
public:
	Base(){
		cout << "�����T���������ͣ�" << typeid(T).name() << endl;
	}

	T m;
};

//����
//class Son : public Base{};		//����û��ָ�����ͣ��������޷�����������ڴ棨���ٿռ䣨�ֽڣ���
class Son : public Base<int>{};

//�����Ҫ���ָ���������е�T���ͣ�����ҲҪ�����ģ��
template<typename T, typename T0>
class Son2 : public Base<T>{
public:
	Son2(){
		cout << "������T���������ͣ�" << typeid(T).name() << endl;
		cout << "������T0���������ͣ�" << typeid(T0).name() << endl;
	}
	


	T0 k;
};

void test01(){
	Son2<int, char> s;

}


int main(){

	test01();

	system("pause");
	return 0;
}