#include <iostream>
using namespace std;
class Phan_So
{
private:
    int tu;
    int mau;

public:
    void Nhap();
    void Xuat();
    double laytu() const;
    double laymau() const;
    void setmau(double);
    void settu(double);
    void tinhtu(double, double, double, double);
    void tinhmau(double, double);
    static void Conghaiphanso(Phan_So &, Phan_So &);
};
int main()
{
}
Phan_So::Phan_So()
{
    tu = 0;
    mau = 0;
}
void Phan_So::Nhap()
{
    cout << "Nhap tu: ";
    cin >> tu;
    cout << "Nhap mau: ";
    cin >> mau;
}
void Phan_So::Xuat()
{
    cout << "(" << tu << " / " << mau << ")";
}
double Phan_So::laytu() const
{
    return tu;
}
double Phan_So::laymau() const
{
    return mau;
}
void Phan_So::Conghaiphanso()