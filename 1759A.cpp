#include <iostream>
using namespace std;
int main()
{
    bool ok=false;
    int t;
    cin>>t;
    string str,s;
    for(int i=0;i<=51;i++) str+="Yes";
    for(int i=0;i<t;i++)
    {
        cin>>s;ok=false;
        for(int j=0;j<str.length();j++)
        {
            if(s[0]==str[j])
            {
                if(str.substr(j,s.size())==s)
                {
                    ok=true;
                    break;
                }
            }
        }
        if(ok)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}