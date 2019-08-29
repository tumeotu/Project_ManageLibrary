#pragma once
#pragma once
#ifndef _THUVIEN_
#define _THUVIEN_
#include"DocGia.h"
#include"Sach.h"
#include"SachNN.h"
#include"TheMuonSach.h"
#include"SachNN.h"
#include<iostream>
#include<string>
#include<ostream>
#include<fstream>
#include<vector>
using namespace std;
class ThuVien
{
private:
	vector<DocGia> docGia;
	vector<Sach> sachVN;
	vector<SachNN> sachNN;
	vector<TheMuonSach>The;
public:
	ThuVien();
	~ThuVien();
	ThuVien(const ThuVien &a);
	void themSach();
	void xoaSach();
	void suaSach();
	void timKiemSach();

	void themDocGia();
	void xoaDocGia();
	void suaDocGia();
	void timKiemDocGia();

	void setThe();
	void removeThe();
	void Phat();

	void luu();
	void luuSachVN();
	void luuSachNN();
	void luuDocGia();
	void luuTheMuonSach();
	void doc();
	void docSachVN();
	void docSachNN();
	void docDocGia();
	void docTheMuonSach();
	void meNu();

	ThuVien&operator =(const ThuVien&a);
};

#endif