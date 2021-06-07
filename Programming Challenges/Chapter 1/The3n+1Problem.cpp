#include <iostream>

using namespace std;

int pro(int k)
{
    int cnt = 0;
    while (1)
    {
        cnt++;
        if (k == 1)
            return cnt;
        if (k % 2 == 1)
            k = 3 * k + 1;
        else
            k = k / 2;
    }
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int a, b, t, ans = 0;
    while (cin >> a >> b)
    {
        int a1, b1;
        a1 = min(a, b);
        b1 = max(a, b);
        cout << a << " " << b << " ";
        for (int i = a1; i <= b1; i++)
        {
            t = pro(i);
            ans = max(ans, t);
        }
        cout << ans << endl;
        ans = 0;
    }
    return 0;
}
