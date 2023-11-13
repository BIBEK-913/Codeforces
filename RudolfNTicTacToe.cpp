#include <iostream>
using namespace std;
int main()
{
    int t, i, j, w;
    char arr[3][3];
    cin >> t;
    while (t--)
    {
        w = 0;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                cin >> arr[i][j];
        }
        for (i = 0; i < 3; i++)
        {
            if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][0] != '.')
            {
                w = 1;
                break;
            }
        }
        if (w == 1)
            cout << arr[i][0] << endl;
        else
        {
            for (j = 0; j < 3; j++)
            {
                if (arr[0][j] == arr[1][j] && arr[1][j] == arr[2][j] && arr[0][j] != '.')
                {
                    w = 1;
                    break;
                }
            }
        if (w == 1)
            cout << arr[0][j] << endl;
        }
        if (w == 0)
        {
            if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] != '.')
            {
                w = 1;
                cout << arr[0][0] << endl;
            }
            if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[0][2] != '.')
            {
                w = 1;
                cout << arr[0][2] << endl;
            }
            if (w == 0)
                cout << "DRAW" << endl;
        }
    }
    return 0;
}