#pragma once
#include <iostream>
using std::ostream;
using std::istream;
class String
{
private:
	char *str;
	int len;
	static int num_strings;
	static const int CONLIM = 80;
public:
	String();
	String(const char *s);
	String(const String &s);
	~String();
	int length() const { return len;}
	void Stringlow();
	void Stringupper();
	int nums(char c);


	String &operator=(const String &s);
	String &operator=(const char *s);
	char &operator[](int i);
	const char &operator[] (int i) const;


	friend bool operator<(const String &st1, const String &st2);
	friend bool operator>(const String &st1, const String &st2);
	friend bool operator==(const String &st1, const String &st2);
	friend String operator+(const String &st1, const String &st2);
	friend String operator+(const char *st1, const String &st2);
	friend String operator+(const String &st1, const char *st2);

	friend ostream &operator<<(ostream &os, const String &st);
	friend istream &operator>>(istream &is, String &st);

	static int HowMany();
};

