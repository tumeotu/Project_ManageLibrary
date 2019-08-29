#include "pch.h"
#include "ThuVien.h"
#include<ctime>

ThuVien::ThuVien()
{

}
ThuVien::ThuVien(const ThuVien &a)
{
	docGia = a.docGia;
	sachNN = a.sachNN;
	sachVN = a.sachVN;
	The = a.The;
}


ThuVien::~ThuVien()
{
	docGia.clear();
	sachVN.clear();
	sachNN.clear();
	The.clear();
}
void ThuVien::themSach()
{
	Sach a;
	SachNN b;
	int j, n;
	cout << "Nhap so sach ban can them: ";
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cout << "Nhap loai sach ban can them: 1 sach viet nam, 0 sach nuoc ngoai: ";
		cin >> j;
		
		if (j == 1)
		{
			cin >> a;
			sachVN.push_back(a);
		}
		else
		{
			cin >> b;
			sachNN.push_back(b);
		}
	}
}
void ThuVien::xoaSach()
{
	string a;
	cout << "Nhap ma sach ban can xoa: ";
	getline(cin, a);
	for (int i = 0;i < sachVN.size();i++)
	{
		if (sachVN[i].getMa() == a)
		{
			cout << "\nThong tin sach ban can xoa";
			cout << sachVN[i];
			sachVN.erase(sachVN.begin() + i);
			return;
		}
	}
	for (int i = 0;i < sachNN.size();i++)
	{
		if (sachNN[i].getMa() == a)
		{
			cout << "\nThong tin sach ban can xoa";
			cout << sachNN[i];
			sachNN.erase(sachNN.begin() + i);
			return;
		}
	}
	cout << "Sach ban can xoa khong co!";
}
void ThuVien::suaSach()
{
	int k=0,l = 0,o,x;
	for (int i = 0;i < sachVN.size();i++)
	{
		cout << "\n\nSach thu: " << k << sachVN[i];
		k++;
	}
	for (int i = 0;i < sachNN.size();i++)
	{
		cout << "\n\nSach thu: " << k+l << sachNN[i];
		l++;
	}
	cout << "\nMoi ban chon so thu tu cua cuon sach can sua: ";
	o = -1;
	while (o < k + l)
	{
		cin >> o;
		if (o < k)
		{
			cout << "\n1. Sua ten sach";
			cout << "\n2. Sua ma sach";
			cout << "\n3. Sua NXB";
			cout << "\n4. Sua mo ta cua sach";
			cout << "\n5. Sua gia sach";
			cout << "\n6. Sua tac gia\n";
			cin >> x;
			switch (x)
			{
			case 1:
			{
				sachVN[o].suaSach(x);o = k + l + 10; break;
			}										 
			case 2:									 
				sachVN[o].suaSach(x);o = k + l + 10; break;
			case 3:									
				sachVN[o].suaSach(x);o = k + l + 10; break;
			case 4:									
				sachVN[o].suaSach(x);o = k + l + 10; break;
			case 5:									
				sachVN[o].suaSach(x);o = k + l + 10; break;
			case 6:									
				sachVN[o].suaSach(x);o = k + l + 10; break;
			default:
				cout << "Nhap sai!\nMoi nhap lai!\n";
				cin >> x;
			}
		}
		if(o<k+l)
		{
			cout << "\n1. Sua ten sach";
			cout << "\n2. Sua ma sach";
			cout << "\n3. Sua NXB";
			cout << "\n4. Sua mo ta cua sach";
			cout << "\n5. Sua gia sach";
			cout << "\n6. Sua tac gia";
			cout << "\n7. Sua ma ISBN\n";
			cin >> x;
			switch (x)
			{
			case 1:
				sachNN[o-k].suaSachNN(x);o = k + l + 10;break;
			case 2:										
				sachNN[o-k].suaSachNN(x);o = k + l + 10;break;
			case 3:									
				sachNN[o-k].suaSachNN(x);o = k + l + 10;break;
			case 4:									
				sachNN[o-k].suaSachNN(x);o = k + l + 10;break;
			case 5:										
				sachNN[o-k].suaSachNN(x);o = k + l + 10;break;
			case 6:										
				sachNN[o-k].suaSachNN(x);o = k + l + 10;break;
			case 7:										
				sachNN[o-k].suaSachNN(x);o = k + l + 10;break;
			default:
				cout << "Nhap sai!\nMoi nhap lai!\n";
				cin >> x;
			}
		}
		if (o != k + l + 10)
		{
			cout << "Khong co so thu tu ban vua nhap\nMoi ban nhap lai: ";
			cin >> o;
		}
	}

}
void ThuVien::timKiemSach()
{
	bool b=false;
	string a;
	cout << "Ban co the tim kiem sach theo ten, ma sach, gia, NXB, tac gia\nNhap sach ban muon tim kiem: ";
	getline(cin, a);
	for (int i = 0;i < sachVN.size();i++)
	{
		if (sachVN[i].Find(a) == true)
		{
			b = true;
			cout << sachVN[i] << endl;
		}
	}
	for (int i = 0;i < sachNN.size();i++)
	{
		if (sachNN[i].Find(a) == true)
		{
			b = true;
			cout << sachNN[i] << endl;
		}
	}
	if (b != true)
		cout << "\nKhong co sach ban tim kiem";
}

