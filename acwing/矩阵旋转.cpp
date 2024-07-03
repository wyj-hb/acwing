////给定一个正整数 n，生成一个包含 1 到 n ^ 2 所有元素，且元素按顺时针顺序螺旋排列的正方形矩阵。
////示例 :
////输入: 3 输出 : [[ 1, 2, 3 ], [8, 9, 4], [7, 6, 5]]
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int n = 3;
//	vector<vector<int>> data(n, vector<int>(n, 0));
//	int num = n / 2;
//	int startx = 0;
//	int starty = 0;
//	int offset = 1;
//	int count = 1;
//	while (num--)
//	{
//		for (int j = starty;j<n - offset;j++)
//		{
//			data[startx][j] = count++;
//		}
//		for (int i = startx;i<n - offset;i++)
//		{
//			data[i][n - offset] = count++;
//		}
//		for (int j = n-offset;j>starty;j--)
//		{
//			data[n - offset][j] = count++;
//		}
//		for (int i = n - offset; i > starty; i--)
//		{
//			data[i][starty] = count++;
//		}
//		offset++;
//		startx++;
//		starty++;
//	}
//	if (n%2 != 0)
//	{
//		data[n / 2][n / 2] = count++;
//	}
//	for (auto a1 : data)
//	{
//		for (auto a2 : a1)
//		{
//			cout << a2<<" ";
//		}
//		cout << endl;
//	}
//}