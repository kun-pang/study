/*2023-8-8*/


//�����Ʒ�ʽ���ļ���Ҫ������������ó�Ա����red
//����ԭ�ͣ�istream & read(char * buffer, int len);
//�������ͣ��ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䡣len�Ƕ�д���ֽ���

//д��ô��������ݣ�����Ҫ����Щ��������

#include <iostream>

#include <fstream>	//1������ͷ�ļ�

using namespace std;


class KUN{
public:
	char m_Name[64];
	double m_Age;
	char m_TeChang[70];
	char m_Ge[100];
};

void test(){
	//2������������ 
	ifstream ifs("������.txt",ios::binary | ios::in);

	//�ж��ļ��Ƿ��
	if(!ifs.is_open()){
		cout << "�ļ�û�д�" << endl;
		return;
	}
	
	//4��������
	KUN k;
	ifs.read((char *)&k, sizeof(k));

	cout << k.m_Name << endl << k.m_Age << endl << k.m_TeChang << endl  << k.m_Ge << endl;
	
	//5���ر��ļ�
	ifs.close();
}

int main(){
	test();

	system("pause");
	return 0;
}