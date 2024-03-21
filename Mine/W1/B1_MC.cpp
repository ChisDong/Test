#include <iostream>
using namespace std;
struct Phanso
{
    int tu;
    int mau;
    void input()
    {
        do
        {
            cin >> tu >> mau;
        } while (mau == 0); // stop command
    }
};
int Maxuoc(int a, int b)
{
    int m = abs(a);
    int n = abs(b);
    while (m * n != 0)
    {
        if (m > n)
        {
            m = m - n;
        }
        else
        {
            n = n - m;
        }
    }
    return m + n;
}
Phanso RutGon(Phanso &a)
{
    int i = Maxuoc(a.mau, a.tu);
    a.mau = a.mau / i;
    a.tu = a.tu / i;
    return a;
}
Phanso operator+(Phanso A, Phanso B)
{
    Phanso C;
    C.tu = A.tu + B.tu;
    C.mau = A.mau + B.mau;
    return RutGon(C);
}
Phanso operator-(Phanso A, Phanso B)
{
    Phanso C;
    C.tu = A.tu * B.mau - A.mau * B.tu;
    C.mau = A.mau * B.mau;
    RutGon(C);
    if (C.tu > 0)
    {
    }
}

int main()
{
    return 0;
}