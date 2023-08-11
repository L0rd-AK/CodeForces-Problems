#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

#define in cin
#define out cout
#define end endl
#define f(j,n) for(int i=j;i<n;i++)
#define f1(j,n) for(int i=j;i<=n;i++)
#define fr(i,n) for(int j=i;j<n;j++)
#define frj1(n) for(int j=1;j<=n;j++)

void reverseStr(string str)
{
  for (int i = str.length() - 1; i >= 0; i--)
    out << str[i];
}
int main() 
{
  long long int t,k,l,m,n,ans,sum=0,x,x1,y1,x2,y2,max_num,min_h;
  char ch;
  string s;
  vector<int> a;
  in>>s;
  out<<s;
  reverseStr(s);
  
  return 0;
}
