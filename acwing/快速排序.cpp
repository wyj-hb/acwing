//#include<iostream>
//using namespace std;
//void quick_sort(int arr[], int l, int r)
//{
//	if (l >= r)
//	{
//		return;
//	}
//	else
//	{
//		int i = l - 1; int j = r + 1; int data = arr[l];
//		while (i < j)
//		{
//			do i++; while (arr[i] < data);
//			do j--; while (arr[j] > data);
//			if (i < j)
//			{
//				swap(arr[i], arr[j]);
//			}
//		}
//		quick_sort(arr, l, j);
//		quick_sort(arr, j + 1, r);
//	}
//}
//int main()
//{
//	int data[] = { 6,10,1,2,4,5 };
//	int length = (sizeof(data) / sizeof(data[0])) - 1;
//	quick_sort(data, 0,length );
//	for (int i = 0; i <= length; i++)
//	{
//		cout << data[i] << " ";
//	}
//}
