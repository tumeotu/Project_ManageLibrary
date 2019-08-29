#pragma once
#ifndef _SACHNN_
#define _SACHNN_
#include<iostream>
#include<string>
#include<vector>
#include"Sach.h"
using namespace std;
class SachNN:public Sach
{
private:
	string ISBN;
public:

	SachNN();
	SachNN(const SachNN& a);
	~SachNN();

	void setISBN(string ibsn);
	void suaSachNN(int x);
	string getISBN();

	Sach&operator = (const SachNN&a);
	bool Find(string a);
	friend istream& operator >>(istream &is, SachNN &sv);
	friend ostream& operator <<(ostream &os, const  SachNN &sv);
};

#endif