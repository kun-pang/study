/*2023��7��18*/
/*�ɼ�ͳ�� */

/*��ά����
3��ͬѧ�ɼ����£�
			����		��ѧ		Ӣ��
����		100			100			100
����		90			50			100
����		60			70			80
*/

#include <iostream>
#include <string>
#include <sstream>			//stringstreamͷ�ļ�

using namespace std;

int main7t() {
    // ����һ����ά����洢��Ϣ
    string core[][5] = {
        {"����", "����", "��ѧ", "Ӣ��", "�ܼ�1"},
        {"", "0", "0", "0", "0"},
        {"", "0", "0", "0", "0"},
        {"", "0", "0", "0", "0"},
        {"�ܼ�2", "0", "0", "0", "0"}
    };		//ע�������{0}����{��0��}�Ļ����ᱨ��
	/*string arr[1][1] = {{0}};*/

    // ��ȡ��Ϣ
    cout << "������ѧ���ɼ���" << endl;
    for (int j = 1; j < 4; j++) {
        for (int i = 0; i < 4; i++) {
            cin >> core[j][i];
        }
    }

    // ��ӡ������Ϣ
    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 5; i++) {
            cout << core[j][i] << "  ";
        }
        cout << endl;
    }

    // ͳ��ÿ���ˡ�ÿ�Ƶ��ܳɼ�����ͳ��
    for (int i = 1; i < 5; i++) {
        int sum = 0;
        for (int j = 1; j < 4; j++) {
            sum += stoi(core[j][i]); // ���ַ���ת��Ϊ�����������
        }
        stringstream ss;

		/*����һ�����࣬�����������ڴ��н����ַ�������������������
		`std::stringstream` �����Ҫ�����ǽ���ͬ���͵�����ת��Ϊ�ַ�����
		���ṩһ�ּ򵥵ķ�ʽ�������ַ�����
		���ṩ��������/��������ƵĽӿڣ������� `std::stringstream` ��д�����ݣ�Ȼ����ж�ȡ���ݡ�*/

        ss << sum; // ������д�� stringstream
        ss >> core[4][i]; // �� stringstream �е��ַ�����ȡ���ܼ���
		
		//to_string��2010֮���ǲ��������
    }

    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 5; i++) {
            cout << core[j][i] << "  ";
        }
        cout << endl;
    }

    system("pause");

    return 0;
}