#include <iostream>
#include <vector>
using namespace std;

vector<long long> memo;

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

    if (memo[n] != -1)
    {
        return memo[n];
    }
    else
    {
        memo[n] = func(n - 1) + func(n - 2) + func(n - 3);
        return memo[n];
    }
}

int main()
{
    int N = 6;
    memo.assign(N + 1, -1);
    cout << func(N) << endl;

    for (int i = 0; i < memo.size(); i++)
    {
        cout << memo[i] << endl;
    }
    return 0;
}
