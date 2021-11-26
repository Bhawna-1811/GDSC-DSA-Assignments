#include<iostream> 
using namespace std;

int main()
{
    int N;
    cin>>N;
    int ispower(int n);
    cout<<ispower(N);
}
int ispower(int n)
    {
       if(n==0)
        return 0;
       n=n/2;
       if(n==2)
        return 1;
       else if(n>2)
        ispower(n);
       else
         return 0;
        
    }





