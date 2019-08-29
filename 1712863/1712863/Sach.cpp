#include "pch.h"
#include "Sach.h"


Sach::Sach()
{

}
Sach::Sach(const Sach&a)
{
	TacGia.clear();
	TenSach = a.TenSach;
	MaSach = a.MaSach;
	GiaSach = a.GiaSach;
	NXB = a.NXB;
	TacGia = a.TacGia;
	MoTa = a.MoTa;
}
Sach::~Sach()
{
	TacGia.clear();
}
void Sach::setTen(string ten)
{
	TenSach = ten;
}
void Sach::setNXB(string nxb)
{
	NXB = nxb;
}
void Sach::setMa(string ma)
{
	MaSach = ma;
}
void Sach::setMoTa(string mota)
{
	MoTa = mota;
}
void Sach::setGia(double gia)
{
	GiaSach = gia;
}
void Sach::setTacGia(vector<string> tacgia)
{
	TacGia = tacgia;
}
void Sach::suaSach(int x)
{
	vector<string>a;
	string b;
	int n;
	switch (x)
	{
	case 1:
	{
		cin.ignore(1);
		cout << "Nhap Ten Sach: ";
		fflush(stdin);
		getline(cin, TenSach);
		break;
	}
	case 2:
	{
		cout << "Nhap ma Sach: ";
		fflush(stdin);
		getline(cin, MaSach);
		break;
	}
	case 3:
	{
		cout << "Nhap NXB: ";
		fflush(stdin);
		getline(cin, NXB);
			break;
	}
	case 4:
	{
		cout << "Nhap gia sach: ";
		fflush(stdin);
		cin >> GiaSach;
		fflush(stdin);
			break;
	}
	case 5:
	{
		cout << "Nhap mo ta cua sach: ";
		cin.ignore(1);
		getline(cin, MoTa);
		break;
	}
	case 6:
	{
		cout << "Nhap so tac gia cua sach: ";
		cin >> n;
		cin.ignore(1);
		for (int i = 0;i < n;i++)
		{
			cout << "Nhap tac gia thu " << i << " : ";
			fflush(stdin);
			getline(cin, b);
			a.push_back(b);
		}
		setTacGia(a);
		break;
	}
	default:
		break;
	}
}

string Sach::getTen()
{
	return TenSach;
}
string Sach::getNXB()
{
	return NXB;
}
string Sach::getMa()
{
	return MaSach;
}
string Sach::getMoTa()
{
	return MoTa;
}
double Sach::getGia()
{
	return GiaSach;
}
vector<string> Sach::getTacGia()
{
	return TacGia;
}
bool Sach ::Find(string a)
{
	bool c = false;
	if (TenSach == a || MaSach == a || NXB == a || a == to_string((int)GiaSach))
		c = true;
	for (int i = 0;i < TacGia.size();i++)
		if (TacGia[i] == a)
			c = true;
	return c;
}

Sach& Sach::operator = (const Sach& a)
{
	TacGia.clear();
	TenSach = a.TenSach;
	MaSach = a.MaSach;
	GiaSach = a.GiaSach;
	NXB = a.NXB;
	TacGia = a.TacGia;
	MoTa = a.MoTa;
	return *this;
}

istream& operator >>(istream &is, Sach &sv)
{
	vector<string>a;
	string b;
	int n;
	cin.ignore(1);
	cout << "Nhap Ten Sach: ";
	fflush(stdin);
	getline(is, sv.TenSach);

	cout << "Nhap ma Sach: ";
	fflush(stdin);
	getline(is, sv.MaSach);

	cout << "Nhap NXB: ";
	fflush(stdin);
	getline(is, sv.NXB);

	cout << "Nhap gia sach: ";
	fflush(stdin);
	is >> sv.GiaSach;
	fflush(stdin);

	cout << "Nhap mo ta cua sach: ";
	is.ignore(1);
	getline(is, sv.MoTa);

	cout << "Nhap so tac gia cua sach: ";
	is >> n;
	is.ignore(1);
	for (int i = 0;i < n;i++)
	{
		cout << "Nhap tac gia thu "<<i<<" : ";
		fflush(stdin);
		
		getline(is, b);
		a.push_back(b);
	}
	sv.setTacGia(a);

	return is;
}
ostream& operator <<(ostream &os, const  Sach &sv)
{
	os << "\nTen sach: " << sv.TenSach;
	os << "\nMa sach: " << sv.TenSach;
	os << "\nNXB: " << sv.TenSach;
	for(int i=0;i<sv.TacGia.size();i++)
	{
		os << "\nTac gia thu " << i << " la: " << sv.TacGia.at(i);
	}
	os << "\nMo ta sach: " << sv.MoTa;
	os << "\nGia sach: " << sv.GiaSach;
	return os;
}