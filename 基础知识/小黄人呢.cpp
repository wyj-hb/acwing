#include<iostream>
#include<vector>
#include<algorithm>
#include<map>//底层是红黑树,有序的 
#include<unordered_map>//底层是hash表,便于查询 
#include<queue>
#include<stack>
using namespace std;
/*
	3
	20 6
	15 5
	15 4
*/
//78
const int N = 1e5 + 40;
typedef pair<int,int> PIL;
typedef long long LL;
int n; 
PIL d[N];
bool mycompare(PIL d1,PIL d2)
{
	return d1.second < d2.second;
}
int main()
{
	scanf("%d",&n);
	int t,p;
	for(int i = 0;i<n;i++)
	{
		scanf("%d%d",&t,&p);
		d[i].first = t;//排队时间 
		d[i].second = p;//游玩时间 
	}
	sort(d,d+n,mycompare);
	//先完成小的
	LL sum = 0;
	LL res = 0;
	for(int i = 0;i<n;i++)
	{
	   res += d[i].first + sum + d[i].second;
	   sum+=d[i].second;
	} 
	printf("%lld",res);
	return 0;
} 
