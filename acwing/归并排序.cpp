//#include<iostream>
//using namespace std;
//const int N = 100010;
//int temp[N];
//void merge_sort(int data[], int l,int r)
//{
//	if (l >= r) return;
//	int mid = l + r >> 1;
//	//�Ȼ��ֿռ�
//	merge_sort(data, l, mid);
//	merge_sort(data, mid + 1, r);
//	//�ٽ�������
//	int k = 0, i = l, j = mid + 1;//k Ϊtemp���±�,ÿ�δ�0��ʼ;i��jΪ�������ҵ���ʼλ��
//	while (i <= mid && j <= r)
//	{
//		if (data[i] < data[j]) temp[k++] = data[i++];
//		else temp[k++] = data[j++];
//	}
//	while (i <= mid) temp[k++] = data[i++];
//	while (j <= r) temp[k++] = data[j++];
//	for (i = l, j = 0; i <= r; i++, j++)
//	{
//		data[i] = temp[j];
//	}
//}
//
//
//int main()
//{
//	int data[] = { 6,10,1,2,4,5 };
//	int length = (sizeof(data) / sizeof(data[0])) - 1;
//	merge_sort(data, 0, length);
//	for (int i = 0; i <= length; i++)
//	{
//		cout << data[i] << " ";
//	}
//}