void ThuVien::themDocGia()
{
	DocGia a;
	int n;
	cout << "Nhap so doc gia can them: ";
	cin >> n;
	cin.ignore(1);
	for (int i = 0;i < n;i++)
	{
		cout << "\nNhap doc gia thu " << i << " : \n";
		cin >> a;
		docGia.push_back(a);
	}
}
void ThuVien::xoaDocGia()
{
	string a;
	cout << "Nhap ma thanh vien cua doc gia ban can xoa: ";
	getline(cin, a);
	for (int i = 0;i < docGia.size();i++)
	{
		if (docGia[i].getMaThanhVien() == a)
		{
			docGia.erase(docGia.begin() + i);
			return;
		}
	}
	cout << "Doc gia  ban can xoa khong co!";
}
void ThuVien::suaDocGia()
{
	int k = 0, l = 0, o, x;
	for (int i = 0;i < docGia.size();i++)
	{
		cout << "\n\nSach thu: " << k << docGia[i];
		k++;
	}
	cout << "\nMoi ban chon so thu tu cua doc gia can sua: ";
	o = -1;
	while (o < k + l)
	{
		cin >> o;
		if (o < k + l)
		{
			cout << "\n1. Sua ten doc gia";
			cout << "\n2. Sua ma thanh vien";
			cout << "\n3. Sua ngay sinh";
			cout << "\n4. Sua CND";
			cout << "\n5. Sua SDT";
			cout << "\n6. Sua dia chi";
			cout << "\n7. Sua email\n";
			cin >> x;
			switch (x)
			{
			case 1:
				docGia[o].suaDocGia(x);o = k + l + 10;break;
			case 2:
				docGia[o].suaDocGia(x);o = k + l + 10;break;
			case 3:
				docGia[o].suaDocGia(x);o = k + l + 10;break;
			case 4:
				docGia[o].suaDocGia(x);o = k + l + 10;break;
			case 5:
				docGia[o].suaDocGia(x);o = k + l + 10;break;
			case 6:
				docGia[o].suaDocGia(x);o = k + l + 10;break;
			case 7:
				docGia[o].suaDocGia(x);o = k + l + 10;break;
			default:
				cout << "Nhap sai!\nMoi nhap lai!\n";
				cin >> x;
			}
		}
		if (o != k + l + 10)
		{
			cout << "Khong co so thu tu ban vua nhap\nMoi ban nhap lai: ";
			cin >> o;
		}
	}
}
void ThuVien::timKiemDocGia()
{
	bool b = false;
	string a;
	cout << "Ban co the tim kiem doc theo ten, ma thanh vien, CMND, dia chi, ngay sinh, email, SDT\nNhap sach ban muon tim kiem: ";
	getline(cin, a);
	for (int i = 0;i < docGia.size();i++)
	{
		if (docGia[i].Find(a) == true)
		{
			b = true;
			cout << docGia[i] << endl;
		}
	}
	if (b != true)
		cout << "\nKhong co doc gia ban can tim kiem\n";
}

