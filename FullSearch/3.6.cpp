#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int K = 5;
    int N = 10;

    int count = 0;
    for (int i = 0; i < K; i++)
    {
        for (int j = 0; j < K; j++)
        {
            int k = N - i - j;
            if (i + j + k == N)
            {
                count++;
            }
        }
    }
    cout << "組み合わせ：" << count << endl;
    return 0;
}