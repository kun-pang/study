/*2023-8-8*/

//д�ļ�
/*
	1������ͷ�ļ�
		#include <fstream>
	2������������
		ifstream ������;		������һ��Ϊifs		ifstreamҲ���Ի���fstream
	3�����ļ����ж��ļ��Ƿ�򿪳ɹ�
		ifs.open�����ļ�·�������򿪷�ʽ����
	4��������
		���ֶ����ݷ�ʽ
	5���ر��ļ�
		ifs.close������

	2��3����һ��д
*/

//�����Ʒ�ʽд�ļ���Ҫ������������ó�Ա����write
//����ԭ�ͣ�ostream & write(const char * buffer, int len);
//�������ͣ��ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䡣len�Ƕ�д���ֽ���



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
	ofstream ofs("������.txt",ios::binary | ios::out);

	//3�����ļ�
	
	/*ofs.open("������.txt",ios::binary | ios::out);*/
	
	//4��д����
	KUN k = {"������", 2.5, "��������rap������", "����̫����" };
	ofs.write((const char *)&k, sizeof(k));
	/*ofs << endl << "����̫����" << endl;*/
	
	//5���ر��ļ�
	ofs.close();
}

int main(){
	test();

	system("pause");
	return 0;
}