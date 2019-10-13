#include<iostream>
using namespace std;
//思路：盖子和瓶子个数转换成钱，用钱去买酒
int drinkpeer(){
    int money=12,bottle=0,cover=0,sum=0;
    while(money>=2||bottle>=2||cover>=4){ //当够钱买酒或者够瓶子或盖子换酒的时候进入循环
        while(money>=2){ //钱多过2块就买酒
            money-=2; //买完一瓶酒，钱减少2块
            bottle++;cover++;sum++; //买完酒，空瓶+1，瓶盖+1，喝掉的酒总数+1
        }
        while(bottle>=2){ //瓶子多过2个就换成钱
            money+=2*(bottle/2);
            bottle%=2; //剩下的瓶子的个数=当前瓶子个数取余2
        }
        while(cover>=4){ //盖子多过4个就换成钱
            money+=2*(cover/4);
            cover%=4; //剩下的盖子的个数=当前盖子个数取余4
        }
    }
    return sum; //返回总数
}
int main(int argc, const char * argv[])
{
    cout<<"12元"<<"可以喝"<<drinkpeer()<<"瓶啤酒"<<"\n";
    return 0;
}
