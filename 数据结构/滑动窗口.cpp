//#include<iostream>
//#include<vector>
//using namespace std;
//const int N = 100100;
////�����д�ŵ����±�
//int que[N], tt = 0, hh = 0;
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//	vector<int> data;
//	int num;
//	//�����ݷ��뵽������
//	for (int i = 0; i < n; i++)
//	{
//		cin >> num;
//		data.push_back(num);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (hh <= tt && i - k + 1 > que[hh])
//		{
//			//hh��������
//			hh++;
//		}
//		//ÿ�������С��,��β������Ԫ�ش����޳�ͷ֮��
//		while (hh <= tt && data[que[tt]] >= data[i])
//		{
//			tt--;
//		}
//		//��������ӷ������
//		que[++tt] = i; 
//		if(i >= k-1) cout << data[que[hh]] << endl;
//		//��ջ
//	}
//}