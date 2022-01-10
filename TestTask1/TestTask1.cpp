
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");

	//сначала вводим данные о сотрудниках(их часы) и все другие данные
		int  LeonardoDiCaprio = 170;
		double KeanuReeves = 184.5;
		int  MargotRobbie = 150;
		int  CameronDiaz = 5;
		int MorganFreeman = 0;

		int l, k, m, c, v, selection;
		int suml, sumk, summ, sumc;
		double eve;

		cout << "Leonardo Di Caprio за июль месяц проработал " << LeonardoDiCaprio <<" часов" << endl;
		cout << "Введите почасовую зарплату ( в $ ) для Leonardo Di Caprio, далее нажмите Enter...\n"<<endl;
		cin >> l ;
		suml = l * LeonardoDiCaprio;
		cout << "Зарплата по заработаным часам = " << suml <<"$"<< endl<<endl;

		cout << "Keanu Reeves за июль месяц проработал " << KeanuReeves << " часов" << endl;
		cout << "Введите почасовую зарплату для Keanu Reeves, далее нажмите Enter...\n";
		cin >> k;
		sumk = k * KeanuReeves;
		cout << "Зарплата по заработаным часам = " << sumk << "$" << endl << endl;

		cout << "Morgot Robbie за июль месяц проработала " << MargotRobbie << " часов" << endl;
		cout << "Введите почасовую зарплату для Margot Robbie, далее нажмите Enter...\n";
		cin >> m;
		summ = m * MargotRobbie;
		cout << "Зарплата по заработаным часам = " << summ << "$" << endl << endl;

		cout << "Cameron Diaz за июль месяц проработала " << CameronDiaz << " часов" << endl;
		cout << "Введите почасовую зарплату для Cameron Diaz, далее нажмите Enter...\n";
		cin >> c;
		sumc = c * CameronDiaz;
		cout << "Зарплата по заработаным часам = " << sumc << "$" << endl << endl << endl;

		eve = sumc + sumk + summ + suml;
		cout << "Бюджет для всех сотрудников составляет " << eve << endl << endl << endl;

		cout << "Сотрудник MorganFreeman прогуливал работу весь месяц" << endl;

		cout << "Выберите действие, что будете делать с данным сотрудником" << endl <<
			"1.Дать премию" << endl <<
			"2.Уволить" << endl <<
			"3.Помиловать" << endl <<
			"4.Игнорировать" << endl;

		cin >> selection;

		switch (selection)
		{
		case 1:
			cout << "Morgan Freeman получит премию в размере 100$ !!! " << endl;
			break;

		case 2:
			cout << "Прощай, Morgan" << endl;
			break;

		case 3:
			cout << "На этот раз, ему все сошло с рук..." << endl;
			break;

		case 4:
			cout << "Вы хороший босс!" << endl;
			break;


		default:
			cout << "Пункт в меню выбран не верно!";
			break;
		}
}


