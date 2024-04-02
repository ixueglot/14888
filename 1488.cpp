#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	std::ofstream out;
	//создаю переменные
	int result;
	int firstparam;
	int ffirstparam;
	int secondparam;
	int msecondparam;
	int smartparam;
	int ssmartparam;
	int count;
	int step;
	int CountClon;
	int printcount;
	int i = 0;
	int answer;
	bool start = true;
	int col;
	out.open("col.txt");
    //спрашиваю у пользователя сколько повторений нужно и какой будет ответ
	cout << "Сколько повторений вам надо?" << endl << ">>>";
	cin >> col;
	cout << "Какой ответ вам нужен вам нужен?" << endl << ">>>";
	//____________________
	if (col == 9931993) {
		start = false;
	}

	cin >> answer;
	//создаю цикл
	while (start)
	{
		//создаю рандомные числа
		step = rand() % 40 + 1;
		count = rand() % 40 + 1;
		CountClon = count;
		ffirstparam = rand() % 200000 + (-2000);
		firstparam = rand() % 200000 + (-2000);
		secondparam = rand() % 200000 + (-2000);
		msecondparam = rand() % 200000 + (-2000);
		smartparam = rand() % 200 + (-20);
		ssmartparam = rand() % 200 + (-20);
		//если хотите смотреть процесс подбора:
		//cout << count << "^" << step << " + " << firstparam << " + " << secondparam << " = ";
		//out << count << "^" << step << " + " << firstparam << " + " << secondparam << " = ":
		printcount = count;
		for (int i = 0; i < step - 1; i++)
		{
			count *= CountClon;
		}
		//считаю ответ
		result = ssmartparam * msecondparam - smartparam * count + secondparam + firstparam + ffirstparam;
		//если хотите смотреть процесс подбора:
		//cout << result << endl;
		//cout << result << endl;
		//Если ответ будет равен тому что указал пользователь
		if (result == (answer) && start) {
			//вывожу в  терминал
			cout << ssmartparam << " * " << msecondparam << " - " << smartparam << " * " << printcount << "^" << step << " + " << secondparam << " + " << firstparam << " + " << ffirstparam << " = " << result << endl;
			//сохраняю в файл
			out << msecondparam << " - " << smartparam << " * " << printcount << "^" << step << " + " << firstparam << " + " << secondparam << " = " << result << endl;
			i++;
			if (i == col) {
				//закрываю файл
				out.close();
				start = false;
			}
		}
	}
}
