#include "PTSoPhuc.h"

void NhapHeCoSo_SoPhuc(int& A_real, int& A_virt, int& B_real, int& B_virt) {
	std::cout << "Yeu Cau Nhap He Co So Cua So Phuc Theo Dang a + bi (a,b la so nguyen)\n";
	std::cout << "Nhap He Co So A : ";
	char dau, i;
	std::cin >> A_real >> dau >> A_virt >> i;
	std::cout << "Nhap He Co So B : ";
	std::cin >> B_real >> dau >> B_virt >> i;
}

void NhapHeCoSo_SoPhuc(int& A_real, int& A_virt, int& B_real, int &B_virt,
	int& C_real, int& C_virt, int& D_real, int& D_virt) {
	std::cout << "Yeu Cau Nhap He Co So Cua So Phuc Theo Dang a + bi (a,b la so nguyen)\n";
	std::cout << "Nhap He Co So A : ";
	char dau, i;
	std::cin >> A_real >> dau >> A_virt >> i;
	std::cout << "Nhap He Co So B : ";
	std::cin >> B_real >> dau >> B_virt >> i;
	std::cout << "Nhap He Co So C : "; 
	std::cin >> C_real >> dau >> C_virt >> i;
	std::cout << "Nhap He Co So D : ";
	std::cin >> D_real >> dau >> D_virt >> i;
}

int GiaiPhuongTrinh_SoPhuc_Loai1(double& res_real, double& res_virt) {
	int a, b, c, d;
	NhapHeCoSo_SoPhuc(a, b, c, d);
	if (a == 0 && b == 0 && c == 0 && d == 0) return 2; // Phuong Trinh Vo So Nghiem
	if (a == 0 && b == 0) return 1; // Phuong Trinh Khong Ton Tai Nghiem

	// (a + bi)x + (c + di) = 0
	// x = -(c + di) / (a + bi)
	// x = -(c + di) * (a - bi) / (a * a + b * b)
	// x = -[ac - bc * i + ad * i + b * d)] / (a * a + b * b)
	// x = -[ac + bd + (ad - bc) * i] / (a * a + b * b)
	// x = [-ac - bd - (ad - bc) * i] / (a * a + b * b)
	// x = -[ac + bd] / (a * a + b * b) - (ad - bc) / (a * a + b * b)

	res_real = -1.0 * (1ll * a * c + 1ll * b * d) / (1ll * a * a + 1ll * b * b);
	res_virt = -1.0 * (1ll * a * d - 1ll * b * c) / (1ll * a * a + 1ll * b * b);
	
	return 0;
}

int GiaiPhuongTrinh_SoPhuc_Loai2(double& res_real, double& res_virt) {
	int a, b, c, d, e, f, g, h;
	NhapHeCoSo_SoPhuc(a, b, c, d, e, f, g, h);

	// (a + bi)x + (c + di) = (e + fi)x + (g + hi);
	// [(a + bi) - (e + fi)]x + (c + di) - (g + hi) = 0
	// [(a - e) + (b - f) * i] * x + [(c - g) + (d - h) * i] = 0

	if (a - e == 0 && b - f == 0 && c - g == 0 && d - h == 0) return 2; // Phuong Trinh Vo So Nghiem
	if (a - e == 0 && b - f == 0) return 1; // Phuong Trinh Khong Ton Tai Nghiem

	res_real = 1.0 * (1ll * (g - c) * (a - e) + 1ll * (h - d) * (b - f));
	res_real /= 1.0 * (1ll * (a - e) * (a - e) + 1ll * (b - f) * (b - f));
	res_virt = -1.0 * (1ll * (g - c) * (b - f) - 1ll * (h - d) * (a - e));
	res_virt /= 1.0 * (1ll * (a - e) * (a - e) + 1ll * (b - f) * (b - f));
	
	return 0;
}
