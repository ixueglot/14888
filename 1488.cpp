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
	int secondparam;
	int count;
	int step;
	int count1;
	int count2;
	out.open("1488.txt");

	while (true)
	{
		step = rand() % 9 + 1;
		count = rand() % 9 + 1;
		count1 = count;
		firstparam = rand() % 2000;
		secondparam = rand() % 2000;
		//cout << count << "^" << step << " + " << firstparam << " + " << secondparam << " = ";
		count2 = count;
		for (int i = 0; i < step - 1; i++)
		{
			count *= count1;
		}

		result = secondparam + firstparam + count;
		//cout << result << endl;
		if (result == (1488)) {

			cout << count2 << "^" << step << " + " << firstparam << " + " << secondparam << " = " << result << endl;


			out << count2 << "^" << step << " + " << firstparam << " + " << secondparam << " = " << result << endl;
		}
	}
}




