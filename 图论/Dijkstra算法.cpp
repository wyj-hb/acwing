//#include<iostream>
//using namespace std;
/*
	3 3
	1 2 2
	2 3 1
	1 3 4
*/

/*
	3
*/
//const int N = 501;
//int n, m;
////����
//int dis[N][N];
////���ּ���
//bool s[N];
//int min_dis[N];
//void dijkstra()
//{
//	//����ڼ����е�ֻ�е�һ���ڵ�
//	min_dis[1] = 0;
//	//�ҵ�Ŀ��ڵ�
//	for (int i = 1; i < n; i++)
//	{
//		int t = -1;
//		//��һ��Ҫ�ӵ�һ���ڵ㿪ʼ
//		for (int j = 1; j <= n; j++)
//		{
//			//���������ڼ����еĵ�
//			if (!s[j] && ( t==-1 ||min_dis[j] < min_dis[t]))
//			{
//				//������С��
//				t = j;
//			}
//		}
//		//���뵽������
//		s[t] = 1;
//		//��t�����ȥ����
//		for (int j = 2; j <= n; j++)
//		{
//			min_dis[j] = min(min_dis[j], min_dis[t] + dis[t][j]);
//		}
//	}
//	if (min_dis[n] == 0x3f3f3f3f)
//	{
//		cout << "-1" << endl;
//	}
//	else
//	{
//		cout << min_dis[n];
//	}
//}
//int main()
//{
//	cin >> n >> m;
//	int a, b, c;
//	memset(min_dis, 0x3f, sizeof min_dis);
//	memset(dis,0x3f,sizeof dis);
//	for (int i = 0; i < m; i++)
//	{
//		cin >> a >> b >> c;
//		//���ظ���ȡ��С��
//		dis[a][b] = min(dis[a][b], c);
//	}
//	dijkstra();
//}