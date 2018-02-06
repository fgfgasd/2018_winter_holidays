#include<iostream>
#include<ctime>
#include<cstdlib>
#include<conio.h>
using namespace std;

class Time
{
public:
    int hour,munite,second;
    Time(int ho=0,int mu=0,int sec=0)
    {
       hour=ho;
       munite=mu;
       second=sec;
    }
    void add()
    {
        int hour=0, munite=0, second=0;
        while(1)
        {
            if(hour<10)
            {
                cout<<'0'<<hour<<" : ";
            }
            else
            {
                cout<<hour<<" : ";
            }
            if(munite<10)
            {
                cout<<'0'<<munite<<" : ";
            }
            else
            {
                cout<<munite<<" : ";
            }
            if(second<10)
            {
                cout<<'0'<<second<<endl;;
            }
            else
            {
                cout<<second<<endl;
            }
            second++;

            if(second == 60)
            {
                munite++;
                second=0;
            }
            if(munite == 60)
            {
                hour++;
                munite=0;
            }
            system("cls");
        }
    }
    void  reduce(int hour, int munite, int second)
    {
        /*hour=h;
        munite=m;
        second=s;*/
        while(1)
        {
            if(hour<10)
            {
                cout<<'0'<<hour<<" : ";
            }
            else
            {
                cout<<hour<<" : ";
            }
            if(munite<10)
            {
                cout<<'0'<<munite<<" : ";
            }
            else
            {
                cout<<munite<<" : ";
            }
            if(second<10)
            {
                cout<<'0'<<second<<endl;;
            }
            else
            {
                cout<<second<<endl;
            }
            second--;
            if(second==0&&munite!=0)
            {
                munite--;
                second=60;
            }
            if(munite==0&&hour!=0)
            {
                hour--;
                munite=59;
            }
            if(hour==0&&munite==0&&second==0)
            {
                cout<<"计时结束"<<endl;
                break;
            }
            system("cls");
        }
    }
};

void menue()
{
    cout<<"******************** 倒计时请按1************************"<<endl;
    cout<<"******************** 正计时请按2************************"<<endl;
}
int main()
{
    Time *start;
    menue();
    int i;
    cin>>i;
    switch(i)
    {
    case 1:
        cout<<"请按顺序输入倒计时的时分秒"<<endl;
        int H,M,S;
        cin>>H>>M>>S;
        start->reduce(H,M,S);
    case 2:
        start->add();
    }
    return 0;
}
