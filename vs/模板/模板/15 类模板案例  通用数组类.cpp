/*2023-8-24*/

//ͨ��������Ҫ��
//1�����Զ��������������Լ��Զ����������͵����ݽ��д洢
//2���������е����ݴ洢������
//3�����캯���п��Դ������������
//4���ṩ��Ӧ�Ŀ������캯�������Լ�operator=��ֹǳ��������
//5���ṩβ�巨��βɾ���������е����ݽ������Ӻ�ɾ��
//6������ͨ���±귢��ʽ���������Ԫ��
//7�����Ի�ȡ�����е�ǰԪ�ظ��������������


#include <iostream>
#include <string>

using namespace std;

//ͨ������ģ��
template<typename T2>
class MyArray{
public:

	//��ʼ��
	MyArray(int num){
		this->m_Num = num;
		*m_Array = new T2[this->m_Num];
	}

	//����=
	MyArray& operator=(T2 &p){
		if(this->m_Array != NULL){
			delete this->m_Array;
			this->m_Array = NULL;
		}

		this->m_Array = p.m_Array;

		return *this;
	}


	MyArray(const MyArray &p){
		this->m_Num = p.m_Num;
		if(p.m_Array != NULL){
			this->m_Array = p.m_Array;
		}else{
			cout << "��������Ϊ��!" << endl;
		}
	}



	//�ͷŶ����ռ�
	~MyArray(){
		if(this->m_Num != nullptr){
			for(int i = 0; i < this->m_Num; i++ ){
				delete this->m_Array[i];
				this->m_Array[i] = NULL;
			}
		}
	}

	//���������
	int m_Num;
	//ָ�� ����ά��������������
	T2 *m_Array;
};




void test01(){
	
}


int main(){

	test01();

	system("pause");
	return 0;
}