//#include<iostream>
//#include<vector>
//using namespace std;
//const int N = 100100;
////队列中存放的是下标
//int que[N], tt = 0, hh = 0;
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//	vector<int> data;
//	int num;
//	//将数据放入到容器中
//	for (int i = 0; i < n; i++)
//	{
//		cin >> num;
//		data.push_back(num);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (hh <= tt && i - k + 1 > que[hh])
//		{
//			//hh滑出窗口
//			hh++;
//		}
//		//每次输出最小的,队尾比输入元素大永无出头之日
//		while (hh <= tt && data[que[tt]] >= data[i])
//		{
//			tt--;
//		}
//		//必须先入队否则空了
//		que[++tt] = i; 
//		if(i >= k-1) cout << data[que[hh]] << endl;
//		//入栈
//	}
//}