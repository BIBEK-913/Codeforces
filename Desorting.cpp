#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t, n, min = 0;
    vector<int> arr;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            arr.push_back(num);
        }
        if (n == 1)
            cout << "0" << endl;
        else
        {
            for (int i = 1; i < arr.size(); i++)
            {
                int dif = 0;
                dif = arr[i] - arr[i - 1];
                if (i == 1)
                    min = dif;
                else if (dif < min)
                    min = dif;
            }
            if (min < 0)
                cout << "0" << endl;
            else if (min == 0)
                cout << "1" << endl;
            else
                cout << min / 2 + 1 << endl;
        }
        arr.clear();
        min = 0;
    }
    return 0;
}