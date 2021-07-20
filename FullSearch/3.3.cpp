#include <iostream>
#include <vector>
using namespace std;
const int INF = 20000000;

int main()
{
    int N = 5;
    int first_min = INF;
    int second_min = INF;

    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (i == 0)
        {
            first_min = a[i];
        }
        else
        {
            if (a[i] >= second_min)
            {
                continue;
            }
            else if (a[i] <= first_min)
            {
                second_min = first_min;
                first_min = a[i];
            }
            else
            {
                second_min = a[i];
            }
        }
    }
    printf("1番目に小さい：%d\n", first_min);
    printf("2番目に小さい：%d\n", second_min);
    return 0;
}
