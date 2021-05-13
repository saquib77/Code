#include <bits/stdc++.h>
using namespace std;
void heapSort(int arr[], int n)
{
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
    heapSort(arr, n);
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}