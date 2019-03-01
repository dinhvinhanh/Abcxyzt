#include <iostream>

using namespace std;

const int N = 100;

int main()
{
    int x,y;
    char b[N];
    int a[N];
    int z,t;

    cout << "Dia chi cua 3 phan tu trong mang a : ";
    for (int i=1; i<=3; i++)
    {
        cout<<&a[i]<<' ';
    }
    cout << endl << "Dia chi cua 3 phan tu trong mang b : ";
    for (int i=1; i<=3; i++)
    {
        cout<<(int*)&b[i]<<' ';
    }

    cout << endl << "Dia chi cua x, y, z, t la : " << &x <<' '<< &y <<' '<< &z <<' '<< &t<<endl;
}
    /*
        Địa chỉ của 3 phần từ liên tiếp trong mảng a là dãy 3 giá trị tăng dần cách nhau 4 tương ứng với kích thước kiểu int 4 bytes
        Địa chỉ của 3 phần tử liên tiếp trong mảng b là dãy 3 giá trị tăng dần cách nhau 1 tương ứng với kích thước kiểu char 1 bytes
    */

