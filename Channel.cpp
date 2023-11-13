#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t, n, a, q, read, i;
    cin >> t;
    while (t--)
    {
        read = 0;
        cin >> n >> a >> q;
        vector<char> notif(q + 1);
        for (i = 0; i < q; i++)
        {
            cin >> notif[i];
        }
        read = count(notif.begin(), notif.end(), '+');
        if (read < n - a)
            cout << "NO" << endl;
        else
        {
            read = 0;
            if (notif[0] == '+')
                read++;
            for (i = 1; i <= q - 1; i++)
            {
                if (notif[i] == '+' && notif[i - 1] == '-')
                    ;
                else if (notif[i] == '-' && notif[i - 1] != '+')
                    read--;
                else if (notif[i] != '-')
                    read++;
            }
            if (read == n - a || n == a)
                cout << "YES" << endl;
            else
                cout << "MAYBE" << endl;
        }
        notif.clear();
    }
    return 0;
}