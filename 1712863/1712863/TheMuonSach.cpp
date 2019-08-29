#include "pch.h"
#include "TheMuonSach.h"


TheMuonSach::TheMuonSach()
{
	Tra = false;
}
TheMuonSach::TheMuonSach(const TheMuonSach &a)
{
	NgayMuon = a.NgayMuon;
	People = a.People;
	Book = a.Book;
	BookNN = a.BookNN;
	Tra = a.Tra;
}

TheMuonSach::~TheMuonSach()
{
}
void TheMuonSach::setNgayMuon(MyDate ngay)
{
	NgayMuon = ngay;
}
void TheMuonSach::setNguoiMuon(DocGia a)
{
	People = a;
}
void TheMuonSach::SetSachMuonVN(Sach a)
{
	Book.push_back(a);
}
void TheMuonSach::SetSachMuonVN(vector<Sach> b)
{
	Book = b;
}

void TheMuonSach::SetSachMuonNN(SachNN a)
{
	BookNN.push_back(a);
}
void TheMuonSach::SetSachMuonNN(vector<SachNN> b)
{
	BookNN = b;
}
void TheMuonSach::setTra(bool a)
{
	Tra = a;
}

MyDate TheMuonSach::getNgayMuon()
{
	return NgayMuon;
}
DocGia TheMuonSach::getNguoiMuon()
{
	return People;
}
vector<Sach> TheMuonSach::getSachMuonVN()
{
	return Book;
}
vector<SachNN> TheMuonSach::getSachMuonNN()
{
	return BookNN;
}
bool TheMuonSach::getTra()
{
	return Tra;
}

TheMuonSach&TheMuonSach::operator =(const TheMuonSach &a)
{
	NgayMuon = a.NgayMuon;
	People = a.People;
	Book = a.Book;
	BookNN = a.BookNN;
	Tra = a.Tra;
	return *this;
}
istream& operator >>(istream &is, TheMuonSach &sv)
{
	Sach a;
	SachNN b;
	string ten, ma;
	int n,x;
	cout << "Nhap ten nguoi muon: ";
	fflush(stdin);
	getline(is, ten);
	sv.People.setTen(ten);

	cout << "Nhap ma thanh vien cua nguoi muon: ";
	fflush(stdin);
	getline(is, ten);
	sv.People.setMaThanhVien(ten);

	cout << "Nhap ngay muon:";
	fflush(stdin);
	getline(is, ten);
	sv.NgayMuon.setNgay(ten);
	cout << "Nhap so sach can muon: ";
	is >> x;
	is.ignore(1);
	for (int i = 0;i < x;i++)
	{
		cout << "Nhap loai sach can muon: 1 sach viet nam, 0 sach nuoc ngoai : ";
		is >> n;
		is.ignore(1);
		if (n == 1)
		{
			cout << "Nhap  ten sach can muon: ";
			fflush(stdin);
			getline(is, ten);
			a.setTen(ten);

			cout << "Nhap ma sach: ";
			fflush(stdin);
			getline(is, ten);
			a.setMa(ten);
			sv.Book.push_back(a);
		}
		else
		{
			cout << "Nhap  ten sach can muon: ";
			fflush(stdin);
			getline(is, ten);
			b.setTen(ten);

			cout << "Nhap ma sach: ";
			fflush(stdin);
			getline(is, ten);
			b.setMa(ten);
			sv.BookNN.push_back(b);
		}
	}
	return is;
}
ostream& operator <<(ostream &os, TheMuonSach sv)
{
	os << "\nTen nguoi muon: " << sv.People.getTen();
	os << "\nMa thanh vien: " << sv.People.getMaThanhVien();
	os << "\nNgay muon: " << sv.NgayMuon.get();
	os << "\nSach Muon:\n";
	for (int i = 0;i < sv.Book.size();i++)
		os << sv.Book.at(i).getTen() << endl;
	for (int i = 0;i < sv.BookNN.size();i++)
		os << sv.BookNN.at(i).getTen() << endl;

	return os;
}