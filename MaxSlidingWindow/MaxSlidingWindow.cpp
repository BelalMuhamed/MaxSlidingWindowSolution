#include <iostream>
using namespace std;
int MaxWindow(int arr[],int size,int k)
{
	
	int max = 0;
	for (int i = 0;i < size - k+1;i++)
	{
		int sum = 0;

		for (int n = 0;n < k;n++)
		{
			sum += arr[n+i];
		}
		if (max == 0 || max < sum)
			max = sum ;
	}
	return max;
}
int main()
{
	int arr[6] = { 1,2,3,4,5,6 };
	int maxWindow=MaxWindow(arr, 6, 2);
	cout << maxWindow;
}

