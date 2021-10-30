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