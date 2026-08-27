// #include<iostream>
// using namespace std;

// int setBits(int a)
// {
//     int cnt=0;
//     while(a!=0)
//     {
//         if(a&1)
//         {
//         cnt++;
//         }
//         a=a>>1;
//     }
    
//     return cnt;

// }
// int main()
// {
//     int num1;
//     int num2;
//     cout<<"Enter 1st number ";
//     cin>>num1;
//     cout<<"Enter 2nd number ";
//     cin>>num2;

//     cout<<"total setbits "<<setBits(num1)+setBits(num2);
//     return 0;

// }

// ======================================1-n bits count==========================================

#include<iostream>
using namespace std;

int setBits(int a)
{
    int cnt=0;
    while(a!=0)
    {
        if(a&1)
        {
        cnt++;
        }
        a=a>>1;
    }
    
    return cnt;
}
int main()
{
    int i;
    int ans=0;
    int n;
    cout<<"enter the number till you want the bits";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        ans=ans+setBits(i);
    }

    cout<<"total setbits = "<<ans;
    return 0;

}


