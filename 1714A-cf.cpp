#include <iostream>
using namespace std;
int main()
{
    int tc,n,h,m,hh,mm,time,t,ans;
    cin>>tc;
    for(int i=0;i<tc;i++)
    {
        cin>>n>>h>>m;
        time=h*60+m;ans=24*60;
        for(int j=0;j<n;j++)
        {
            cin>>hh>>mm;
            t=(hh*60+mm)-time;
            if(t<0)
            {
                t+=24*60;
            }
            ans=min(ans,t);
        }
        cout<<ans/60<<" "<<ans%60<<endl;
    }
}