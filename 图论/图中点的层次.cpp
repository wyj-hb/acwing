#include<iostream>
using namespace std;
/*
	4 5
	1 2
	2 3
	3 4
	1 3
	1 4
*/

/*
	1
*/
//const int N = 100010;
////ʹ���ڽ�����ķ�����ʾͼ
//int e[N], ne[N];
//int idx = 1;
////h[N]�洢���ڵ�
//int h[N];
////����
//int q[N];
////dis
//int dis[N];
//int n, m;
////��a��Ϊͷ���������ϲ�����bΪֵ�Ľڵ�
//void add(int a, int b)
//{
//	e[idx] = b; ne[idx] = h[a]; h[a] = idx++;
//}
//int bfs()
//{
//	//1�Žڵ������
//	q[0] = 1;
//	int hh = 0, tt = 0;
//	dis[1] = 0;
//	while (hh <= tt)
//	{
//		int data = q[hh++];
//		for (int i = h[data]; i !=0; i = ne[i])
//		{
//			int j = e[i];
//			if (dis[j] == -1)
//			{
//				dis[j] = dis[data] + 1;
//				q[++tt] = j;
//			}
//		}
//	}
//	return dis[n];
//}
//int main()
//{
//	cin >> n>>m;
//	int a, b;
//	memset(dis, -1, sizeof dis);
//	while (m--)
//	{
//		cin >> a >> b;
//		add(a, b);
//	}
//	int data = bfs();
//	cout << data << endl;
//}