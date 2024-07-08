#include<iostream>
#include<string>
#include<queue>
#include<unordered_map>
using namespace std;
/*	
	1 2 3
	x 4 6
	7 5 8
*/

/*
	3
*/
//string target = "12345678x";
//string d;
//queue<string> q;
//int dx[] = {-1,0,1,0};
//int dy[] = {0,1,0,-1};
////记录得到每个字符串的交换次数
//unordered_map<string, int> dis;
//int solve()
//{
//	q.push(d);
//	dis[d] == 0;
//	while (!q.empty())
//	{
//		//不为空
//		auto front = q.front();
//		q.pop();
//		int k = front.find('x');
//		//找到目标
//		if (front == target)
//		{
//			return dis[target];
//		}
//		//转成对应的二维坐标
//		int x = k / 3; int y = k % 3;
//		for (int i = 0; i < 4; i++)
//		{
//			if (x + dx[i] > 2 || y + dy[i] > 2 || x + dx[i] < 0 || y + dy[i] < 0)
//			{
//				//越界了下一个
//				continue;
//			}
//			string ss = front;
//			swap(ss[x * 3 + y], ss[(x + dx[i])* 3 + y + dy[i]]);
//			if (!dis[ss])
//			{
//				//没被访问过
//				dis[ss] += dis[front] + 1;
//				//入队
//				q.push(ss);
//			}
//		}
//	}
//	return -1;
//}
//int main()
//{
//	char c;
//	for (int i = 1; i < 4; i++)
//	{
//		for (int j = 1; j < 4; j++)
//		{
//			cin >>c;
//			d += c;
//		}
//	}
//	int data = solve();
//	cout << data;
//}