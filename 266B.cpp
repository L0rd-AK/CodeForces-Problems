#include <iostream>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--)
    {
        for(int i=0;i<n;i++)
        {
            char c;
            if(s[i]=='B'&&s[i+1]=='G')
            {
                c=s[i+1];
                s[i+1]=s[i];
                s[i]=c;i++;
            }
            
        }
    }
    cout<<s<<endl;
}
