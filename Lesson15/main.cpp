#include "Date.h"

int main()
{
	assert(!IsLeapYear(2700));
	assert(IsLeapYear(2012));

	assert(LaterInYear(31, 12, 11, 10) == 31);
	assert(LaterInYear(4, 4, 5, 5) == 5);

}