void ThuVien::setThe()
{
	int n;

	cout << "Nhap so the muon sach: ";
	cin >> n;
	cin.ignore(1);
	for (int i = 0;i < n;i++)
	{
		TheMuonSach a;
		cin >> a;
		The.push_back(a);
		a.~TheMuonSach();
	}
}
void ThuVien::removeThe()
{
	int a;
	string ten, ma;
	cout << "Nhap ten nguoi muon: ";
	fflush(stdin);
	getline(cin, ten);
	cout << "Nhap ma thanh vien cua nguoi muon: ";
	fflush(stdin);
	getline(cin, ma);
	for (int i = 0;i < The.size();i++)
	{
		if (The[i].getNguoiMuon().getMaThanhVien() == ma)
		{
			cout << The[i];
		}
	}
	cout << "Chon the can tra sach: ";
	cin >> a;
	if (The[a].getNguoiMuon().getPhat() != 0)
	{
		int l;
		cout << "Ban da muon qua so ngay quy dinh. \nSo tien phat cua ban la: " << The[a].getNguoiMuon().getPhat();
		cout << "\nBam 1 de hoan tat nop phat va tra sach";
		cin >> l;
		while (l != 1)
		{
			cout << "\nBan da nhap sai!\nMoi ban nhap lai!";
			cin >> l;
		}
	}
	The[a].setTra(true);
	cout << "Da tra sach!!!";
}
void ThuVien::Phat()
{
	bool x = false;
	string a, b;
	time_t baygio = time(0);
	tm *ltm = localtime(&baygio);
	a = to_string(ltm->tm_mday);
	b += a;
	b += "/";
	a = to_string(1 + ltm->tm_mon);
	b += a;
	b += "/";
	a = to_string(1900 + ltm->tm_year);
	b += a;
	MyDate local;
	for (int i = 0;i < The.size();i++)
	{
		if (local - The[i].getNgayMuon() > 7)
		{
			x = true;
			int heso = 0;
			if (The[i].getSachMuonNN().empty() != true)
			{
				heso += 1;
			}
			if (The[i].getSachMuonNN().empty() != true)
			{
				heso += 2;
			}
			The[i].getNguoiMuon().setPhat(10000 * heso);
		}
	}
	if (x == true)
	{
		cout << "\n---Danh sach doc gia muon sach da qua han va so tien phat----\n";
		for (int i = 0;i < The.size();i++)
		{
			if (The[i].getNguoiMuon().getPhat() != 0)
			{
				cout << The[i];
				cout << "So tien phat la: " << The[i].getNguoiMuon().getPhat() << endl;
			}
		}
	}
}

