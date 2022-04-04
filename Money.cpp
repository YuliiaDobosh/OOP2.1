#include "Money.h"
#include <sstream>
Money::Money()
{
	first = 0;
	second = 0;
}
Money::Money(unsigned int f = 0, unsigned int s = 0)
{
	if (f == 1 || f == 2 || f == 5 || f == 10 || f == 20 || f == 50 || f == 100 || f == 200 || f == 500)
	{
		first = f;
	}
	else
	{
		first = 0;
	}
	second = s;
}
Money::Money(const Money& m)
{
	first = m.first;
	second = m.second;
}
Money::~Money()
{ }
void Money::SetFirst(unsigned int f)
{
	first = f;
}
void Money::SetSecond(unsigned int s)
{
	second = s;
}
double Money::GetFirst() const
{
	return first;
}
double Money::GetSecond() const
{
	return second;
}
double Money::GetSumma(Money f , Money s)
{
	return f.first * f.second + s.first *s.second;
}
Money& Money::operator = (const Money& m)
{
	first = m.first;
	second = m.second;
	return *this;
}
Money::operator string () const
{
	stringstream ss;
	ss << " first = " << first << endl;
	ss << " second = " << second << endl;
	return ss.str();
}
ostream& operator << (ostream& out, const Money& r)
{
	out << string(r);
	return out;
}
istream& operator >> (istream& in, Money& m)
{
	cout << " first = "; in >> m.first;
	cout << " second = "; in >> m.second;
	cout << endl;
	return in;
}
Money& Money::operator ++()
{
	first++;
	return *this;
}
Money& Money::operator --()
{
	first--;
	return *this;
}
Money Money::operator ++(int)
{
	Money t(*this);
	second++;
	return t;
}
Money Money::operator --(int)
{
	Money t(*this);
	second--;
	return t;
}

