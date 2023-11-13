#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int t, n, m, c, i, j;
    cin >> t;
    while (t--)
    {
        c = 0;
        cin >> n >> m;
        vector<vector<string>> carpet(n, vector<string>(m));
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                cin >> carpet[i][j];
            }
        }
        for (j = 0; j < m; j++)
        {
            for (i = 0; i < n; i++)
            {
                if (carpet[i][j] == "v")
                {
                    c++;
                    break;
                }
                if (carpet[i][j] == "i" && c == 1)
                {
                    c++;
                    break;
                }
                if (carpet[i][j] == "k" && c == 2)
                {
                    c++;
                    break;
                }
                if (carpet[i][j] == "a" && c == 3)
                {
                    c++;
                }
            }
        }
        c == 4 ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}