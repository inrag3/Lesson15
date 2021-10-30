#pragma once
#ifndef DATE_H
#define DATE_H

#include <cassert>

//������, ����������� ��� �� ������������ 
bool IsLeapYear(int y);
//�����������, ����� �� ���� ���� ����� � ������ ����
int LaterInYear(int d, int m, int d1, int m1);
//������������ ���������� ���� � ������ ����
int DaysInYear(int y);
//����������� ��������� ���������� ���� �� ���� ����� ����������� ����� ��������� ������ ������������
int DaysInYearRange(int y, int y1);

/*DATE_h*/
#endif
