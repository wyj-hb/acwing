//#include<iostream>
//using namespace std;
////�ж�target�Ƿ���num��,�����򷵻��±�,�������򷵻�-1
//int getdata(int num[],int target,int size)
//{
//	int left = 0;
//	int right = size - 1;
//	//��Ϊ�������õ�������ұգ����������ǿ��Ե��ڵ�
//	while (left <= right)
//	{
//		int middle = (left + right) / 2;
//		if (num[middle] > target)
//		{
//			right = middle - 1;
//		}
//		else if (num[middle] < target)
//		{
//			left = middle + 1;
//		}
//		else
//		{
//			return middle;
//		}
//	}
//	return -1;
//}
//int main() 
//{
//	int num[] = { 1,2,4,5,6,7,8,10 };
//	//��������ĳ���
//	int size = sizeof(num) / sizeof(num[0]);
//	int a  = getdata(num, 15, size);
//	cout << a << endl;
//}
