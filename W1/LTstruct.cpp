#include <iostream>
#include <string>
using namespace std;

struct ten_struct
{
    // member
};
struct SoPhuc
{
    int a, b;
    // kieu tra ve operator (+,-,*,/) (danh sách tham số) {//}
    SoPhuc operator+(const SoPhuc other)
    {
        SoPhuc tong;
        tong.a = a + other.a; // other.a là phần thực của b
        tong.b = b + other.b; // other.b là phần ảo của a
        return tong;
    }
};
struct sophuc
{
    int a, b;
    friend sophuc operator+(const sophuc x, const sophuc y)
    {
        sophuc sum;
        sum.a = x.a + y.a;
        sum.b = x.b + y.b;
    }
};
struct SinhVien
{
    string msv;
    string ten;
    double gpa;
    string dc;
    void in()
    {
        cout << msv << " " << ten << " " << gpa << " " << dc << endl; // hàm in in ra các chỉ số của struct
    }
    void input()
    {
        cin >> msv;
        cin.ignore();
        getline(cin, ten);
        cin >> gpa;
        cin.ignore();
        getline(cin, dc);
    }
    // Constructor
    SinhVien() // 1 khi gọi hàm sinh viên không có biến bên trong
        {
            msv = "abcd"} SinhVien(string ma) // 2 khi gọi hàm sinh viên có biến bên trong thì sẽ là constructor 2
    {
        msv = ma;
    }
};
int main()
{
    SinhVien x; // x chứa cả 4 thông tin
    cin >> x.msv;
    cin >> x.gpa;
    cin >> x.dc;
    cin.ignore();
    getline(cin, x.ten);
    cout << x.msv << " " << x.ten << " " << x.gpa << " " << x.dc << endl;
    x.input();

    SoPhuc a{1, 2}, b{3, 4};
    SoPhuc c = a + b;
    cout << c.a << " " << c.b << endl;

    return 0;
}