//#include<iostream>
//using namespace std;
//const int N = 100100;
//int ne[N];
//int main()
//{
//	int n1, n2;
//	string s1, s2;
//	cin >> n1 >> s1 >> n2 >> s2;
//	//���next����
//	for (int i = 2, j = 0; i <= n2; i++)
//	{
//		while (j && s2[i] != s2[j]) j = ne[j-1];
//		if (s2[i] == s2[j]) j++;//j++��λ�����¿�ʼ����,��ʱi��jǰ��ͬ�����������
//		ne[i] = j;
//	}
//	//ƥ��
//	for (int i = 0, j = 0; i < n1; i++)
//	{
//		//��ͷ��ʼƥ���Ӵ�
//		while (j && s1[i] != s2[j]) j = ne[j-1];
//		if (s1[i] == s2[j]) j++;
//		if (j == n2)
//		{
//			cout << i << endl;
//			break;
//		}
//	}
//}