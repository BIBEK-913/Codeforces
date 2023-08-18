#include <iostream>
using namespace std;
int main()
{
    int t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        if (a == b)
            c % 2 == 0 ? cout << "Second" << endl : cout << "First" << endl;
        else
            a > b ? cout << "First" << endl : cout << "Second" << endl;
    }
    return 0;
}