#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

struct Human {//������ ������ �� ���������, ���
	
public:
	void Print_hello_world() {//�����
		cout << "Hello world";

	}
	void Print_age() {
		cout << test;


	}


	string name;
	float weight;
	float height;//����
	int age;



private://������ ������ �� ���������
	//����� �������� � ������� ��������� public
	int test = 112;


};


class Student {
public:
	string name;
	int group;
	static const int SIZE = 5;//static const - ��������� � struct 
	int ses[5];//������
	float sr_oz;
	string pass = "�������";

};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string qwe;//qwe ������ ������ string
	Human one,two;

	one.Print_hello_world();
	
	one.age = 15;
	one.height = 186;
	one.weight = 85;
	one.name = "Dead";
	cout << one.age << " " << one.height << " " << one.weight << " " << one.name<<endl;

	two = one;//���������� ������
	cout << two.age << " " << two.height << " " << two.weight << " " << two.name << endl;


	one.Print_age();

	Student stud[3];
	cout << "��������� ������ � ���������"<<endl;

	for (int i = 0; i < 3; i++)
	{
		cout << "������� ��� �������� ����� " << i + 1 << endl;
		getline(cin, stud[i].name, '\n');

		cout << "������� ������ �������� ";
		cin >> stud[i].group;
		for (int j = 0; j < stud[i].SIZE; j++)
		{
			cout << "������� ������ �" << j + 1 << " � �������� �" << i + 1 << endl;
			cin >> stud[i].ses[j];

			
		}
		cout << endl << endl << endl;
		cin.ignore(32000, '\n');
	}
	for (int i = 0; i < 3; i++)
	{
		float sum = 0;
		for (int j = 0; j < stud[i].SIZE; j++)
		{
			sum += stud[i].ses[j];
		}
		stud[i].sr_oz = sum / 5;
	}

	cout << "���\t\t\t������\t������\t\t ������� ������\t ������ "<<endl;
	for (int i = 0; i < 3; i++)
	{
		if (stud[i].sr_oz>=4.0)
		{
			stud[i].pass = "�������";
		}
		else {
			stud[i].pass = "�� �������";
		}

		cout << stud[i].name << "\t\t" << stud[i].group << "\t";

		for (int j = 0; j < stud[i].SIZE; j++)
		{
			cout << stud[i].ses[j]<<" ";
		}
		cout << "\t\t" << stud[i].sr_oz << "\t" << stud[i].pass << endl;

	}





	return 0;
}