#include <bits/stdc++.h>
using namespace std;
class QuickSort
{
public:
    void swap(int *a, int *b)
    {
        int t = *a;
        *a = *b;
        *b = t;
    }
    int partition(int arr[], int l, int r)
    {
        int pi = arr[r];
        int i = i - 1;
        for (int j = l; j < r; j++)
        {
            if (arr[j] < pi)
            {
                i++;
                swap(&arr[i], &arr[j]);
            }
        }
        swap(&arr[i + 1], &arr[r]);
        return (i + 1);
    }
    void quickSort(int arr[], int l, int r)
    {
        if (l < r)
        {
            int pi = partition(arr, l, r);
            quickSort(arr, l, pi - 1);
            quickSort(arr, pi + 1, r);
        }
    }
};
int main()
{
    QuickSort q;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    q.quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
