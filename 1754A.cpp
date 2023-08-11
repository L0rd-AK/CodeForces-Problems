#include <iostream>
using namespace std;
int main()
{
    int t,n,count;bool tru;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>n;
        cin>>s;
        if(s[n-1]=='Q') {cout<<"No"<<endl;continue;}
        count=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='Q')
            {
              count++;
            } 
            else count--;
            if(count<0) count=0; 
        }

        if(count==0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        
    }
}
