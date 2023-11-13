#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t, i, j, r, c;
    string arr[8][8];
    string w = "";
    cin >> t;
    while (t--)
    {
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 8; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] != ".")
                {
                    r = i;
                    c = j;
                }
            }
        }
        j = c;
        for (i = r; i < 8; i++)
        {
            if (arr[i][j] != ".")
                w = w + arr[i][j];
        }
        cout << w;
        w = "";
    }
    return 0;
}