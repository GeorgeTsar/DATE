#pragma once
#include<iostream>
using namespace std;

class Date
{
private:
	int month;
	int day;
	int year;
public:
	Date();
	Date(int a, int b, int c);

	Date& operator ++();          // ++a ���������� ����� ����������
	Date operator ++(int);        // a++ ����������� ����� ����������
	Date& operator --();          // --a ���������� ����� �����������
	Date operator --(int);		  // a-- ����������� ����� �����������
	Date operator + (int b);
	Date operator - (int b);
	Date operator += (int b);
	Date operator -= (int b);
	bool operator > (Date& b);
	bool operator < (Date& b);
	bool operator <= (Date& b);
	bool operator >= (Date& b);
	bool operator == (Date& b);
	bool operator != (Date& b);

	~Date();

	char* get_month()const;
	int get_day()const;
	int get_year()const;
	
	void set_month(int a);
	void set_day(int b);
	void set_year(int c);
	
	void print()const;

};

