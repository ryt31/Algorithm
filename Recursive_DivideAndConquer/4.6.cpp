#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> memo;

bool func(int i, int w, const vector<int> &a)
{
    if (i == 0)
    {
        if (w == 0)
            return true;
        else
            return false;
    }

    if (memo[i][w] != -1)
    {
        return memo[i][w];
    }

    if (func(i - 1, w, a))
    {
        memo[i][w] = true;
        return memo[i][w];
    }

    if (func(i - 1, w - a[i - 1], a))
    {
        memo[i][w] = true;
        return memo[i][w];
    }

    memo[i][w] = false;
    return memo[i][w];
}

int main()
{
    int N, W;
    cin >> N >> W;

    vector<int> a(N);
    memo.assign(N + 1, vector<int>(W + 1, -1));

    for (int i = 0; i < a.size(); i++)
        cin >> a[i];

    if (func(N, W, a))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
