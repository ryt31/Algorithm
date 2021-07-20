#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N = 5;
    int v = 3;

    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (a[i] == v)
        {
            count++;
        }
    }
    printf("出現回数：%d", count);
    return 0;
}
