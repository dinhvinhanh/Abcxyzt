#include <iostream>

using namespace std;
long long factorial(int x)
{
    cout << "x= " << x << " at " << &x << endl;
    if (x>1) return x*factorial(x-1);
    else return 1;
}

int main()
{
    int n; cin >> n;
    cout << factorial(n);
}
/* Dãy giá trị giảm dần cách đều nhau 48 chứng tỏ kích thước của 1 stack frame cho hàm là 48 bytes */
