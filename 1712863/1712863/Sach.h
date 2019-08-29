#pragma once
#ifndef _SACH_
#define _SACH_
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Sach
{
protected:
	string TenSach, NXB, MaSach, MoTa;
	vector<string> TacGia;
	double GiaSach;
public:
	Sach();
	Sach(const Sach&a);
	~Sach();
	void setTen(string ten);
	void setNXB(string nxb);
	void setMa(string ma);
	void setMoTa(string mota);
	void setGia(double gia);
	void setTacGia(vector<string> tacgia);
	void suaSach(int x);

	string getTen();
	string getNXB();
	string getMa();
	string getMoTa();
	double getGia();
	vector<string> getTacGia();
	bool Find(string a);
	Sach &operator = (const Sach& a);
	friend istream& operator >>(istream &is, Sach &sv);
	friend ostream& operator <<(ostream &os, const  Sach &sv);
};

#endif