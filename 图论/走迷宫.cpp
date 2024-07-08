#include<iostream>
using namespace std;
/*
	5 5
	0 1 0 0 0
	0 1 0 1 0
	0 0 0 0 0
	0 1 1 1 0
	0 0 0 1 0
*/

/*
	8
*/
//typedef pair<int, int> PIL;
//const int N = 101;
////grid表格用存储矩阵
//int grid[N][N];
////广搜需要维护一个队列,使用数组来模拟
//PIL queue[N * N];
////维护距离
//int dis[N][N];
////设计要考虑的位置,只能走四个位置
//int dx[] = {-1,0,1,0};
//int dy[] = {0,1,0,-1};
//int n, m;
////bfs的好处是可以记录每一步的距离
//void bfs()
//{
//	queue[1] = { 1,1 };
//	int res = INT_MAX;
//	int tt = 1,hh = 1;
//	dis[1][1] = 0;
//	//空间足够大,tt>hh时表示队列空了
//	while (hh <= tt)
//	{
//		//出队
//		PIL data = queue[hh++];
//		for (int i = 0; i < 4; i++)
//		{
//			int x = data.first;
//			int y = data.second;
//			if (x + dx[i] > n || y + dy[i] > m || x + dx[i] <= 0 || y+dy[i]<=0)
//			{
//				//越界了下一个
//				continue;
//			}
//			if (grid[x + dx[i]][y + dy[i]] == 0 )
//			{
//				//可以走
//				grid[x + dx[i]][y + dy[i]] = 1;
//				dis[x + dx[i]][y + dy[i]] += dis[x][y] + 1;
//				//入队
//				queue[++tt] = { x + dx[i],y + dy[i] };
//			}
//		}
//	}
//	cout <<dis[n][m];
//}
//int main()
//{
//	
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> grid[i][j];
//		}
//	}
//	bfs();
//}