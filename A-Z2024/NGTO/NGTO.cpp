// debai n có phải sngto?
#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    //freopen("NGTO.inp","r",stdin);
    //freopen("NGTO.out","w",stdout);
    cin >> n;
    if (n < 2)
    {
        cout << 0;
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << 0;
            return 0;
        }
    }
    cout << 1;
    return 0;
}
