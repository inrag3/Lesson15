#include "Date.h"


bool IsLeapYear(int y)
{
	return (y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0);
}

int LaterInYear(int d, int m, int d1, int m1)
{
	if (m < m1)
		return d1;
	if (m > m1)
		return d;
	if (d < d1)
		return d1;
	else return d;
}


int DaysInYear(int y)
{
	return IsLeapYear(y) ? 366 : 365;
}

int DaysInYearRange(int y, int y1)
{
	int sum{ 0 };
	for (int i = y; i <= y1; i++)
		sum += DaysInYear(i);
	return sum;
}

int SeconsInHours(int h)
{
	return 3600 * h;
}