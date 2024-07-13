//#include<iostream>
//using namespace std;
///*
//5
//7
//3 8
//8 1 0
//2 7 4 4
//4 5 2 6 5
//*/
///*
//    30
//*/
//const int N = 510,inf = 0x3f3f3f3f;
//int d[N][N];
//int n;
//int res[N][N];
//int main()
//{
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= i; j++)
//        {
//            cin >> d[i][j];
//        }
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 0; j <= i +1; j++)
//        {
//            res[i][j] = -inf;
//        }
//    }
//    res[1][1] = d[1][1];
//    for (int i = 2; i <= n; i++)
//    {
//        for (int j = 1; j <= i; j++)
//        {
//            res[i][j] = max(res[i - 1][j - 1], res[i - 1][j]) + d[i][j];
//        }
//    }
//    int ret = -inf;
//    for (int i = 1; i <= n; i++) ret = max(ret, res[n][i]);
//    cout <<ret;
//}