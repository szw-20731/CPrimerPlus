#pragma once
#include <iostream>
using namespace std;
class dma
{
private:
	char *label;
	int rating;
public:
	dma();
	dma(char *l, int r);
	dma(const dma &d);
	virtual ~dma();
	dma &operator=(const dma &d);
	virtual void show() const = 0 ;
protected:
	char *getLabel() const { return label; };
	int getRating() const { return rating; };
};


class basedma : public dma
{
public:
	basedma();
	basedma(char *l, int r);
	virtual void show() const;
};


class lackdma : public dma
{
private:
	enum {COL_LEN  = 40};
	char color[COL_LEN];
public:
	lackdma();
	lackdma(char *l, int r, char *c);
	virtual void show() const;
};

class hasdma : public dma
{
private:
	char *style;
public:
	hasdma();
	hasdma(char *l, int r, char *s);
	hasdma(const hasdma &d);
	virtual ~hasdma();
	hasdma &operator=(const hasdma &d);
	virtual void show() const;
};

