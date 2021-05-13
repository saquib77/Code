#include <bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int n)
{
    for (size_t i = 0; i < n - 1; i++)
    {
        for (size_t j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int t = arr[j];
                arr[j] = arr[i];
                arr[i] = t;
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selectionSort(arr, n);
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}