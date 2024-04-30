#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

struct Human {//полный доступ по умолчанию, ООП
	
public:
	void Print_hello_world() {//метод
		cout << "Hello world";

	}
	void Print_age() {
		cout << test;


	}


	string name;
	float weight;
	float height;//поля
	int age;



private://прячем данные от изменения
	//можно работать в методах структуры public
	int test = 112;


};


class Student {
public:
	string name;
	int group;
	static const int SIZE = 5;//static const - константа В struct 
	int ses[5];//Оценки
	float sr_oz;
	string pass = "Допущен";

};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string qwe;//qwe объект класса string
	Human one,two;

	one.Print_hello_world();
	
	one.age = 15;
	one.height = 186;
	one.weight = 85;
	one.name = "Dead";
	cout << one.age << " " << one.height << " " << one.weight << " " << one.name<<endl;

	two = one;//одинаковые данные
	cout << two.age << " " << two.height << " " << two.weight << " " << two.name << endl;


	one.Print_age();

	Student stud[3];
	cout << "Заполните данные о студентах"<<endl;

	for (int i = 0; i < 3; i++)
	{
		cout << "Введите имя студента номер№ " << i + 1 << endl;
		getline(cin, stud[i].name, '\n');

		cout << "Введите группу студента ";
		cin >> stud[i].group;
		for (int j = 0; j < stud[i].SIZE; j++)
		{
			cout << "Введите оценку №" << j + 1 << " у студента №" << i + 1 << endl;
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

	cout << "ФИО\t\t\tГруппа\tОценки\t\t Средняя оценка\t допуск "<<endl;
	for (int i = 0; i < 3; i++)
	{
		if (stud[i].sr_oz>=4.0)
		{
			stud[i].pass = "Допущен";
		}
		else {
			stud[i].pass = "Не допущен";
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