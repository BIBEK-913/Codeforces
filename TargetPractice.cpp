#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int t, i, j, score;
    cin >> t;
    while (t--)
    {
        vector<vector<char>> arr(10, vector<char>(10, 0));
        score = 0;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 10; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == 'X')
                {
                    if (((j >= 0) && (i == 0 || i == 9)) || ((i >= 0) && (j == 0 || j == 9)))
                        score++;
                    else if (((j >= 1 && j <= 8) && (i == 1 || i == 8)) || ((i >= 1 && i <= 8) && (j == 1 || j == 8)))
                        score += 2;
                    else if (((j >= 2 && j <= 7) && (i == 2 || i == 7)) || ((i >= 2 && i <= 7) && (j == 2 || j == 7)))
                        score += 3;
                    else if (((j >= 3 && j <= 6) && (i == 3 || i == 6)) || ((i >= 3 && i <= 6) && (j == 3 || j == 6)))
                        score += 4;
                    else
                        score += 5;
                }
            }
        }
        cout << score << endl;
    }
    return 0;
}