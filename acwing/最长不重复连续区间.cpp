//#include<iostream>
//#include<vector>
//using namespace std;
//const int Num = 100100;
//int store[Num],v[Num];//ȫ������δ��ʼ��ȫΪ0
//int main()
//{
//	int N;
//	cin >> N;
//	int data;
//	//��������
//	for(int i = 0;i<N;i++)
//	{
//		cin >> data;
//		v[i] = data;
//	}
//	//˫ָ�뷨
//	int slow = 0,res = 0;
//	for (int fast = 0; fast < N; fast++)
//	{
//		//��Ҫ��������ݳ����ظ�ֵ
//		while (store[v[fast]] > 0 && fast > slow)
//		{
//			store[v[slow]]--;
//			slow++;
//		}
//		store[v[fast]]++;
//		res = fast - slow + 1 > res ? fast - slow + 1 : res;
//	}
//	cout << "res:" << res << endl;
//}