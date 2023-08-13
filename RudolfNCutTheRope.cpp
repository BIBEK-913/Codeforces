#include <iostream>
using namespace std;
int main()
{
    int t, n, a, b, i, c;
    cin >> t;
    while (t--)
    {
        c = 0;
        cin >> n;
        while (n--)
        {
            cin >> a >> b;
            if (a > b)
                c++;
        }
        cout << c << endl;
    }
    return 0;
}