void ThuVien::luu()
{
	luuDocGia();
	luuSachNN();
	luuSachVN();
	luuTheMuonSach();
}
void ThuVien::luuSachVN()
{
	ofstream ghi;
	ghi.open("SachVn.txt");
	for (int i = 0;i < sachVN.size();i++)
	{
		ghi << sachVN[i].getTen() << endl;
		ghi << sachVN[i].getMa() << endl;
		ghi << sachVN[i].getNXB() << endl;
		ghi << sachVN[i].getMoTa() << endl;
		ghi << sachVN[i].getGia() << endl;
		vector<string>a;
		a = sachVN[i].getTacGia();
		for (int j = 0;j < a.size();j++)
		{
			ghi << a.at(j)<<endl;
		}
		ghi << "*"<<endl;
	}
	ghi << 'eof';
	ghi.close();
}
void ThuVien::luuSachNN()
{
	ofstream ghi;
	ghi.open("SachNN.txt");
	for (int i = 0;i < sachNN.size();i++)
	{
		ghi << sachNN[i].getTen() << endl;
		ghi << sachNN[i].getMa() << endl;
		ghi << sachNN[i].getISBN() << endl;
		ghi << sachNN[i].getNXB() << endl;
		ghi << sachNN[i].getMoTa() << endl;
		ghi << sachNN[i].getGia() << endl;
		vector<string>a;
		a = sachNN[i].getTacGia();
		for (int j = 0;j < a.size();j++)
		{
			ghi << a.at(j) << endl;
		}
		ghi << "*" << endl;
	}
	ghi << 'eof';
	ghi.close();
}
void ThuVien::luuDocGia()
{
	ofstream ghi;
	ghi.open("DocGia.txt");
	for (int i = 0;i < docGia.size();i++)
	{
		ghi << docGia[i].getTen() << endl;
		ghi << docGia[i].getCMND() << endl;
		ghi << docGia[i].getMaThanhVien() << endl;
		ghi << docGia[i].getDC() << endl;
		ghi << docGia[i].getNS() << endl;
		ghi << docGia[i].getPhat() << endl;
		ghi << docGia[i].getSDT() << endl;
		ghi << docGia[i].getEmail() << endl;
		ghi << "*" << endl;
	}
	ghi << 'eof';
	ghi.close();
}
void ThuVien::luuTheMuonSach()
{
	ofstream ghi;
	ghi.open("TheMuonSach.txt");
	for (int i = 0;i < The.size();i++)
	{
		ghi << The[i].getNguoiMuon().getTen() << endl;
		ghi << The[i].getNguoiMuon().getMaThanhVien() << endl;
		ghi << The[i].getNgayMuon().get() << endl;
		vector<Sach>a;
		vector<SachNN>b;
		a=The[i].getSachMuonVN();
		b = The[i].getSachMuonNN();
		for (int j = 0;j < a.size();j++)
		{
			ghi << a.at(j).getTen() << endl;
			ghi << a.at(j).getMa() << endl;
		}
		ghi << "-" << endl;
		for (int k = 0;k < b.size();k++)
		{
			ghi << b.at(k).getTen()<< endl;
			ghi << b.at(k).getMa() << endl;
		}
		ghi << "*" << endl;
	}
	ghi << 'eof';
	ghi.close();
}

