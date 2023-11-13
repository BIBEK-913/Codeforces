#include <iostream>
using namespace std;
int main()
{
    int t, x, y, k;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> k;
        if (y < x)
            cout << x << endl;
        else if (y > x && y - x <= k)
            cout << y << endl;
        else if (y > x && y - x > k)
            cout << 2 * y - (x + k) << endl;
    }
    return 0;
}