/*2023-8-8*/

/*
������Ҫ��ɲ���ΪCPU (���ڼ���)���Կ�(������ʾ)���ڴ���(���ڴ洢)
��ÿ�������װ��������࣬�����ṩ��ͬ�ĳ���������ͬ�����������Intel�� �̺�Lenovo����
�����������ṩ�õ��Թ����ĺ��������ҵ���ÿ����������Ľӿ�
����ʱ��װ��̨��ͬ�ĵ��Խ��й���

*/

#include <iostream>
#include <string>

using namespace std;

//cpu������
class Cpu{
public:
	//�����麯��
	virtual void caloulate() = 0;

};



//�Կ�������
class VideoCard{
public:
	//��ʾ�麯��
	virtual void display() = 0;

	
};



//�ڴ���������
class Memory{
public:	
	//�洢�麯��
	virtual void storage() = 0;


};



//Ӣ��cpu�� 
class InterCpu : public Cpu{
public:
	void caloulate(){
		cout << "Ӣ��cpu���㣡" << endl;
	}

	
};

//Ӣ���Կ��� 
class InterVideoCard : public VideoCard{
public:
	void display(){
		cout << "Ӣ���Կ���ʾ��" << endl;
	}
};

///Ӣ���ڴ����� 
class InterMemory : public Memory{
public:
	void storage(){
		cout << "Ӣ���ڴ����洢��" << endl;
	}
};

//����cpu�� 
class LenovoCpu : public Cpu{
public:
	void caloulate(){
		cout << "����cpu���㣡" << endl;
	}
};

//�����Կ��� 
class LenovoVideoCard : public VideoCard{
public:
	void display(){
		cout << "�����Կ���ʾ��" << endl;
	}
};

//�����ڴ����� 
class LenovoMemory : public Memory{
public:
	void storage(){
		cout << "�����ڴ����洢��" << endl;
	}
};

//������
class Computer{
public:
	//��ȡ��������Ĺ��캯��
	Computer(Cpu *cpu, VideoCard *videoCard, Memory *memory){
		m_Cpu = cpu;
		m_VideoCard = videoCard;
		m_Memory = memory;

	}

	//��������ӿں���
	void doWork(){
		cout << "����װ�ĵ��ԣ�" << endl;
		m_Cpu->caloulate();
		m_VideoCard->display();
		m_Memory->storage();
	}
	
	//��������
	~Computer(){
		if(m_Cpu != NULL || m_VideoCard != NULL|| m_Memory != NULL){
			cout << "Computer��������" << endl;
			delete m_Cpu;
			delete m_VideoCard;
			delete m_Memory;
			//��ֹҰָ��
			m_Cpu = NULL;
			m_VideoCard = NULL;
			m_Memory = NULL;
		}
	}

private:
	Cpu *m_Cpu;
	VideoCard *m_VideoCard;
	Memory *m_Memory;
};


void text(){
	Computer c1(new InterCpu, new LenovoVideoCard, new LenovoMemory);
	c1.doWork();

	Computer c2(new LenovoCpu, new LenovoVideoCard, new LenovoMemory);
	c2.doWork();
}

int main(){
	text();

	system("pause");
	return 0;
}