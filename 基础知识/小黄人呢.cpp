#include<iostream>
#include<vector>
#include<algorithm>
#include<map>//�ײ��Ǻ����,����� 
#include<unordered_map>//�ײ���hash��,���ڲ�ѯ 
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
		d[i].first = t;//�Ŷ�ʱ�� 
		d[i].second = p;//����ʱ�� 
	}
	sort(d,d+n,mycompare);
	//�����С��
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
