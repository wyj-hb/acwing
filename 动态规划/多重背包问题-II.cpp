//#include<iostream>
//using namespace std;
//const int N = 25000;
//int a, b;
//int res[N];
//int w[N], v[N];
////将背包拆分为小的背包
//int main()
//{
//    cin >> a >> b;
//    int vv, ww, kk;
//    int cnt = 0;
//    for (int i = 1; i <= a; i++)
//    {
//        cin >> vv >> ww >> kk;
//        int data = 1;
//        while (data <= kk)
//        {
//            cnt++;
//            w[cnt] = data * ww;
//            v[cnt] = data * vv;
//            kk -= data;
//            data = data * 2;
//        }
//        if (kk)
//        {
//            //存在剩余
//            cnt++;
//            w[cnt] = ww * kk;
//            v[cnt] = vv * kk;
//        }
//    }
//    //做一遍0/1背包
//    for (int i = 1; i <= cnt; i++)
//    {
//        for (int j = b; j >= v[i]; j--)
//        {
//            res[j] = max(res[j], res[j - v[i]] + w[i]);
//        }
//    }
//    cout << res[b];
//}