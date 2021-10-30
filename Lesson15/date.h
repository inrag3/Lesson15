#pragma once
#ifndef DATE_H
#define DATE_H

#include <cassert>

//‘унки€, провер€юща€ год на високосность 
bool IsLeapYear(int y);
//ѕровер€ющую, какой из двух дней ближе к Ќовому году
int LaterInYear(int d, int m, int d1, int m1);
//ќпредел€ющую количество дней в данном году
int DaysInYear(int y);
//ќпредел€юет суммарное количество дней во всех годах наход€щихс€ между заданными годами включительно
int DaysInYearRange(int y, int y1);

/*DATE_h*/
#endif
