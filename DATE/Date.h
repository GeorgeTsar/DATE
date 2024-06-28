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

	Date& operator ++();          // ++a Префиксная форма инкремента
	Date operator ++(int);        // a++ Постфиксная форма инкремента
	Date& operator --();          // --a Префиксная форма дискремента
	Date operator --(int);		  // a-- Постфиксная форма дискремента
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

