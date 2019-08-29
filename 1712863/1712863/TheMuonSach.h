#pragma once
#ifndef _THE_
#define _THE_
#include"DocGia.h"
#include"Sach.h"
#include"SachNN.h"
#include<iostream>
#include<string>
#include<vector>
#include"MyDate.h"
using namespace std;
class TheMuonSach
{
private:
	MyDate NgayMuon;
	DocGia People;
	vector<Sach> Book;
	vector<SachNN> BookNN;
	bool Tra;
public:
	TheMuonSach();
	~TheMuonSach();
	TheMuonSach(const TheMuonSach &a);
	void setNgayMuon(MyDate ngay);
	void setNguoiMuon(DocGia a);
	void SetSachMuonVN(Sach a);
	void SetSachMuonVN(vector<Sach> b);

	void SetSachMuonNN(SachNN a);
	void SetSachMuonNN(vector<SachNN> b);
	void setTra(bool a);

	MyDate getNgayMuon();
	DocGia getNguoiMuon();
	vector<Sach> getSachMuonVN();
	vector<SachNN> getSachMuonNN();
	bool getTra();

	TheMuonSach&operator =(const TheMuonSach &a);
	friend istream& operator >>(istream &is, TheMuonSach &sv);
	friend ostream& operator <<(ostream &os, TheMuonSach sv);
};

#endif