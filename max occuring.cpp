#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:

    char getMaxOccuringChar(string str)
    {
        int n= str.length();
        sort(str.begin(), str.end());
        int max_count = 0;
        int count = 1;
        char max;
        for (int i = 1; i <= n; i++)
        {
           if ((i == n) || (str[i] != str[i - 1]))
           {
               if (max_count < count)
               {
                max_count = count;
                max = str[i-1];
               }
               count = 1;
            }
            else
            {
             count++;
            }
        }
        cout<<max;
    }
    

};


int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin>>str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}  