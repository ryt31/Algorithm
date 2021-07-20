#include <iostream>
using namespace std;

// GCD(m, n) = GCD(n, r)

int GCD(int m, int n)
{
    if (n == 0)
    {
        return m;
    }

    return GCD(n, m % n);
}

int main()
{ 
    cout << GCD(51, 15) << endl;
    return 0;
}
