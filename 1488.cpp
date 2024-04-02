#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	std::ofstream out;
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
	cout << "Сколько повторений вам надо?" << endl << ">>>";
	cin >> col;
	cout << "Какой ответ вам нужен вам нужен?" << endl << ">>>";
	if (col == 9931993) {
		start = false;
	}

	cin >> answer;
	while (start)
	{
		step = rand() % 9 + 1;
		count = rand() % 9 + 1;
		CountClon = count;
		ffirstparam = rand() % 200000 + (-2000);
		firstparam = rand() % 200000 + (-2000);
		secondparam = rand() % 200000 + (-2000);
		msecondparam = rand() % 200000 + (-2000);
		smartparam = rand() % 200 + (-20);
		ssmartparam = rand() % 200 + (-20);
		//cout << count << "^" << step << " + " << firstparam << " + " << secondparam << " = ";
		//out << count << "^" << step << " + " << firstparam << " + " << secondparam << " = ":
		printcount = count;
		for (int i = 0; i < step - 1; i++)
		{
			count *= CountClon;
		}

		result = ssmartparam * msecondparam - smartparam * count + secondparam + firstparam + ffirstparam;
		//cout << result << endl;
		//cout << result << endl;
		if (result == (answer) && start) {

			cout << ssmartparam << " * " << msecondparam << " - " << smartparam << " * " << printcount << "^" << step << " + " << secondparam << " + " << firstparam << " + " << ffirstparam << " = " << result << endl;

			out << msecondparam << " - " << smartparam << " * " << printcount << "^" << step << " + " << firstparam << " + " << secondparam << " = " << result << endl;
			i++;
			if (i == col) {
				out.close();
				start = false;
			}
		}
	}
}
