//#include<bits/stdc++.h>
//using namespace std;
//const int N = 300100;
////a�洢ԭʼ����,b�洢��Ӧ��ǰ׺��
//int a[N], b[N];
////alls�洢������Ƶ����±�
//vector<int> alls;
////�������еĲ������ݶԵ���ʽ
//typedef pair<int, int> PIL;
////��Ӳ����Ͳ�ѯ����
//vector<PIL> add, query;
//int find(int x)
//{
//	//����������alls�����е��±�
//	int l = 0, r = alls.size() - 1;
//	//���ֲ���
//	while (l < r)
//	{
//		int mid = (l + r ) >> 1;
//		if (x <= alls[mid]) r = mid;
//		else
//		{
//			//ǰ׺�ʹ�1��ʼ,��������������Ҫ��1
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
//		//����x��c,������Ϊx��λ���ϼ�c
//		int x, c;
//		cin >> x >> c;
//		add.push_back(make_pair(x, c));
//		alls.push_back(x);
//	}
//	for (int i = 0; i < m; i++)
//	{
//		//����l��r,��ȡ[l,r]�����ϵ����ݵĺ�
//		int l, r;
//		cin >> l >> r;
//		query.push_back(make_pair(l, r));
//		alls.push_back(l);
//		alls.push_back(r);
//	}
//	//ȥ�ز���
//	sort(alls.begin(), alls.end());
//	alls.erase(unique(alls.begin(), alls.end()), alls.end());
//	//�������
//	for (auto item : add)
//	{
//		//�ҵ����ݶ�Ӧ���±�
//		int x = find(item.first);
//		a[x] += item.second;
//	}
//	//����ǰ׺��
//	for (int i = 1; i <= alls.size(); i++) b[i] = a[i] + b[i - 1];
//	//�����ѯ
//	for (auto item : query)
//	{
//		int x1 = find(item.first);
//		int x2 = find(item.second);
//		cout << b[x2] - b[x1 - 1] << endl;
//	}
//}