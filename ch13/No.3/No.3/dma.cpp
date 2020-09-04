#include "dma.h"



dma::dma()
{
}

dma::dma(char * l, int r)
{
	int len = strlen(l);
	label = new char[len + 1];
	strcpy_s(label, len + 1, l);
	rating = r;
}

dma::dma(const dma & d)
{
	rating = d.rating;
	int len = strlen(d.label);
	label = new char[len + 1];
	strcpy_s(label, len + 1, d.label);
}


dma::~dma()
{
	delete[] label;
}

dma & dma::operator=(const dma & d)
{
	if (this == &d)
		return *this;
	rating = d.rating;
	int len = strlen(d.label);
	label = new char[len + 1];
	strcpy_s(label, len + 1, d.label);
	return *this;
}

basedma::basedma()
{
}

basedma::basedma(char * l, int r):dma(l, r)
{
}

void basedma::show() const
{
	cout << "This a basedma object:" << endl;
	cout << "Label: " << getLabel() << endl;
	cout << "Rating: " << getRating() << endl;
}

lackdma::lackdma()
{
}

lackdma::lackdma(char * l, int r, char * c) :dma(l, r)
{
	strcpy_s(color, c);
}

void lackdma::show() const
{
	cout << "This a lackdma object:" << endl;
	cout << "Label: " << getLabel() << endl;
	cout << "Rating: " << getRating() << endl;
	cout << "Color: " << color << endl;
}

hasdma::hasdma()
{
}

hasdma::hasdma(char * l, int r, char * s): dma(l, r)
{
	int len = strlen(s);
	style = new char[len + 1];
	strcpy_s(style, len + 1, s);
}

hasdma::hasdma(const hasdma & d):dma(d)
{
	int len = strlen(d.style);
	style = new char[len + 1];
	strcpy_s(style, len + 1, d.style);
}

hasdma::~hasdma()
{
	delete[] style;
}

hasdma & hasdma::operator=(const hasdma & d)
{
	if (this == &d)
		return *this;
	dma::operator=(d);
	int len = strlen(d.style);
	style = new char[len + 1];
	strcpy_s(style, len + 1, d.style);
	return *this;
}

void hasdma::show() const
{
	cout << "This a hasdma object:" << endl;
	cout << "Label: " << getLabel() << endl;
	cout << "Rating: " << getRating() << endl;
	cout << "Style: " << style << endl;
}
