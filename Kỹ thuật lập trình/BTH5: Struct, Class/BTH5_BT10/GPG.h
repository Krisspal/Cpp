#include <cmath>
#include <iostream>
using namespace std;
class GPG
{
private:
	int gio, phut, giay;
public:
	/*Inline functions (hàm nội tuyến) là một loại hàm trong ngôn ngữ lập trình C++. 
	Từ khoá inline được sử dụng để đề nghị (không phải là bắt buộc) compiler (trình biên dịch) thực hiện inline expansion (khai triển nội tuyến) với hàm đó.
	Hay nói cách khác là chèn code của hàm đó tại địa chỉ mà nó được gọi.*/
	inline int getgio();
	inline int getphut();
	inline int getgiay();
	inline void setGPG(int a, int b, int c);
};
int GPG::getgio()
{
	return gio;
}
int GPG::getphut()
{
	return phut;
}
int GPG::getgiay()
{
	return giay;
}
void GPG::setGPG(int a, int b, int c)
{
	gio = a;
	phut = b;
	giay = c;
}
