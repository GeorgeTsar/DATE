#include "Date.h"

Date::Date()
{
	//month = nullptr;
	month = 0;
	day = 0;
	year = 0;
}

Date::Date(int a, int b, int c)
{
	/*this->month = new char[strlen(a) + 1];
	strcpy_s(this->month, strlen(a) + 1, a);*/
	this->month = a;
	this->day = b;
	this->year = c;
}

Date& Date::operator++()
{
	day = day + 1;
	if (day <= 30)
	{
		return *this;
	}
	else if (day > 30 && month == 4 || 6 || 9 || 11)
	{
		//month = month + 1;
		day = 1;
		return *this;
	}
	else if (day > 31 && month == 1 || 3 || 5 || 7 || 8 || 10)
	{
		//month = month + 1;
		day = 1;
		return *this;
	}
	else if (day > 31 && month == 12)
	{
		//year = year + 1;
		//month = 1;
		day = 1;
		return *this;
	}
	// TODO: insert return statement here
}

Date Date::operator++(int k)
{
	Date temp;
	temp.day = day + k;
	if (temp.day <= 30)
	{
		return temp;
	}
	else if (temp.day > 30 && temp.month == 4 || 6 || 9 || 11)
	{
		//temp.month = month + 1;
		temp.day = 1;
		return temp;
	}
	else if (temp.day > 31 && temp.month == 1 || 3 || 5 || 7 || 8 || 10)
	{
		//temp.month = month + 1;
		temp.day = 1;
		return temp;
	}
	else if (temp.day > 31 && temp.month == 12)
	{
		//temp.year = year + 1;
		//temp.month = 1;
		temp.day = 1;
		return temp;
	}
}

Date& Date::operator--()
{
	day = day - 1;
	if (day >= 1)
	{
		return *this;
	}
	else if (day < 1 && month == 4 || 6 || 9 || 11)
	{
		//month = month - 1;
		day = 31;
		return *this;
	}
	else if (day < 1 && month == 3 || 5 || 7 || 8 || 10 || 12)
	{
		//month = month - 1;
		day = 30;
		return *this;
	}
	else if (day < 1 && month == 1)
	{
		//year = year - 1;
		//month = 12;
		day = 31;
		return *this;
	}
	// TODO: insert return statement here
}

Date Date::operator--(int k)
{
	Date temp;
	temp.day = day - k;
	if (temp.day >= 1)
	{
		return temp;
	}
	else if (temp.day < 1 && temp.month == 4 || 6 || 9 || 11)
	{
		//temp.month = month - 1;
		temp.day = 31;
		return temp;
	}
	else if (temp.day < 1 && temp.month == 3 || 5 || 7 || 8 || 10 || 12)
	{
		//temp.month = month - 1;
		temp.day = 30;
		return temp;
	}
	else if (temp.day < 1 && temp.month == 1)
	{
		//temp.year = year - 1;
		//temp.month = 12;
		temp.day = 31;
		return temp;
	}
}

Date Date::operator+(int b)
{
	Date temp;
	temp.day = day + b;
	if (temp.day <= 30)
	{
		return temp;
	}
	else if (temp.day > 30 && temp.month == 4 || 6 || 9 || 11)
	{
		temp.month++;
		temp.day = day - 30;
		return temp;
	}
	else if (temp.day > 31 && temp.month == 1 || 3 || 5 || 7 || 8 || 10)
	{
		temp.month++;
		temp.day = day - 31;
		return temp;
	}
	else if (temp.day > 31 && temp.month == 12)
	{
		temp.year++;
		temp.month = 1;
		temp.day = day - 31;
		return temp;
	}
}

Date Date::operator-(int b)
{
	Date temp;
	temp.day = day - b;
	if (temp.day >= 1)
	{
		return temp;
	}
	else if (temp.day < 1 && temp.month == 4 || 6 || 9 || 11)
	{
		temp.month--;
		temp.day = 31 - day;
		return temp;
	}
	else if (temp.day < 1 && temp.month == 3 || 5 || 7 || 8 || 10 || 12)
	{
		temp.month--;
		temp.day = 30 - day;
		return temp;
	}
	else if (temp.day < 1 && temp.month == 1)
	{
		temp.year--;
		temp.month = 12;
		temp.day = 31 - day;
		return temp;
	}
}

Date Date::operator+=(int b)
{
	return Date();
}

Date Date::operator-=(int b)
{
	return Date();
}

bool Date::operator>(Date& b)
{
	return false;
}

bool Date::operator<(Date& b)
{
	return false;
}

bool Date::operator<=(Date& b)
{
	return false;
}

bool Date::operator>=(Date& b)
{
	return false;
}

bool Date::operator==(Date& b)
{
	return false;
}

bool Date::operator!=(Date& b)
{
	return false;
}

Date::~Date()
{
	//delete[] month;
	month = 0;
	day = 0;
	year = 0;
}

int Date::get_day() const
{
	return 0;
}

char* Date::get_month() const
{
	return nullptr;
}

int Date::get_year() const
{
	return 0;
}

void Date::set_day(int a)
{
}

void Date::set_month(int b)
{
}

void Date::set_year(int c)
{
}

void Date::print() const
{
	cout << "Day: " << day << "\tMonth: " << month << "\tYear: " << year << endl;
}
