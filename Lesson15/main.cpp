#include "Date.h"

int main()
{
	assert(!IsLeapYear(2700));
	assert(IsLeapYear(2012));

	assert(SecondsInMinute(2) == 120);
	assert(SecondsInMinute(1) == 60);
}
