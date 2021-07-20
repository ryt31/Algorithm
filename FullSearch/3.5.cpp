#include <iostream>
#include <vector>
using namespace std;
const int INF = 20000000;

int how_many_times(int num)
{
    int exp = 0;
    while (num % 2 == 0)
    {
        num /= 2;
        exp++;
    }
    return exp;
}

int main()
{
    int N = 3;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int count = 0;

    int result = INF;
    for (auto a : A)
    {
        result = min(result, how_many_times(a));
    }
    cout << "操作数：" << result << endl;
    return 0;
}
/*
int main()
{
    int N = 3;

    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    int count = 0;
    bool isRun = true;

    while (isRun)
    {
        for (int i = 0; i < N; i++)
        {
            if (a[i] % 2 == 1)
            {
                isRun = false;
                break;
            }
            else
            {
                a[i] /= 2;
            }
        }
        if (isRun)
        {
            count++;
        }
    }

    printf("操作回数：%d", count);
    return 0;
}
*/