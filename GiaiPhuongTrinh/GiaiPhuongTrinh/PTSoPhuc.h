#pragma once 

#include <iostream>

void NhapHeCoSo_SoPhuc(int& A_real, int& A_virt, int& B_real, int& B_virt); // nhap he so cua phuong trinh Ax + B = 0

void NhapHeCoSo_SoPhuc(int& A_real, int& A_virt, int& B_real, int& B_virt,
	int& C_real, int& C_virt, int& D_real, int& D_virt); // nhap he so cua phuong trinh Ax + B = Cx + D;

int GiaiPhuongTrinh_SoPhuc_Loai1(double& res_real, double& res_virt); // Giai Phuong Trinh Ax + B = 0
int GiaiPhuongTrinh_SoPhuc_Loai2(double& res_real, double& res_virt); // Giai Phuong Trinh Ax + B = Cx + D