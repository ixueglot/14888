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
	long int firstparam, ffirstparam, secondparam, msecondparam, smartparam, 
		ssmartparam, count, step, CountClon;
	int i = 0;
	double long answer;
	bool start = true;
	int col;
	int e;
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
		step = rand() % 10 + 1;
		count = rand() % 10 + 1;
		e = rand() % 100 + 1;
		ffirstparam = rand() % 200000 + (-2000.00);
		firstparam = rand() % 200000 + (-2000.00);
		secondparam = rand() % 200000 + (-2000.00);
		msecondparam = rand() % 200000 + (-2000.00);
		smartparam = rand() % 200 + (-20.00);
		ssmartparam = rand() % 200 + (-20.00);
		CountClon = pow(count, step);
		eClon = exp(e);
		//считаю ответ
		result = eClon + ssmartparam * msecondparam - smartparam * CountClon + secondparam + firstparam + ffirstparam;
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
		else {

		}
	}
}

