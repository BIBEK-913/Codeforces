#include <iostream>
using namespace std;
int main()
{
    int n, p, v, t, c = 0;
    cin >> n;
    while (n--)
    {
        cin >> p >> v >> t;
        if (p + v + t > 1)
            c++;
    }
    cout << c;
    return 0;
}