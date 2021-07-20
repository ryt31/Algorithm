#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S = "125";
    int N = S.size();

    long long res = 0;
    // N - 1 箇所に + を挿入
    for (int bit = 0; bit < (1 << (N - 1)); bit++)
    {
        long long tmp = 0; // + がくるまでの値を保持
        for (int i = 0; i < N - 1; i++)
        {
            tmp *= 10;         // 次の桁なので１０倍
            tmp += S[i] - '0'; // 文字列のi番目を追加

            // + がきたら
            if (bit & (1 << i))
            {
                res += tmp; // 保持した値を足して
                tmp = 0;    // 保持した値をリセット
            }
        }

        // 最後の桁の処理
        tmp *= 10;
        tmp += S.back() - '0';
        res += tmp;
    }
    cout << res << endl;
}