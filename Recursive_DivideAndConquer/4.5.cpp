#include <iostream>
using namespace std;

void func(int N, int num, int use, long long &count)
{
    if (num > N)
        return;

    if (use == 0b111)
    {
        count++;
    }

    // 0b001: 7 が含まれるかのフラグ
    // 0b010: 5 が含まれるかのフラグ
    // 0b100: 3 が含まれるかのフラグ
    func(N, num * 10 + 7, use | 0b001, count); // 7 追加
    func(N, num * 10 + 5, use | 0b010, count); // 5 追加
    func(N, num * 10 + 3, use | 0b100, count); // 3 追加
}

int main()
{
    int N;
    cin >> N;
    long long count = 0;
    func(N, 0, 0, count);
    cout << count << endl;
    return 0;
}
