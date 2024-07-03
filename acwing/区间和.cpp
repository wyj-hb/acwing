//#include<bits/stdc++.h>
//using namespace std;
//const int N = 300100;
////a存储原始数据,b存储对应的前缀和
//int a[N], b[N];
////alls存储所有设计到的下标
//vector<int> alls;
////定义所有的插入数据对的形式
//typedef pair<int, int> PIL;
////添加操作和查询操作
//vector<PIL> add, query;
//int find(int x)
//{
//	//返回数据在alls数组中的下标
//	int l = 0, r = alls.size() - 1;
//	//二分查找
//	while (l < r)
//	{
//		int mid = (l + r ) >> 1;
//		if (x <= alls[mid]) r = mid;
//		else
//		{
//			//前缀和从1开始,所以这里数据需要加1
//			l = mid + 1;
//		}
//	}
//	return l+1;
//}
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		//输入x和c,在坐标为x的位置上加c
//		int x, c;
//		cin >> x >> c;
//		add.push_back(make_pair(x, c));
//		alls.push_back(x);
//	}
//	for (int i = 0; i < m; i++)
//	{
//		//输入l和r,获取[l,r]区间上的数据的和
//		int l, r;
//		cin >> l >> r;
//		query.push_back(make_pair(l, r));
//		alls.push_back(l);
//		alls.push_back(r);
//	}
//	//去重操作
//	sort(alls.begin(), alls.end());
//	alls.erase(unique(alls.begin(), alls.end()), alls.end());
//	//处理插入
//	for (auto item : add)
//	{
//		//找到数据对应的下标
//		int x = find(item.first);
//		a[x] += item.second;
//	}
//	//处理前缀和
//	for (int i = 1; i <= alls.size(); i++) b[i] = a[i] + b[i - 1];
//	//处理查询
//	for (auto item : query)
//	{
//		int x1 = find(item.first);
//		int x2 = find(item.second);
//		cout << b[x2] - b[x1 - 1] << endl;
//	}
//}