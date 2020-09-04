#include <iostream>
using namespace std;
#include <string>
#include "dma.h"

int main()
{
	dma *list[4];
	char label[30];
	char color[30];
	char style[30];
	int rating;
	int type;

	for (int i = 0; i < 4; i++) {
		cout << "Enter label: ";
		cin >> label;
		cout << "Enter rating: ";
		cin >> rating;
		cout << "Enter type of dma, 1 to based dma, 2 to lackdma, 3 to hasdma: ";
		cin >> type;
		if (type == 1) {
			list[i] = new basedma(label, rating);
		}
		else if (type == 2) {
			cout << "Enter color: ";
			cin >> color;
			list[i] = new lackdma(label, rating, color);
		}
		else if (type == 3) {
			cout << "Enter style: ";
			cin >> style;
			list[i] = new hasdma(label, rating, style);
		}
	}

	for (int i = 0; i < 4; i++) {
		list[i]->show();
	}
	for (int i = 0; i < 4; i++) {
		delete list[i];
	}
	system("pause");
	return 0;
}