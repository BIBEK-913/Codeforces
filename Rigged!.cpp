#include <iostream>
using namespace std;
int main()
{
    int t, n, s1, e1, s, e, c;
    cin >> t;
    while (t--)
    {
        c = 0;
        cin >> n;
        cin >> s1 >> e1;
        while (--n)
        {
            cin >> s >> e;
            if (s >= s1 && e >= e1)
                c++;
        }
        c ? cout << "-1" << endl : cout << s1 << endl;
    }
    return 0;
}