//#include<iostream>
//using namespace std;
///*
//*	˼��:��һ�����Ŀռ����洢����,���ٳ�ͻ,��ʹ��һ���������ݷ�Χ���������,�����λ��δ��ʹ��
//*/
//const int N = 100010;
//const int INF = 0x3f3f3f3f;
//int h[N];
//int find(int data)
//{
//	//��������,����������������:һ�Ǹ�����δ����,������Ӧ�ñ���������ݵ�λ�á�
//	//                          ���Ǹ����ݱ�����,�������Ӧ��λ��
//	int k = (data % N + N) % N;
//	while (h[k] != INF && h[k] != data)
//	{
//		//��ֹ����:����INF���߸�λ�ô洢��������Ŀ��ֵ��ͬ
//		k++;
//		if (k == N)
//		{
//			k = 0;
//		}
//	}
//	return k;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	memset(h,0x3f, sizeof h);
//	int data; char c;
//	while (n--)
//	{
//		cin >> c >> data;
//		int re = find(data);
//		if (c == 'I')
//		{
//			//����ǲ���,���ʱ���صľ���Ӧ�ò����λ��,
//			h[re] = data;
//		}
//		else
//		{
//			//��ѯ,�ж�
//			if (h[re] != INF)
//			{
//				//��ʾ���ҵ����ݷ��ص�
//				cout << "Yes" << endl;
//			}
//			else
//			{
//				cout << "No" << endl;
//			}
//		}
//	}
//}