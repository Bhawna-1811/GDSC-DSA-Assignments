#include <bits/stdc++.h>
using namespace std;
int countWords(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<countWords(s)<<endl;
	    }
}


int countWords(string s)
{
    int i;
    int n=s.length();
    int count = 1;
    for(i=0 ; i<n ; i++)
    {
        if((s[i]==' ') || (s[i]=='\t') || (s[i]=='\n'))
            count++;
    }
    return count;
}