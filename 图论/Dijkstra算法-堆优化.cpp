//#include<iostream>
//#include<queue>
//using namespace std;
////ʹ�ö����Ż�dijkstra�㷨,���������ܶ�ʱ,���ط������Ӷȹ���,����ʹ�öѽ����Ż�
///*
//	3 3
//	1 2 2
//	2 3 1
//	1 3 4
//*/
//
///*
//	3
//*/
//const int N = 100010;
//typedef pair<int,int> PIL;
//int n, m;
////��¼����ڵ��Ƿ񱻷��ʹ�
//bool st[N];
////����·
//int e[N], ne[N],h[N],w[N],dist[N];
//int idx = 1;
//void add(int a, int b, int c)
//{
//	e[idx] = b; w[idx] = c; ne[idx] = h[a]; h[a] = idx++;
//}
////���·�����ظ��ߺͻ�û����
//int dijkstra()
//{
//	//�������ȶ���
//	priority_queue<PIL, vector<PIL>, greater<PIL>> p;
//	dist[1] = 0;
//	//��һ��λ��Ϊdistance,�ڶ���λ��Ϊ���
//	p.push({ 0,1 });
//	while (p.size())
//	{
//		auto data = p.top();
//		p.pop();
//		//ѭ������:���в�Ϊ��
//		int dis = data.first;
//		int idx = data.second;
//		if (st[idx]) continue;
//		st[idx] = 1;
//		for (int i = h[idx]; i != 0; i = ne[i])
//		{
//			//i��idx,������ʵ���±�,dd����ʵ���±�
//			int dd = e[i];//ȡ����Ӧ�Ľڵ��±�
//			if (dist[dd] > w[i] + dis)//idxΨһ��Ӧһ����,���iҲ����Ψһ��Ӧһ����
//			{
//				dist[dd] = w[i] + dis;
//				//����
//				p.push({ w[i] + dis, dd });
//			}
//		}
//	}
//	if (dist[n] == 0x3f3f3f3f)
//	{
//		return -1;
//	}
//	else
//	{
//		return dist[n];
//	}
//}
//int main()
//{
//	cin >> n >> m;
//	int a, b, c;
//	memset(dist, 0x3f, sizeof dist);
//	while (m--)
//	{
//		cin >> a >> b >> c;
//		//ȥ���ظ���
//		add(a, b, c);
//	}
//    a = dijkstra();
//	cout << a << endl;
//}