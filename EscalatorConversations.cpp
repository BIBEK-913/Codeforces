#include <iostream>
using namespace std;
int main()
{
    int t, n, m, k, H, h, c;
    cin >> t;
    while (t--)
    {
        c = 0;
        cin >> n >> m >> k >> H;
        while (n--)
        {
            cin >> h;
            if (abs(H - h) % k == 0 && abs(H - h) <= (m - 1) * k && H - h != 0)
                c++;
        }
        cout << c << endl;
    }
    return 0;
}