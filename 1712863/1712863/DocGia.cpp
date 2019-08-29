#include "pch.h"
#include "DocGia.h"


DocGia::DocGia()
{
	Phat = 0;
}

DocGia::~DocGia()
{
}

void DocGia::setTen(string ten)
{
	Ten = ten;
}
void DocGia::setNS(string ngaysinh)
{
	Ngaysinh=ngaysinh;
}
void DocGia::setDC(string diachi)
{
	DiaChi = diachi;
}
void DocGia::setSDT(string sdt)
{
	SDT = sdt;
}
void DocGia::setEmail(string email)
{
	Email = email;
}
void DocGia::setCMND(string cmnd)
{
	CMND = cmnd;
}
void DocGia::setPhat(int phat)
{
	Phat = phat;
}
void DocGia::setMaThanhVien(string ma)
{
	MaThanhVien = ma;
}
void DocGia::suaDocGia(int x)
{
	switch (x)
	{
	case 1:
	{
		fflush(stdin);
		cout << "Nhap ten: ";
		fflush(stdin);
		getline(cin, Ten);
	}
	case 2:
	{
		cout << "Nhap ma thanh vien: ";
		fflush(stdin);
		getline(cin, MaThanhVien);
	}
	case 3:
	{
		cout << "Nhap ngay sinh: ";
		fflush(stdin);
		getline(cin, Ngaysinh);
	}
	case 4:
	{
		cout << "Nhap CMND: ";
		fflush(stdin);
		getline(cin, CMND);
	}
	case 5:
	{
		cout << "Nhap SDT: ";
		fflush(stdin);
		getline(cin, SDT);
	}
	case 6:
	{
		cout << "Nhap dia chi: ";
		fflush(stdin);
		getline(cin, DiaChi);
	}
	case 7:
	{
		cout << "Nhap email: ";
		fflush(stdin);
		getline(cin, Email);
	}
	default:
		break;
	}
}

string DocGia::getTen()
{
	return Ten;
}
string DocGia::getNS()
{
	return Ngaysinh;
}
string DocGia::getDC()
{
	return DiaChi;
}
string DocGia::getSDT()
{
	return SDT;
}
string DocGia::getEmail()
{
	return Email;
}
string DocGia::getCMND()
{
	return CMND;
}
int DocGia::getPhat()
{
	return Phat;
}
string DocGia::getMaThanhVien()
{
	return MaThanhVien;
}
bool DocGia::Find(string a)
{
	if (Ten == a || CMND == a || MaThanhVien == a || Email == a || DiaChi == a || Ngaysinh == a || SDT == a)
		return true;
	return false;
}

istream& operator>>(istream &is, DocGia &sv)
{
	fflush(stdin);
	cout << "Nhap ten: ";
	fflush(stdin);
	getline(is, sv.Ten);

	cout << "Nhap ma thanh vien: ";
	fflush(stdin);
	getline(is, sv.MaThanhVien);

	cout << "Nhap ngay sinh: "; 
	fflush(stdin);
	getline(is, sv.Ngaysinh);

	cout << "Nhap CMND: ";
	fflush(stdin);
	getline(is, sv.CMND);

	cout << "Nhap SDT: "; 
	fflush(stdin);
	getline(is, sv.SDT);

	cout << "Nhap dia chi: ";
	fflush(stdin);
	getline(is, sv.DiaChi);

	cout << "Nhap email: ";
	fflush(stdin);
	getline(is, sv.Email);
	return is;
}
ostream& operator <<(ostream &os,const DocGia &sv)
{
	os << "\nTen: " << sv.Ten ;
	os << "\nMa thanh vien: " << sv.MaThanhVien;
	os << "\nNgay sinh: " << sv.Ngaysinh;
	os << "\nCMND: " << sv.CMND;
	os << "\nSDT: " << sv.SDT;
	os << "\nDia chi: " << sv.DiaChi;
	os << "\nEmail: " << sv.Email;
	return os;
}