void ThuVien::doc()
{
	docSachNN();
	docSachVN();
	docTheMuonSach();
	docDocGia();
}
void ThuVien::docSachVN()
{
	string a;
	double c;
	Sach b;
	vector<string> d;
	ifstream doc;
	doc.open("SachVN.txt");
	getline(doc, a);
	while (doc.good())
	{
		// doc ten
		b.setTen(a);
		// doc ma sach
		getline(doc, a);
		b.setMa(a);
		// doc nxb
		getline(doc, a);
		b.setNXB(a);
		// doc mo ta
		getline(doc, a);
		b.setMoTa(a);
		// doc gia
		doc >> c;
		b.setGia(c);
		getline(doc, a);
		// doc tac gia
		getline(doc, a);
		while (a != "*")
		{
			d.push_back(a);
			getline(doc, a);
		}
		b.setTacGia(d);
		sachVN.push_back(b);
		d.clear();
		getline(doc, a);
	}
	doc.close();
}
void ThuVien::docSachNN()
{
	string a;
	double c;
	SachNN b;
	vector<string> d;
	ifstream doc;
	doc.open("SachNN.txt");
	getline(doc, a);
	while (doc.good())
	{
		// doc ten
		b.setTen(a);
		// doc ma sach
		getline(doc, a);
		b.setMa(a);
		// doc ma isbn
		getline(doc, a);
		b.setISBN(a);
		// doc nxb
		getline(doc, a);
		b.setNXB(a);
		// doc mo ta
		getline(doc, a);
		b.setMoTa(a);
		// doc gia
		doc >> c;
		b.setGia(c);
		getline(doc, a);
		// doc tac gia
		getline(doc, a);
		while (a != "*")
		{
			d.push_back(a);
			getline(doc, a);
		}
		b.setTacGia(d);
		sachNN.push_back(b);
		d.clear();
		getline(doc, a);
	}
	doc.close();
}
void ThuVien::docDocGia()
{
	string a;
	double c;
	DocGia b;
	ifstream doc;
	doc.open("DocGia.txt");
	getline(doc, a);
	while (doc.good())
	{
		// doc ten
		b.setTen(a);
		// doc cmnd
		getline(doc, a);
		b.setCMND(a);
		// doc ma thanh vien
		getline(doc, a);
		b.setMaThanhVien(a);
		// doc dia chi
		getline(doc, a);
		b.setDC(a);
		// doc ngay sinh
		getline(doc, a);
		b.setNS(a);
		// doc so tien phat
		doc >> c;
		b.setPhat(c);
		getline(doc, a);
		// doc so dien thoai
		getline(doc, a);
		b.setSDT(a);
		// doc email
		getline(doc, a);
		b.setEmail(a);
		docGia.push_back(b);
		getline(doc, a);
		getline(doc, a);
	}
	doc.close();
}
void ThuVien::docTheMuonSach()
{
	string a;
	double c;
	
	ifstream doc;
	doc.open("TheMuonSach.txt");
	getline(doc, a);
	while (doc.good())
	{
		TheMuonSach b;
		MyDate g;
		DocGia f;
		Sach d;
		SachNN e;
		// doc ten
		f.setTen(a);
		// doc ma thanh vien
		getline(doc, a);
		f.setMaThanhVien(a);
		b.setNguoiMuon(f);
		// doc ngay muon
		getline(doc, a);
		g.setNgay(a);
		b.setNgayMuon(g);

		getline(doc, a);
		while (a != "-")
		{
			d.setTen(a);
			getline(doc, a);
			d.setMa(a);
			b.SetSachMuonVN(d);
			getline(doc, a);
		}
		getline(doc, a);
		while (a != "*")
		{
			e.setTen(a);
			getline(doc, a);
			e.setMa(a);
			b.SetSachMuonNN(e);
			getline(doc, a);
		}
		The.push_back(b);
		getline(doc, a);
		b.~TheMuonSach();
		d.~Sach();
		e.~SachNN();
		f.~DocGia();
		g.~MyDate();
	}
	doc.close();
}

