#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
#define in cin
#define out cout
//#define end endl
#define f(x1,y1,z1) for(int x1=y1;x1<z1;x1++)
#define f1(x1,y1,z1) for(int x1=y1;x1<=z1;x1++)

int main() 
{
  long long int n,x,z;
  char ch;
  string s;
  vector<int> a,b;
  in>>n;
  z=n;
  while(z--){
    in>>x;
    a.push_back(x);
  }
  sort(a.begin(),a.end());
  int ans=1,c=0;
  f(i,0,n) if(a[i]>=ans){ans++;c++;}
  out<<c;
  return 0;
}