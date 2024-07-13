//#include<iostream>
//using namespace std;
//const int N = 110;
//int a, b;
//int res[N];
//int main()
//{
//    cin >> a >> b;
//    int v, w, k;
//    for (int i = 1; i <= a; i++)
//    {
//        cin >> v >> w >> k;
//        for (int j = b; j >= 0; j--)
//        {
//            for (int e = 0; e <= k && j - e * v >= 0; e++)
//            {
//                res[j] = max(res[j], res[j - v * e] + e * w);
//            }
//        }
//    }
//    cout << res[b];
//}