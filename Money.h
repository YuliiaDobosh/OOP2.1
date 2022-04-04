#pragma once
#include <iostream>
#include <string>
using namespace std;

class Money
{
		unsigned int first, second;
	public:
		Money(); // ����������� �� ����������
		Money(unsigned int, unsigned int); // ����������� �����������
		Money(const Money&); //���������
		~Money();

		void SetFirst(unsigned int);
		void SetSecond(unsigned int);
		double GetFirst() const;
		double GetSecond() const;
		static double GetSumma(Money f, Money s) ;

		Money& operator = (const Money&); // ���������
		operator string() const; //�������

		friend ostream& operator << (ostream&, const Money&); //����
		friend istream& operator >> (istream&, Money&); //���
		Money& operator ++(); // ���������� ���������
		Money& operator --(); // ���������� ���������
		Money operator ++(int); // ����������� ���������
		Money operator --(int); // ����������� ���������


	};

