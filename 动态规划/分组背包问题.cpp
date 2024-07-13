//#include<iostream>
//using namespace std;
//const int N = 110;
//int a, b;
//int cnt[N], v[N][N], w[N][N];
//int res[N];
//int main()
//{
//    cin >> a >> b;
//    for (int i = 1; i <= a; i++)
//    {
//        cin >> cnt[i];
//        for (int j = 1; j <= cnt[i]; j++)
//        {
//            //体积和价值
//            cin >> v[i][j] >> w[i][j];
//        }
//    }
//    //dp
//    for (int i = 1; i <= a; i++)
//    {
//        for (int j = b; j >= 0; j--)
//        {
//            //遍历每一组数据
//            for (int c = 1; c <= cnt[i]; c++)
//            {
//                if (v[i][c] <= j)
//                {
//                    res[j] = max(res[j], res[j - v[i][c]] + w[i][c]);
//                }
//            }
//        }
//    }
//    cout << res[b];
//}