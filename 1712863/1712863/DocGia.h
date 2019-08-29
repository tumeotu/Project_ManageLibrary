#pragma once
#ifndef _DOCGIA_
#define _DOCGIA_
#include<iostream>
#include<string>
using namespace std;

class DocGia
{
private:
	string Ten, Ngaysinh, DiaChi, SDT, Email, CMND, MaThanhVien;
	int Phat;
public:

	DocGia();
	~DocGia();
	void setTen(string ten);
	void setNS(string ngaysinh);
	void setDC(string diachi);
	void setSDT(string sdt);
	void setEmail(string email);
	void setCMND(string cmnd);
	void setPhat(int phat);
	void setMaThanhVien(string ma);
	void suaDocGia(int x);

	string getTen();
	string getNS();
	string getDC();
	string getSDT();
	string getEmail();
	string getCMND();
	int getPhat();
	string getMaThanhVien();
	bool Find(string a);
	friend istream& operator >>(istream &is, DocGia &sv);
	friend ostream& operator <<(ostream &os,const  DocGia &sv);
	
};


#endif