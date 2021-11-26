#include<iostream> 
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans;

    if (n == 0)
        ans=0;
    else
       while(n!=1)
       {
           if(n%2!=0)
           ans=0;

           n=n/2;
       }
       ans=1;
    
    cout<<ans;

}




