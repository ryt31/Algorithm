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

    int found_id = -1;
    for (int i = 0; i < N; i++)
    {
        if (a[i] == v)
        {
            found_id = i;
        }
    }
    printf("インデックス：%d", found_id);
    return 0;
}
