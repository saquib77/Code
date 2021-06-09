#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> rearrangeNum(vector<int> nums)
    {
        int key, j;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] > 0)
                continue;
            key = nums[i];
            j = i - 1;
            while (j >= 0 && nums[j] > 0)
            {
                nums[j + 1] = nums[j];
                j--;
            }
            nums[j + 1] = key;
        }
        return nums;
    }
    void merge(int nums[], int l, int m, int r)
    {
        int i, j, k;
        int n1 = m - l + 1;
        int n2 = r - m;
        int l1[n1], l2[n2];
        for (i = 0; i < n1; i++)
            l1[i] = nums[l + i];
        for (j = 0; j < n2; j++)
            l2[j] = nums[m + 1 + j];
        i = j = 0;
        k = l;
        while (i < n1 && l1[i] < 0)
            nums[k++] = l1[i++];

        while (j < n2 && l1[j] < 0)
            nums[k++] = l2[j++];

        while (i < n1)
            nums[k++] = l1[i++];
        while (j < n2)
            nums[k++] = l2[j++];
    }
    void rearrange(int arr[], int l, int r)
    {
        if (l < r)
        {
            int m = l + (r - l) / 2;
            rearrange(arr, l, m);
            rearrange(arr, m + 1, r);
            merge(arr, l, m, r);
        }
    }
};
int main()
{
    Solution s;
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
        cin >> v[i];
    s.rearrange(v, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
    return 0;
}