#include "vector.h"
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;
int main() {
	
	srand(time(0));
	double direction;
	vector step;
	vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	ofstream fout;
	cout << "Enter target distance: ";
	while (cin >> target) {
		cout << "Enter step length: ";
		if (!(cin >> dstep))
			break;
		fout.open("the walk.txt");
		fout << "Target Distance: " << target << ", " << "Step Length: " << dstep << endl;
		fout << steps << ": " << result << endl;
		while (result.get_mag() < target) {
			direction = rand() % 360;
			step.reset(dstep, direction, vector::POL);
			result = result + step;
			steps++;
			fout << steps << ": " << result << endl;
		}
		cout << "After " << steps << " steps, the subject has the folloing location:\n";
		fout << "After " << steps << " steps, the subject has the folloing location:\n";
		cout << result << endl;
		fout << result << endl;
		result.pol_mode();
		cout << "or\n" << result << endl;
		fout << "or\n" << result << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance: ";
	}
	cout << "Bye!\n";
	fout.close();
	cin.clear();
	system("pause");
	return 0;
}