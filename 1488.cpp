#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	std::ofstream out;
	//создаю переменные
	string resultST;
	string input;
	int long result;
	double long printresult;
	double long firstparam[10], secondparam[10], smartparam[10],
		count, step, CountClon, answer;
	int col, e, i{ 0 };
	double long eClon;
	out.open("col.txt");
	//спрашиваю у пользователя сколько повторений нужно и какой будет ответ
	cout << "Start запустит код, set зайдет в настройки" << endl << ">>>";
	cin >> input;
	if (input == "set") {

	}
	cout << "Сколько повторений вам надо?" << endl << ">>>";
	cin >> col;
	cout << "Какой ответ вам нужен вам нужен?" << endl << ">>>";
	out << col << " Повторений" << endl;
	cin >> answer;
	//создаю цикл
	while (!(i == col))
	{
		cout << setprecision(10);
		//создаю рандомные числа
		step = (rand() % 10 * 1);
		count = (rand() % 10 * 1);
		e = rand() % 10 + 1;
		firstparam[0] = (double)(rand()) / 200000 * (200000 - -20000) + -20000;
		firstparam[1] = (double)(rand()) / 200000 * (200000 - -20000) + -20000;
		secondparam[0] = (double)(rand()) / 200000 * (200000 - -20000) + -20000;
		secondparam[1] = (double)(rand()) / 200000 * (200000 - -20000) + -20000;
		smartparam[0] = (double)(rand()) / 200000 * (200 - -200) + -200;
		smartparam[1] = (double)(rand()) / 200000 * (200 - -200) + -200;
		CountClon = pow(count, step);
		eClon = exp(e);
		//считаю ответ
		result = eClon + smartparam[0] * secondparam[0] - smartparam[1] * CountClon + secondparam[1] + firstparam[0] + firstparam[1];
		//cout << "e" << e << " + " << ssmartparam << " * " << msecondparam << " - " << smartparam << " * " << count << "^" << step << " + " << secondparam << " + " << firstparam << " + " << ffirstparam << " = " << result << endl;
		//Если ответ будет равен тому что указал пользователь
		if (result == (answer)) {
			printresult = eClon + smartparam[0] * secondparam[0] - smartparam[1] * CountClon + secondparam[1] + firstparam[0] + firstparam[1];
			//вывожу в  терминал
			cout << "e" << e << " + " << smartparam[0] << " * " << secondparam[0] << " - " << smartparam[1] << " * " <<
				count << "^" << step << " + " << secondparam[1] << " + " << firstparam[0] << " + " << firstparam[1] << " = " <<
				printresult << endl;
			//сохраняю в файл
			out << "e" << e << " + " << smartparam[0] << " * " << secondparam[0] << " - " << smartparam[1] << " * " <<
				count << "^" << step << " + " << secondparam[1] << " + " << firstparam[0] << " + " << firstparam[1] << " = " <<
				printresult << endl;
			i++;
			if (i == col) {
				//закрываю файл
				out.close();
			}
		}
		else {
		}
	}
}

