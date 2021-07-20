#include <iostream>
using namespace std;

int func(int n)
{
    if (n == 0 || n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    return func(n - 1) + func(n - 2) + func(n - 3);
}

int main()
{
    cout << func(6) << endl;
    return 0;
}
