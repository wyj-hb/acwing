//#include<iostream>
//#include<queue>
//using namespace std;
///*
//	4 4
//	1 3
//	1 4
//	2 3
//	2 4
//*/

/*
	Yes
*/
//typedef pair<int, int> PIL;
//const int N = 100010;
//int n, m;
//int e[N], ne[N], h[N],color[N];
//int idx = 1;
//void judge()
//{
//	queue < PIL>  q;
//	//��ͼ����Ⱦɫ,������ֳ�ͻ������Ƕ���ͼ
//	q.push({ 1,0 });//1�Žڵ�Ⱦ0
//	while (q.size())
//	{
//		auto data = q.front();
//		q.pop();
//		int idx = data.first; int w = data.second;
//		for (int i = h[idx]; i != 0; i = ne[i])
//		{
//			int dd = e[i];
//			if (!color[dd])
//			{
//				//δ��Ⱦɫ��
//				color[dd] = 1 - w;
//				q.push({ dd,1 - w });//�������
//			}
//			else if (color[dd] == w)
//			{
//				cout << "No" << endl;
//				return;
//			}
//		}
//	}
//	cout << "Yes" << endl;
//	return;
//}
//void add(int a,int b)
//{
//	e[idx] = b; ne[idx] = h[a]; h[a] = idx++;
//}
//int main()
//{
//	cin >> n >> m;
//	int a, b;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> a >> b;
//		add(a, b); add(b, a);
//	}
//	judge();
//}