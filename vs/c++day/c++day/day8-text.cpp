/*2023��7��24*/
/*ָ�� ���� ����*/

//��װһ������������ð������ʵ�ֶ��������������������

#include <iostream>

using namespace std;

//ð������
void MaoPao01(int a, int* p) {    //��ȡ������׵�ַ
    cout << "����ǰ������" << endl;
    for (int i = 0; i < a; i++) {
        cout << *(p + i) << "  ";
    }
    cout << endl;
    //����ð�ݵ�����
    for (int i = 0; i < (a - 1); i++) {
        //ÿ�ֱȽϴ���
        for (int j = 0; j < (a - i - 1); j++) {
            if (*(p + j) > *(p + j + 1)) {
                int t = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = t;
            }
        }
    }
    cout << "����������" << endl;
    for (int i = 0; i < a; i++) {
        cout << *(p + i) << "  ";
    }
}

int main8t() {
    //��ȡ�������
    int x0 = 0;
    cout << "����������ĳ��ȣ�" << endl;
    cin >> x0;

    int* maoPao = new int[x0];    //��̬����  �����ýṹ��

    //��ȡ�������ֵ
    cout << "�����볤��Ϊ" << x0 << "�����飺" << endl;
    for (int i = 0; i < x0; i++) {
        cin >> maoPao[i];
    }

    //����ð��������Զ��庯��
    MaoPao01(x0, maoPao);

	system("pause");

    delete[] maoPao;    //�ͷŶ�̬�����ڴ�

    return 0;
}