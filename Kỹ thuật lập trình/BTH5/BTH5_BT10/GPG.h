#include <cmath>
#include <iostream>
using namespace std;
class GPG
{
private:
	int gio, phut, giay;
public:
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