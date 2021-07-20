#include <iostream>
#include <vector>
using namespace std;
const int INF = 20000000;

int main()
{
    int N = 5;
    int max = -INF;
    int min = INF;

    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
        if (min > a[i])
        {
            min = a[i];
        }
    }
    printf("差の最大値：%d\n", max - min);
    return 0;
}
