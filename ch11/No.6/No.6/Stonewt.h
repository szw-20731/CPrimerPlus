#pragma once
class Stonewt
{
private:
	enum{Lbs_per_stn = 14};
	enum Mode { Stone, IntPds, DoublePds };
	int stone;
	double pds_left;
	double pounds;
	Mode mode;
public:
	Stonewt();
	Stonewt(double lbs, Mode mode = DoublePds);
	Stonewt(int stn, double lbs, Mode mode  = DoublePds);
	Stonewt(const Stonewt & s);
	void Stone_mode();
	void IntPds_mode();
	void DoublePds_mode();
	void show_lbs() const;
	void show_stn() const;
	~Stonewt();

	friend std::ostream &operator<<(std::ostream &os, const Stonewt &a);
	friend bool operator> (const Stonewt &a, const Stonewt &b);
	friend bool operator>= (const Stonewt &a, const Stonewt &b);
	friend bool operator< (const Stonewt &a, const Stonewt &b);
	friend bool operator<= (const Stonewt &a, const Stonewt &b);
	friend bool operator== (const Stonewt &a, const Stonewt &b);
	friend bool operator!= (const Stonewt &a, const Stonewt &b);

};

