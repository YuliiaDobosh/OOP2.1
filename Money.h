#pragma once
#include <iostream>
#include <string>
using namespace std;

class Money
{
		unsigned int first, second;
	public:
		Money(); // конструктор за умовчанням
		Money(unsigned int, unsigned int); // конструктор ініціалізації
		Money(const Money&); //копіювання
		~Money();

		void SetFirst(unsigned int);
		void SetSecond(unsigned int);
		double GetFirst() const;
		double GetSecond() const;
		static double GetSumma(Money f, Money s) ;

		Money& operator = (const Money&); // присвоєння
		operator string() const; //літерний

		friend ostream& operator << (ostream&, const Money&); //вивід
		friend istream& operator >> (istream&, Money&); //ввід
		Money& operator ++(); // префіксний інкремент
		Money& operator --(); // префіксний декремент
		Money operator ++(int); // постфіксний інкремент
		Money operator --(int); // постфіксний декремент


	};

