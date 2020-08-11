#pragma once
#include <iostream>
#include <string>

using namespace std;
class golf
{
public:
	golf();
	golf(const char * fl, int hc);
	~golf();
	char* getfl();
	int gethc();
	void setfl(const char * fl);
	void sethc(int hc);
private:
	char fullname[40];
	int handicap;
};
int setgolf(golf &f);
void showgolf(golf &f);

