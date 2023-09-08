#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int t, a, b;
    float c, k, steps;
    cin >> t;
    while (t--)
    {
        k = 0.0;
        steps = 0.0;
        cin >> a >> b >> c;
        if (a == b)
            cout << "0" << endl;
        else
        {
            k = abs(a - b);
            steps = k / (2 * c);
            if (k < c)
                cout << "1" << endl;
            else if (steps == (int)steps)
                cout << (int)steps << endl;
            else if (steps != (int)steps)
            {
                steps++;
                cout << (int)steps << endl;
            }
        }
    }
    return 0;
}