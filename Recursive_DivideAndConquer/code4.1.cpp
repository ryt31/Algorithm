#include <iostream>
using namespace std;

int func(int n)
{
    cout << "func(" << n << ") called." << endl;
    if(n == 0) return 0;

    int result = n + func(n - 1);
    cout << n << "=" << result << endl;
    return result;
}

int main()
{
    func(5);
    return 0;
}
