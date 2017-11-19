#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    cout << ((N - M)*100 + 1900*M)*pow(2,M) << endl;
    return 0;
}