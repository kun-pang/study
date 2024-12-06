/*2023-8-23*/

//ģ�������
//ģ�岻�����ܵģ���Щ�ض����������ͣ��Զ����������ͣ��������飬��Ҫ���廯��ʽ����

#include <iostream>
#include <string>

using namespace std;


class Person{
public:

	Person(string name, int age):m_Name(name), m_Age(age){
		
	}

	//����
	string m_Name;
	//����
	int m_Age;
};


////1�����������
//bool operator==(Person &p1, Person &p2){
//	if(p1.m_Age == p2.m_Age && p1.m_Name == p2.m_Name){
//		return true;
//	}else{
//		return false;
//	}
//}

//�������ȽϺ���
template<typename T>
bool myCompare(T &a, T &b){
	if(a == b){
		return true;
	}else{
		return false;
	}
}

//2�����廯ģ��
//����Person��İ汾���о��廯ʵ�֣����Ȼ����
template<> bool myCompare(Person &p1, Person &p2){
	if(p1.m_Age == p2.m_Age && p1.m_Name == p2.m_Name){
		return true;
	}else{
		return false;
	}
}



void test01(){
	//int a = 1;
	//int b = 2;

	//if(myCompare(a, b)){
	//	cout << "a == b" << endl;
	//}else{
	//	cout << "a != b" << endl;
	//}

	Person p1("Jon", 21);
	Person p2("TOom", 14);

	//�޷��������� ��������֪����ô�Ƚ�
	//myCompare(p1, p2);

	//�������
	//1�����������
	//2�����廯ģ��

	if(myCompare(p1, p2)){
		cout << "p1 == p2" << endl;
	}else{
		cout << "p1 != p2" << endl;
	}

}


int main(){

	test01();

	system("pause");
	return 0;
}