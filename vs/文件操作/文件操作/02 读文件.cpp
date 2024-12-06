/*2023-8-8*/

//���ļ�
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
*/

//�ļ��򿪷�ʽ
/*
		�򿪷�ʽ			���
		ios::in				Ϊ���ļ������ļ�
		ios::out			Ϊд�ļ������ļ�
		ios::ate			��ʼλ�ã��ļ�β �����ļ�ĩβ��
		ios::app			׷�ӷ�ʽд�ļ�
		ios::trunc			����ļ�������ɾ�����ٴ���
		ios::binary			�����Ʒ�ʽ

		ע�⣺�ļ��򿪷�ʽ�������ʹ�ã�����|������
		���磺�ö����Ʒ�ʽд�ļ� ios::binary | ios::out
*/

#include <iostream>
#include <string>
#include <fstream>		//1������ͷ�ļ�

using namespace std;

void test(){
	//2������������ 
	ifstream ifs;

	//3�����ļ�
	
	ifs.open("����.txt",ios::in);
	
	//�ж��ļ��Ƿ��ȡ�ɹ�
	//is_open()���ص��ǲ�������
	if(!ifs.is_open()){
		cout << "�ļ�Ϊû�д򿪳ɹ���" << endl;
		return;
	}

	//4��������
	
	//��һ��
	//char buf[1024] = { 0 };		//ȫ����ʼΪ0
	////һ��һ�еĶ���buf������ ����֮��᷵��false
	////����ǲ���һ��һ�е������������Ҫendl
	//while(ifs >> buf){
	//	cout << buf << endl;
	//}

	//�ڶ���
	//char buf[1024] = { 0 };
	////ifstream�ĳ�Ա����getline ��Ҫ��ȡ�洢�ַ���ָ�� �Լ���С
	//while(ifs.getline(buf, sizeof(buf))){
	//	cout << buf << endl;
	//}

	//������
	//string c;
	////ȫ�ֺ���getline  ��Ҫ��ȡ�ļ����� �Լ��ַ�����
	//while(getline(ifs, c)){
	//	cout << c << endl;
	//}

	//�����֣����Ƽ���
	//һ���ַ�һ���ַ��Ķ�ȡ
	char c;
	while((c = ifs.get()) != EOF){		//EOF  end of file  �ļ�ĩβ
		cout << c ;
	}

	//5���ر��ļ�
	ifs.close();
}

int main(){
	test();

	system("pause");
	return 0;
}