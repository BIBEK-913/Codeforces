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
            for (j = 0; j < 3; j++)
            {
                if (arr[i][j] == arr[i][j + 1] && arr[i][j + 1] == arr[i][j + 2] && arr[i][j] != '.')
                {
                    w = 1;
                    break;
                }
            }
            if (w == 1)
                break;
        }
        if (w == 1)
            cout << arr[i][j];
        else
        {
            for (j = 0; j < 3; j++)
            {
                for (i = 0; i < 3; i++)
                {
                    if (arr[i][j] == arr[i + 1][j] && arr[i + 1][j] == arr[i + 2][j] && arr[i][j] != '.')
                    {
                        w = 1;
                        break;
                    }
                }
                if (w == 1)
                    break;
            }
            if (w == 1)
                cout << arr[i][j];
            if (w == 0)
            {
                if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] != '.')
                {
                    w = 1;
                    cout << arr[0][0];
                }
                if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[0][2] != '.')
                {
                    w = 1;
                    cout << arr[0][2];
                }
                if (w == 0)
                    cout << "DRAW";
            }
        }
    }
    return 0;
}
