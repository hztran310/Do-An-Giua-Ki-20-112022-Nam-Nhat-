#pragma once 
#include <iostream>

void NhapHeCoSo_PhanSo(int& A_tu, int& A_mau, int& B_tu, int& B_mau); // Nhap Phan So cua Ax + B = 0
void NhapHeCoSo_PhanSo(int& A_tu, int& A_mau, int& B_tu, int& B_mau, 
	int& C_tu, int& C_mau, int& D_tu, int& D_mau); // Nhap Phan So cua Ax + B = Cx + D

int GiaiPTphansoloai1(int a, int b, int c, int d, long long& Tu, long long& Mau);
int GiaiPTphansoloai2(int a, int b, int c, int d, int e, int f, int g, int h, long long& Tu, long long& Mau);
