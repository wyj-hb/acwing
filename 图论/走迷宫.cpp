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
////grid����ô洢����
//int grid[N][N];
////������Ҫά��һ������,ʹ��������ģ��
//PIL queue[N * N];
////ά������
//int dis[N][N];
////���Ҫ���ǵ�λ��,ֻ�����ĸ�λ��
//int dx[] = {-1,0,1,0};
//int dy[] = {0,1,0,-1};
//int n, m;
////bfs�ĺô��ǿ��Լ�¼ÿһ���ľ���
//void bfs()
//{
//	queue[1] = { 1,1 };
//	int res = INT_MAX;
//	int tt = 1,hh = 1;
//	dis[1][1] = 0;
//	//�ռ��㹻��,tt>hhʱ��ʾ���п���
//	while (hh <= tt)
//	{
//		//����
//		PIL data = queue[hh++];
//		for (int i = 0; i < 4; i++)
//		{
//			int x = data.first;
//			int y = data.second;
//			if (x + dx[i] > n || y + dy[i] > m || x + dx[i] <= 0 || y+dy[i]<=0)
//			{
//				//Խ������һ��
//				continue;
//			}
//			if (grid[x + dx[i]][y + dy[i]] == 0 )
//			{
//				//������
//				grid[x + dx[i]][y + dy[i]] = 1;
//				dis[x + dx[i]][y + dy[i]] += dis[x][y] + 1;
//				//���
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