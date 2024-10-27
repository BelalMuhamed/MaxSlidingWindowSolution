#include <iostream>
using namespace std;
int MaxWindowSum(int arr[], int size, int k)
{
    int Window = 0;
    for (int Win = 0;Win < k;Win++)
    {
        Window += arr[Win];
    }
    int sum = Window;
    for (int i = 1;i < size - k + 1;i++)
    {
       
        sum = sum - arr[i - 1] + arr[i + k - 1];
        Window = max(sum, Window);
    }
    return Window;
}
int main()
{
    int arr[5] = { 1,2,3,4,5 };
    cout << MaxWindowSum(arr, 5, 2);
}

