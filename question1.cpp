#include<bits/stdc++.h>
using namespace std;
int main()
{
   
        int n,m; //input
        cin>>n>>m;
        int v=m-1; // we will need one less cut as within 2 lines a block is formed, so we wont count it twice.
        int h=n-1;
        cout<<v+h;
}