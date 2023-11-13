#include <iostream>
using namespace std;
int main()
{
    int t, n, k, c = 0, i, min = 0, anomaly = 0;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        c = 0;
        int *arr1 = new int[n];
        int *arr2 = new int[n - 1];
        for (i = 0; i < n; i++)
        {
            cin >> arr1[i];
            if (i > 0)
            {
                arr2[c] = abs(arr1[i] - arr1[i - 1]);
                c++;
            }
        }
        for (i = 0; i <= c; i++)
        {
            if (i > 0 && arr2[i - 1] < arr2[i])
            {
                anomaly++;
                swap(arr2[i - 1], arr2[i]);
            }
        }
        for (i = 0; i <= c; i++)
        {
            if (i <= k - 2)
                continue;
            else
                min += arr2[i];
        }
        cout << min;
        delete[] arr1;
        delete[] arr2;
    }
    return 0;
}