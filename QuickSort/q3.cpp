#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 8, 6, 7, 5, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int idx1 = 0;
    int idx2 = 0;
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            if (idx1 == 0)
            {
                idx1 = i;
                idx2 = i + 1;
            }
            else
                idx2 = i+1;
        }
    }
    swap(arr[idx1], arr[idx2]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}