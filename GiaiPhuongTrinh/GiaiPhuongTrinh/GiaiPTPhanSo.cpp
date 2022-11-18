#include "GiaiPTPhanSo.h"

void NhapHeCoSo_PhanSo(int& A_tu, int& A_mau, int& B_tu, int& B_mau) {
	std::cout << "Yeu Cau Nhap Phan So duoi dang : a / b\n";
	std::cout << "Phan So A\n";
	std::cout << "Tu : "; std::cin >> A_tu;
	std::cout << "Mau : "; std::cin >> A_mau;

	std::cout << "Phan So B\n";
	std::cout << "Tu : "; std::cin >> B_tu;
	std::cout << "Mau : "; std::cin >> B_mau;
}

void NhapHeCoSo_PhanSo(int& A_tu, int& A_mau, int& B_tu, int& B_mau, 
	int& C_tu,int& C_mau,int &D_tu,int &D_mau) {
	std::cout << "Yeu Cau Nhap Phan So duoi dang : a / b\n";
	std::cout << "Phan So A\n";
	std::cout << "Tu : "; std::cin >> A_tu;
	std::cout << "Mau : "; std::cin >> A_mau;

	std::cout << "Phan So B\n";
	std::cout << "Tu : "; std::cin >> B_tu;
	std::cout << "Mau : "; std::cin >> B_mau;

	std::cout << "Phan So C\n";
	std::cout << "Tu : "; std::cin >> C_tu;
	std::cout << "Mau : "; std::cin >> C_mau;

	std::cout << "Phan So D\n";
	std::cout << "Tu : "; std::cin >> D_tu;
	std::cout << "Mau : "; std::cin >> D_mau;
}

long long UCLN(long long a, long long b) {
	if (b == 0) return a;
	return UCLN(b, a % b);
}

int GiaiPTphansoloai1(int a, int b, int c, int d, long long& Tu, long long& Mau)
{
	if (b == 0 || d == 0)
	{
		return -1; // PT khong ton tai nghiem
	}
	else if (a == 0 && c == 0)
	{
		return 1; // PT co vo so nghiem
	}
	else if (a == 0 && c != 0) {
		return -1;  
	}
	else
	{
		Tu = -1ll * c * b;
		Mau = 1ll * a * d;
		int G = UCLN(Tu, Mau);
		Tu /= G;
		Mau /= G;
	}
	return 0;
}
int GiaiPTphansoloai2(int a, int b, int c, int d, int e, int f, int g, int h, long long& Tu, long long& Mau)
{
	
	if (b == 0 || d == 0 || f == 0 || h == 0)
	{
		return -1; // PT khong ton tai nghiem
	}
	else if (a == 0 && c == 0 && e == 0 && g == 0)
	{
		return 1; // PT co vo so nghiem
	}
	else if ((a * f - b * e) == 0 && (g * d - h * c) == 0)
	{
		return 1; //PT co vo so nghiem
	}
	else if ((a * f - b * e) == 0 && (g * d - h * c) != 0)
	{
		return -1; //PT khong ton tai nghiem
	}
	else {
		Tu = (1ll * (g * d) - 1ll * (h * c)) * 1ll * b * f;
		Mau = (1ll * (a * f) - 1ll * (b * e)) * 1ll * d * h;
		int G = UCLN(Tu, Mau);
		Tu /= G;
		Mau /= G;
	}
	return 0;
}
