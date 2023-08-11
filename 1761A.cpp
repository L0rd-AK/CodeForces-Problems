#include <iostream>
using namespace std;
int main()
{
    int t,n,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
        if(n-(a+b)>=2||n==a&&a==b) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}