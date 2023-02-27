#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
    vector<int>ans;
   while(t>0)
   {
    int n;
    cin>>n;
    if(n==2)//base case
    ans.push_back(3);
    else if(n==3)//base case
    ans.push_back(4);

// we have two base cases as in some series like fibonacci we have to handle, and these base cases cant 
// be calculated from a coded formula
    else{
    int white=ceil(n/2);
    int black=n-white;

// now sequence does not matter in the permuatation givem
// unlike digits here any color can start, if we had digits then we have to exlcude 
// the case where we keep 0
// here we can start from color, hence no case exclude.

    ans.push_back(white*black);
    }
    t--;
   }

   for(auto i:ans)
   cout<<i <<" ";
}