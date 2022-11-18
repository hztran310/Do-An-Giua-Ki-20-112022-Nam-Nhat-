#include "PTSoPhuc.h"
#include "GiaiPTPhanSo.h"
#include "PTSNguyenVaSThuc.h"

#include <iomanip>

using namespace std;

void GiaiPhuongTrinh_Dang1(const int &type) {
	if (type <= 2) {
		double a, b;
		NhapHeCoSo_SoThuc(a, b);
		XuatNghiem_PT1_Thuc(a, b);
	}
	else if (type == 3) {
		int a, b, c, d;
		NhapHeCoSo_PhanSo(a, b, c, d);
		long long res_tu = 0, res_mau = 0;
		int Check = GiaiPTphansoloai1(a, b, c, d, res_tu, res_mau);
		if (Check == -1) cout << "Phuong Trinh Khong Ton Tai Nghiem";
		else if (Check == 1) cout << "Phuong Trinh Co Vo So Nghiem";
		else {
			GiaiPTphansoloai1(a,b,c,d,res_tu, res_mau);
			cout << "X = " << res_tu << "/" << res_mau;
		}
	} 
	else if (type == 4) {
		double res_real = 0, res_virt = 0;
		if (int T = GiaiPhuongTrinh_SoPhuc_Loai1(res_real, res_virt)) {
			if (T == 1) cout << "Phuong Trinh Khong Ton Tai Nghiem";
			else cout << "Phuong Trinh Co Vo So Nghiem";
			return;
		}
		cout << "X = ";
		cout << fixed << setprecision(2);
		if (res_virt == 0) cout << res_real;
		else if (res_real == 0) cout << res_virt << "i";
		else if (res_virt > 0) cout << res_real << "+" << res_virt << "i";
		else cout << res_real << res_virt << "i";
	}
}

void GiaiPhuongTrinh_Dang2(const int &type) {
	if (type <= 2) {
		double a, b, c, d;
		NhapHeCoSo_SoThuc(a, b, c, d);
		XuatNghiem_PT2_Thuc(a, b, c, d);
	} 
	else if (type == 3) {
		int a, b, c, d, e, f, g, h;
		NhapHeCoSo_PhanSo(a, b, c, d, e, f, g, h);
		long long res_tu = 0, res_mau = 0;
		int Check = GiaiPTphansoloai2(a, b, c, d, e, f, g, h, res_tu, res_mau);
		if (Check == -1) cout << "Phuong Trinh khong ton tai nghiem";
		else if (Check == 1) cout << "Phuong Trinh co vo so nghiem";
		else cout << "X = " << res_tu << "/" << res_mau;
	} 
	else if (type == 4) {
		double res_real = 0, res_virt = 0;
		if (int T = GiaiPhuongTrinh_SoPhuc_Loai2(res_real, res_virt)) {
			if (T == 1) cout << "Phuong Trinh Khong Ton Tai Nghiem";
			else cout << "Phuong Trinh Co Vo So Nghiem";
			return;
		}
		cout << "X = ";
		if (res_virt == 0) cout << res_real;
		else if (res_real == 0) cout << res_virt << "i";
		else if (res_virt > 0) cout << res_virt << "+" << res_real << "i";
		else cout << res_virt << res_real << "i";
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	cout << "GIAI PHUONG TRINH\n";
	cout << "Dang 1 : Ax + B = 0 \n";
	cout << "Dang 2 : Ax + B = Cx + D \n";
	int type_Dang;
	cout << "Nhap Dang Phuong Trinh : ";cin >> type_Dang;

	cout << "Phuong Trinh Thuoc Loai : \n";
	cout << "1. Phuong Trinh Loai So Nguyen\n";
	cout << "2. Phuong Trinh Loai So Thuc\n";
	cout << "3. Phuong Trinh Loai Phan So\n";
	cout << "4. Phuong Trinh Loai So Phuc \n";

	int type;
	cout << "Nhap Loai Phuong Trinh : "; cin >> type;

	if (type_Dang == 1) GiaiPhuongTrinh_Dang1(type);
	else GiaiPhuongTrinh_Dang2(type);
}