#include<iostream>
using namespace std;
/*
	9
	1 2
	1 7
	1 4
	2 8
	2 5
	4 3
	3 9
	4 6
*/
/*
	4
*/
//const int N = 100010;
////ʹ���ڽ�����ķ�����ʾͼ
//int e[N], ne[N];
//int idx = 1;
////h[N]�洢���ڵ�
//int h[N];
//int ans = N;
//bool pd[N];
//int n;
////��a��Ϊͷ���������ϲ�����bΪֵ�Ľڵ�
//void add(int a, int b)
//{
//	e[idx] = b; ne[idx] = h[a]; h[a] = idx++;
//}
//int dfs(int nn)
//{
//	//�ҵ��Ըõ�Ϊ����,ɾ���������ͨ���е�����ֵ��С���Ǹ���
//	int res = 0; int sum = 1;
//	pd[nn] = 1;
//	//����,�ݹ�
//	for (int i = h[nn]; i != -1; i = ne[i])
//	{
//		int j = e[i];
//		if (!pd[j])
//		{
//			//δ�����ʹ�
//			int s1 = dfs(j);
//			res = max(s1, res);
//			sum += s1;
//		}
//	}
//	res = max(res, n - sum);
//	ans = min(res, ans);
//	return sum;
//}
//int main()
//{
//	cin >> n;
//	//����ͼ
//	int a, b;
//	memset(ne, -1,sizeof ne);
//	for(int i = 0;i<n-1;i++)
//	{
//		cin >> a >> b;
//		add(a, b);
//	}
//	dfs(1);
//	cout << ans << endl;
//}