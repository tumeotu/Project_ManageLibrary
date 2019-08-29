#pragma once
#ifndef _MYDATE_
#define _MYDATE_
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
class MyDate
{
private:
	string ngay;
public:
	MyDate();
	~MyDate();
	void setNgay(string a);
	string get();
	int thisIsMagic(int day, int month, int year);
	int* getNgay();
	int tinhNgay(MyDate a);
	int&operator - (MyDate a);
};

#endif