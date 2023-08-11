#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int l=1,s=1,temp=a[1];
    for(int i=1;i<=n;i++)
    {
        if(temp<a[i]) {temp=a[i];l=i;}
    }
    temp=a[1];
    for(int i=1;i<=n;i++)
    {
        if(temp>=a[i]) {temp=a[i];s=i;}
    }
    int x=(l-1)+(n-s),y=(l-1)+(n-s-1);
    if(l<s)
    {
        cout<<abs(x)<<endl;
    }
    else{
        cout<<abs(y)<<endl;
    }
}