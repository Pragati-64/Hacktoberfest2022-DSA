// #include<bits/stdc++.h>
// using namespace std;
// void move(vector<int>& arr)
// {
//     sort(arr.begin(),arr.end());
// }
// int main()
// {
//     vector<int> arr = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
//     move(arr);
//     for (int e : arr)
//        cout<<e << " ";
//     return 0;
// }


// another process: 
#include <bits/stdc++.h>
using namespace std;
void rearrange(int arr[], int n)
{
	int j = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) {
			if (i != j)
				swap(arr[i], arr[j]);
			j++;
		}
	}
}
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
}
int main()
{
	int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
	int n = sizeof(arr) / sizeof(arr[0]);
	rearrange(arr, n);
	printArray(arr, n);
	return 0;
}
