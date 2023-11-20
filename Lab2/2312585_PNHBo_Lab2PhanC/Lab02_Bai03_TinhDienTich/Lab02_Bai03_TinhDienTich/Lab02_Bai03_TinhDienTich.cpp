﻿//===========================================================================
// Nạp các thư viện vào chương trình
//===========================================================================
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

//===========================================================================
// Định nghĩa hằng số và các kiểu dữ liệu mới
//===========================================================================

//===========================================================================
// Khai báo nguyên mẫu các hàm
//===========================================================================

int TinhDienTichHCN(int dai, int rong);
double TinhDienTichTamGiac(int canhA, int canhB, int canhC);

//===========================================================================
// Định nghĩa hàm MAIN
//===========================================================================
int main()
{
	// Khai báo nguyên mẫu của các hàm
	int a, b, c;

	//Khai báo biến để lưu diện tích
	double dienTich;

	// Nhập độ dài cạnh a
	cout << endl << "Nhap do dai canh a : ";
	cin >> a;

	// Nhập độ dài cạnh b
	cout << endl << "Nhap do dai canh b : ";
	cin >> b;

	// Nhập độ dài cạnh c
	cout << endl << "Nhap do dai canh c : ";
	cin >> c;

	// Gọi hàm tính diện tích hình chữ nhật khi biết
	// Chiều dài a và chiều rộng b
	dienTich = TinhDienTichHCN(a, b);

	// Xuất diện tích hình chữ nhật
	cout << endl << "Dien tich cua hinh chu nhat co"
		<< "chieu dai" << a << "va"
		<< "chieu rong" << b << "la"
		<< dienTich;

	// Gọi hàm tính diện tích hình tam giác khi biết
	// Chiều dài 3 cạnh : a, b, c
	dienTich = TinhDienTichTamGiac(a, b, c);

	// Xuất diện tích của hình tam giác
	cout << endl << "Dien tich của hinh tam giac co"
		<< "3 canh : a = " << a << ","
		<< "b =" << b << ", c =" << c << " la "
		<< dienTich;
}
//===========================================================================
// Định nghĩa các hàm xử lý
//===========================================================================

// Định nghĩa hàm tính diện tích hình chữ nhật
// input :
//	dai  : chiều dài của hình chữ nhật
// rong  : Diện tích của hình chữ nhật
int TinhDienTichHCN(int dai, int rong)
{
	int dt;		// Khai báo biến để lưu diện tích
	// Tính diện tích, lưu vào biến dt
	dt = dai * rong;

	// Gán giá trị dt cho hàm và trở về nơi gọi hàm
	return dt;
}
// Định nghĩa hàm tính diện tích hình tam giác
// Input :
// canhA : Độ dài cạnh a
// canhB : Độ dài canh b
// canhC : Độ dài cạnh c
// Output: Diện tích của hình tam giác
double TinhDienTichTamGiac(int canhA, int canhB, int canhC)
{
	// Khai báo biến
	double dt,		// để lưu diện tích
		p;			// để lưu nửa chu vi

	// Tính giá trị nửa chu vi, gán cho biến p
	p = (canhA + canhB + canhC) / 2.0;

	// Tính diện tích, lưu vào biến dt
	dt = sqrt(p * (p - canhA) * (p - canhB) * (p - canhC));

	// Gán giá trị dt cho hàm và trở về nơi gọi hàm
	return dt;
}
