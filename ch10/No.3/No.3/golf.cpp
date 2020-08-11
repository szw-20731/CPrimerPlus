#include "golf.h"



golf::golf()
{
}

golf::golf(const char * fl, int hc)
{
	strcpy_s(this->fullname, fl);
	this->handicap = hc;
}


golf::~golf()
{
}

char * golf::getfl()
{
	return this->fullname;
}

int golf::gethc()
{
	return this->handicap;
}

void golf::setfl(const char * fl)
{
	strcpy_s(this->fullname, fl);
}

void golf::sethc(int hc)
{
	this->handicap = hc;
}

int setgolf(golf & f)
{
	cout << "即将修改!" << endl;
	cout << "请输入fullname与handicap" << endl;
	char fullname[40];
	int handicap;
	cin >> fullname >> handicap;
	f.setfl(fullname);
	f.sethc(handicap);
	return 0;
}

void showgolf(golf & f)
{
	cout << f.getfl() << " " << f.gethc() << endl;
}
