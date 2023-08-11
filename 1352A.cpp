#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;int c=0,x,ans=0,nn;
        nn=n;
        while(n!=0)
        {
            c++;
            x=n%10;
            if(x!=0) ans++;
            n=n/10;
        }
        int z=c+1;
        int a[z],i=1;
        while(nn!=0)
        {
            a[i]=nn%10;i++;nn=nn/10;   
        }
        cout<<ans<<endl;
        reverse(a,a+z);int tru=0;
        for(int j=0;j<c;j++)
        {
            if(a[j]!=0)
            {
                tru=1;
                cout<<a[j];
                int y=c-(j+1);
                while(y--) cout<<"0";
                cout<<" ";
            }
        }
        cout<<endl;
    }
}