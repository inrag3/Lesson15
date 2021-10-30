#pragma once
#ifndef DATE_H
#define DATE_H

#include <cassert>

//Функия, проверяющая год на високосность 
bool IsLeapYear(int y);
//Проверяющую, какой из двух дней ближе к Новому году
int LaterInYear(int d, int m, int d1, int m1);

/*DATE_h*/
#endif
