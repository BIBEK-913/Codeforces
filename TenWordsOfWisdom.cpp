#include <iostream>
using namespace std;
int main()
{
    int t, n, i, a, b, max, winner;
    cin >> t;
    while (t--)
    {
        max = 0;
        winner = 0;
        cin >> n;
        for (i = 1; i <= n; i++)
        {
            cin >> a >> b;
            if (a <= 10 && b > max)
            {
                max = b;
                winner = i;
            }
        }
        cout << winner << endl;
    }
    return 0;
}