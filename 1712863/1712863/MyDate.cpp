#include "pch.h"
#include "MyDate.h"


MyDate::MyDate()
{
}


MyDate::~MyDate()
{
}
void MyDate::setNgay(string a)
{
	ngay = a;
}
string MyDate::get()
{
	return ngay;
}

int MyDate::thisIsMagic( int day, int month, int year) {
	if (month < 3) {
		year--;
		month += 12;
	}
	return 365 * year + year / 4 - year / 100 + year / 400 + (153 * month - 457) / 5 + day - 306;
}

int* MyDate::getNgay()
{
	int *b = new int[3];
	string a = ngay;
	b[0] = a.find("/", 0);
	b[1]= a.find("/", b[0]+1);
	return b;
}
int& MyDate::operator - (MyDate a)
{
	int tong = 0;
	string ngay2, thang2, nam2;
	string ngay1, thang1, nam1;
	for (int i = 0;i <this->getNgay()[0];i++)
	{
		ngay2.push_back(ngay[i]);
	}
	for (int i=getNgay()[0]+1;i < this->getNgay()[1];i++)
	{
		thang2.push_back(ngay[i]);
	}
	for (int i = getNgay()[1] + 1;i < ngay.size();i++)
	{
		nam2.push_back(ngay[i]);
	}

	for (int i = 0;i < a.getNgay()[0];i++)
	{
		ngay1.push_back(a.get()[i]);
	}
	for (int i = a.getNgay()[0] + 1;i < a.getNgay()[1];i++)
	{
		thang1.push_back(a.get()[i]);
	}
	for (int i = a.getNgay()[1] + 1;i < ngay.size();i++)
	{
		nam1.push_back(a.get()[i]);
	}
	tong=(thisIsMagic(atoi(ngay2.c_str()), atoi(thang2.c_str()), atoi(nam2.c_str())) - thisIsMagic(atoi(ngay1.c_str()), atoi(thang1.c_str()), atoi(nam1.c_str())));
		return tong;
}
