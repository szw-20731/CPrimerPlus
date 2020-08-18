#include "vector.h"
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>


int main() {
	
	srand(time(0));
	double direction;
	vector step;
	vector result(0.0, 0.0);
	double target;
	double dstep;
	unsigned long steps = 0;
	int numbers;
	std::cout << "Enter walk numbers: ";
	std::cin >> numbers;
	unsigned long *steps_list = new unsigned long[numbers];
	for (int i = 1; i <= numbers; i++) {
		std::cout << "Enter target distance: ";
		std::cin >> target;
		std::cout << "Enter step length: ";
		if (!(std::cin >> dstep))
			break;
		while (result.get_mag() < target) {
			direction = rand() % 360;
			step.reset(dstep, direction, vector::POL);
			result = result + step;
			steps++;
		}
		steps_list[i - 1] = steps;
		steps = 0;
		result.reset(0.0, 0.0);
	}
	for (int i = 0; i < numbers; i++) 
		std::cout << steps_list[i] << "  ";
	std::cout << "Bye!\n";
	std::cin.clear();
	delete steps_list;
	system("pause");
	return 0;
}