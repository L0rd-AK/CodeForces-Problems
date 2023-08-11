#include <iostream>
using namespace std;
int main()
{
    int x,y,z,xyz,maxx;
    cin>>x>>y>>z>>xyz;
    maxx=max(x,max(y,max(z,xyz)));
    
    if(maxx==x) cout<<maxx-xyz<<" "<<maxx-y<<" "<<maxx-z<<endl;
    else if(maxx==y) cout<<maxx-x<<" "<<maxx-xyz<<" "<<maxx-z<<endl;
    else if(maxx==z) cout<<maxx-x<<" "<<maxx-y<<" "<<maxx-xyz<<endl;
    else if(maxx=xyz) cout<<maxx-x<<" "<<maxx-y<<" "<<maxx-z<<endl;

    return 0;
} 