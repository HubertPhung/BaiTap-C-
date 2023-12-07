﻿/*=================================================================================
* Định nghĩa các hằng số và kiểu dữ liệu mới
==================================================================================*/


/*=================================================================================
* Khai báo nguyên mẫu các hàm xử lý
==================================================================================*/
int TimSo(int n);
void LKSo(int n);
void NSoDauTien(int n);

/*=================================================================================
* Định nghĩa các hàm xử lý
==================================================================================*/


int TimSo(int n) {
	int a = 0;
	int b = 1;
	int c;
	for (int i = 1; i < n; i++) {
		if (a < b) c = b;
		else c = a;
		a = a + b;
		b = c;
	}
	return a;
}
void LKSo(int n) {
	int a = 0;
	int b = 1;
	int c;

	while (a < n) {
		if (a < b) c = b;
		else c = a;
		a = a + b;
		b = c;
		cout << a << '\t';
	}
}
void NSoDauTien(int n) {
	int a = 0;
	int b = 1;
	int c;
	int i = 0;
	while (i != n) {
		if (a < b) c = b;
		else c = a;
		a = a + b;
		b = c;
		cout << a << '\t';
		i++;
	}
}