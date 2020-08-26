#include "String.h"

int String::num_strings = 0;
int String::HowMany()
{
	return num_strings;
}

void String::Stringlow()
{
	for (int i = 0; i < len; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = tolower(str[i]);
	}
}

void String::Stringupper()
{
	for (int i = 0; i < len; i++) {
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = toupper(str[i]);
	}
}

int String::nums(char c)
{
	int num = 0;
	for (int i = 0; i < len; i++)
		if (c == str[i])
			num++;
	return num;
}

String::String()
{
	len = 0;
	str = new char[1];
	str[0] = '\0';
	num_strings++;
}

String::String(const char * s)
{
	len = std::strlen(s);
	str = new char[len + 1];
	strcpy_s(str, len + 1, s);
	num_strings++;
}

String::String(const String &s)
{
	len = std::strlen(s.str);
	str = new char[len + 1];
	strcpy_s(str, len + 1, s.str);
	num_strings++;
}


String::~String()
{
	num_strings--;
	delete[] str;
}

String & String::operator=(const String &s)
{
	if (this == &s)
		return *this;
	delete[] str;
	len = std::strlen(s.str);
	str = new char[len + 1];
	strcpy_s(str, len + 1, s.str);
	return *this;
}

String & String::operator=(const char * s)
{
	delete [] str;
	len = std::strlen(s);
	str = new char[len + 1];
	strcpy_s(str, len + 1, s);
	return *this;
}

char & String::operator[](int i)
{
	return str[i];
}

const char & String::operator[](int i) const
{
	return str[i];
}


bool operator<(const String &st1, const String &st2)
{
	return std::strcmp(st1.str, st2.str) < 0;
}
bool operator>(const String &st1, const String &st2)
{
	return std::strcmp(st1.str, st2.str) > 0;
}
bool operator==(const String &st1, const String &st2)
{
	return std::strcmp(st1.str, st2.str) == 0;
}
ostream &operator<<(ostream &os, const String &st)
{
	os << st.str;
	return os;
}
istream &operator>>(istream &is, String &st)
{
	char temp[String::CONLIM];
	is.get(temp, String::CONLIM);
	if (is)
		st = temp;
	while (is && is.get() != '\n')
		continue;
	return is;
}

String operator+(const String &st1, const String &st2)
{
	int len1 = std::strlen(st1.str);
	int len2 = std::strlen(st2.str);
	char *t = new char[len1 + len2 + 1];
	strcpy_s(t, len1 + 1, st1.str);
	for (int i = len1; i < len1 + len2 + 1; i++) {
		if (i == len1 + len2)
			t[i] = '\0';
		else
			t[i] = st2.str[i - len1];
	}
	String s(t);
	delete[] t;
	return s;
}

String operator+(const char *st1, const String &st2)
{
	int len1 = std::strlen(st1);
	int len2 = std::strlen(st2.str);
	char *t = new char[len1 + len2 + 1];
	strcpy_s(t, len1 + 1, st1);
	for (int i = len1; i < len1 + len2 + 1; i++) {
		if (i == len1 + len2)
			t[i] = '\0';
		else
			t[i] = st2.str[i - len1];
	}
	String s(t);
	delete[] t;
	return s;
}
String operator+(const String &st1, const char *st2)
{
	int len1 = std::strlen(st1.str);
	int len2 = std::strlen(st2);
	char *t = new char[len1 + len2 + 1];
	strcpy_s(t, len1 + 1, st1.str);
	for (int i = len1; i < len1 + len2 + 1; i++) {
		if (i == len1 + len2)
			t[i] = '\0';
		else
			t[i] = st2[i - len1];
	}
	String s(t);
	delete[] t;
	return s;
}