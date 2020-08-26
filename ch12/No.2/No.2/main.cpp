#include <iostream>
using namespace std;
#include "String.h"
//const int ArSize = 10;
//const int MaxLen = 81;

int main()
{
	/*using std::cout;
	using std::cin;
	using std::endl;

	String name;
	cout << "What is your name ?" << endl;
	cin >> name;
	cout << name << ", please enter uo to" << ArSize << " short sayings: " << endl;
	String sayings[ArSize];
	char temp[MaxLen];
	int i;
	for (i = 0; i < ArSize; i++) {
		cout << i + 1 << ": ";
		cin.get(temp, MaxLen);
		while (cin && cin.get() != '\n')
			continue;
		if (!cin || temp[0] == '\0')
			break;
		else
			sayings[i] = temp;
	}
	int total = i;

	if (total > 0){
		cout << "Here are your sayings:" << endl;
		int shortest = 0;
		int first = 0;
		for (i = 0; i < total; i++) {
			cout << sayings[i][0] << ": " << sayings[i] << endl;
			if (sayings[i].length() < sayings[shortest].length())
				shortest = i;
			if (sayings[i] < sayings[first])
				first = i;
		}
		cout << "Shortest saying: " << sayings[shortest] << endl;
		cout << "First alphabetically: " << sayings[first] << endl;
		cout << "This program used " << String::HowMany() << " String objects.";
	}
	else
		cout << "No input! " << endl;*/


	String s1(" and I an a C++ student.");
	String s2 = "Please enter your name: ";
	String s3;
	cout << s2;
	cin >> s3;
	s2 = "My name is " + s3;
	cout << s2 << ".\n";
	s2 = s2 + s1;
	s2.Stringupper();
	cout << "The string\n" << s2 << "\ncontains " << s2.nums('A') << " 'A' characters in it.\n";
	system("pause");
	return 0;
}