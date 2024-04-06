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
	int long result;
	double long printresult;
	double long firstparam, ffirstparam, secondparam, msecondparam, smartparam, 
		ssmartparam, count, step, CountClon, answer;
	bool start = true;
	int col, e, i {0};
	double long eClon;
	out.open("col.txt");
	//спрашиваю у пользователя сколько повторений нужно и какой будет ответ
	cout << "Сколько повторений вам надо?" << endl << ">>>";
	cin >> col;
	cout << "Какой ответ вам нужен вам нужен?" << endl << ">>>";
	out << col << " Повторений" << endl;
	cin >> answer;
	//создаю цикл
	while (start)
	{
		cout << setprecision(10);
		//создаю рандомные числа
		step = (rand() % 10 * 1);
		count = (rand() % 10 * 1);
		e = rand() % 10 + 1;
		ffirstparam = (double)(rand()) / 200000 * (200000 - -20000) + -20000;
		firstparam = (double)(rand()) / 200000 * (200000 - -20000) + -20000;
		secondparam = (double)(rand()) / 200000 * (200000 - -20000) + -20000;
		msecondparam = (double)(rand()) / 200000 * (200000 - -20000) + -20000;
		smartparam = (double)(rand()) / 200000 * (200 - -200) + -200;
		ssmartparam = (double)(rand()) / 200000 * (200 - -200) + -200;
		CountClon = pow(count, step);
		eClon = exp(e);
		//считаю ответ
		result = eClon + ssmartparam * msecondparam - smartparam * CountClon + secondparam + firstparam + ffirstparam;
		//cout << "e" << e << " + " << ssmartparam << " * " << msecondparam << " - " << smartparam << " * " << count << "^" << step << " + " << secondparam << " + " << firstparam << " + " << ffirstparam << " = " << result << endl;
		//Если ответ будет равен тому что указал пользователь
		if (result == (answer) && start) {		
			printresult = eClon + ssmartparam * msecondparam - smartparam * CountClon + secondparam + firstparam + ffirstparam;
			//вывожу в  терминал
			cout << "e" << e << " + " << ssmartparam << " * " << msecondparam << " - " << smartparam << " * " << count << "^" << step << " + " << secondparam << " + " << firstparam << " + " << ffirstparam << " = " << printresult << endl;
			//сохраняю в файл
			out << "e" << e << " + " << ssmartparam << " * " << msecondparam << " - " << smartparam << " * " << count << "^" << step << " + " << secondparam << " + " << firstparam << " + " << ffirstparam << " = " << printresult << endl;
			i++;
			if (i == col) {
				//закрываю файл
				out.close();
				start = false;
			}
		}
		else{
		}
	}
}

