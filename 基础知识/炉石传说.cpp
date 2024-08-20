#include <bits/stdc++.h>
using namespace std;
/*
    8
    summon 1 3 6
    summon 2 4 2
    end
    summon 1 4 5
    summon 1 2 1
    attack 1 2
    end
    attack 1 1
 */
/*
*   0
    30
    1 2
    30
    1 2
 */
struct node {
    int health;//随从生命值
    int attck;//随从攻击力
    //构造函数
    node(int b,int c){
        attck = b;
        health = c;
    }
    //默认初始化
    node(){}
}l[2][8];
int n;
int cnt[2];
int main()
{
    //英雄初始值生命值为0
    l[0][0].health = 30;
    l[1][0].health = 30;
    string a;
    cin>>n;
    int idx,attack,health;
    //攻击方和被攻击方
    int a1,a2;
    //用于切换
    int flag = 0;
    while(n -- ) {
        //读入操作
        cin>>a;
        //交换操作方
        if(a == "end") {
            flag = 1 - flag;
        }
        //召唤
        else if(a == "summon") {
            cin>>idx>>attack>>health;
            if(l[flag][idx].health == 0 || idx == 7) {
                //直接插入
                l[flag][idx].attck = attack;
                l[flag][idx].health = health;
            }
            else {
                //移动,从第6位开始
                for(int i = 6;i >= idx;i--) {
                    //有士兵则移动
                    l[flag][i+1].health = l[flag][i].health;
                    l[flag][i+1].attck = l[flag][i].attck;
                }
                l[flag][idx].attck = attack;
                l[flag][idx].health = health;
            }
            cnt[flag]++;
        }
        //攻击
        else {
            cin>>a1>>a2;
            //攻击涉及到死亡
            //当前的a1攻击a2
            l[flag][a1].health -= l[1 - flag][a2].attck;
            l[1 - flag][a2].health -=l[flag][a1].attck;
            if(l[flag][a1].health <= 0) {
                //死亡,左移
                for(int i = a1+1;i <= 7;i++) {
                    //有士兵则移动
                    l[flag][i-1].health = l[flag][i].health;
                    l[flag][i-1].attck = l[flag][i].attck;
                }
                cnt[flag]--;
            }
            if(a2 != 0 && l[1 - flag][a2].health <= 0) {
                //死亡,左移
                for(int i = a2+1;i <= 7;i++) {
                    //有士兵则移动
                    l[1 - flag][i-1].health = l[1 - flag][i].health;
                    l[1 - flag][i-1].attck = l[1 - flag][i].attck;
                }
                cnt[1-flag]--;
            }
        }
    }
    //输出最终结果
    if((l[0][0].health > 0 && l[1][0].health > 0) || (l[0][0].health <= 0 && l[1][0].health <= 0)) {
        //平局
        printf("%d\n",0);
    }
    else {
        //高分的一方为胜利者
        int d = l[0][0].health > l[1][0].health ? 1 : -1;
        printf("%d\n",d);
    }
    printf("%d\n%d ",l[0][0].health,cnt[0]);
    for(int i = 1;i<=cnt[0];i++) {
        if(l[0][i].health > 0) {
            printf("%d ",l[0][i].health);
        }
    }
    printf("\n");
    printf("%d\n%d ",l[1][0].health,cnt[1]);
    for(int i = 1;i<=cnt[1];i++) {
        if(l[1][i].health > 0) {
            printf("%d ",l[1][i].health);
        }
    }
    return 0;
}