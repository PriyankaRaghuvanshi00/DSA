#include <iostream>
#include <algorithm>
using namespace std;
#include <vector>
int Recur(int N, int sum)
{
    if (sum == 1)
    {
        return N;
    }
    int k;
    if (sum / 10 != 0)
        k = sum;
    else
    {
        N++;
        k = N;
    }
    int s = 0;
    while (k)
    {
        int rem = k % 10;
        s += rem * rem;
        k = k / 10;
    }
    return Recur(N, s);
}

int main()
{
    int n;
    cin >> n;
    int sum = Recur(n + 1, 0);
    cout
        << sum;
}