void ThuVien::meNu()
{
	int a = 0;
	doc();
	while (a != -1)
	{
		system("cls");
		cout << "\t\t----------THU VIEN----------\n";
		cout << "\n1.Quan li sach";
		cout << "\n2.Quan li doc gia";
		cout << "\n3.Quan li muon/tra sach";
		cout << "\n4.Thoat!\n";
		cout << "\nMoi ban chon: ";
		cin >> a;
		while (a < 1 || a>4)
		{
			cout << "\nNhap sai!\nMoi ban nhap lai: ";
			cin >> a;
		}
		switch (a)
		{
		case 1:
		{
			int sach = 0;
			system("cls");
			while (sach != -1)
			{
				system("cls");
				cout << "\t\t----------QUAN LI SACH----------\n";
				cout << "\n1.Them sach";
				cout << "\n2.Xoa sach";
				cout << "\n3.Sua sach";
				cout << "\n4.Tim kiem sach";
				cout << "\n5.Quay lai MENU chinh\n";
				cout << "\nMoi ban chon: ";
				cin >> sach;
				while (sach < 1 || sach>5)
				{
					cout << "\nNhap sai!\nMoi ban nhap lai: ";
					cin >> sach;
				}
				switch (sach)
				{
				case 1:
				{
					system("cls");
					themSach();
					cout << "\nDa them!";
					break;
				}
				case 2:
				{
					system("cls");
					xoaSach();
					cin.ignore(1);
					cout << "\nDa xoa!";
					break;
				}
				case 3:
				{	
					cin.ignore(1);
					system("cls");
					suaSach();
					cout << "\nDa sua!";
					break;
				}
				case 4:
				{
					cin.ignore(1);
					int t = 0;
					system("cls");
					timKiemSach();
					cout << "\nBam -1 de quay lai!";
					cin >> t;
					while (t != -1)
					{
						cout << endl;
						cin >> t;
					}
					break;
				}
				case 5:
				{
					sach = -1;
					break;
				}
				}
			}
		}
		case 2:
		{
			int nguoi = 0;
			system("cls");
			while (nguoi != -1)
			{
				system("cls");
				cout << "\t\t----------QUAN LI DOC GIA----------\n";
				cout << "\n1.Them doc gia";
				cout << "\n2.Xoa doc gia";
				cout << "\n3.Sua doc gia";
				cout << "\n4.Tim kiem doc gia";
				cout << "\n5.Quay lai MENU chinh\n";
				cout << "\nMoi ban chon: ";
				cin >> nguoi;
				while (nguoi < 1 || nguoi>5)
				{
					cout << "\nNhap sai!\nMoi ban nhap lai: ";
					cin >> nguoi;
				}
				switch (nguoi)
				{
				case 1:
				{
					system("cls");
					themDocGia();
					cout << "\nDa them!";
					break;
				}
				case 2:
				{
					system("cls");
					xoaDocGia();
					cout << "\nDa xoa!";
					break;
				}
				case 3:
				{
					system("cls");
					suaDocGia();
					cout << "\nDa sua!";
					break;
				}
				case 4:
				{
					int t = 0;
					system("cls");
					timKiemDocGia();
					cout << "\nBam -1 de quay lai!";
					cin >> t;
					while (t != -1)
					{
						cout << endl;
						cin >> t;
					}
					break;
				}
				case 5:
				{
					nguoi = -1;
					break;
				}
				}
			}
		}
		case 3:
		{
			int the = 0;
			system("cls");
			while (the != -1)
			{
				system("cls");
				cout << "\t\t----------QUAN LI MUON/TRA SACH----------\n";
				cout << "\n1.Muon sach";
				cout << "\n2.Tra sach";
				cout << "\n3.Xem danh sach doc gia dang muon qua han";
				cout << "\n4.Quay lai MENU chinh\n";
				cout << "\nMoi ban chon: ";
				cin >> the;
				while (the < 1 || the>5)
				{
					cout << "\nNhap sai!\nMoi ban nhap lai: ";
					cin >> the;
				}
				switch (the)
				{
				case 1:
				{
					cin.ignore(1);
					system("cls");
					setThe();
					cout << "\nMuon sach thanh cong!";
					break;
				}
				case 2:
				{
					cin.ignore(1);
					system("cls");
					removeThe();
					cout << "\nTra sach thanh cong!";
					break;
				}
				case 3:
				{
					cin.ignore(1);
					int t = 0;
					system("cls");
					Phat();
					cout << "\nBam -1 de quay lai!";
					cin >> t;
					while (t != -1)
					{
						cout << endl;
						cin >> t;
					}
					break;
				}
				case 4:
				{
					the = -1;
					break;
				}
				}
			}
		}
		case 4:
		{
			luu();
			a = -1;
			break;
		}
		}
	}
}

ThuVien& ThuVien::operator =(const ThuVien&a)
{
	docGia = a.docGia;
	sachNN = a.sachNN;
	sachVN = a.sachVN;
	The = a.The;
	return *this;
}
