#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,k,temp,sum=0;
    cin>>n;
    cin>>k;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
         cin>>temp;
         sum=sum + temp;
         v.push_back(temp);
    }
    make_heap(v.begin(),v.end());
    long int maxi = 0,res = 0;
    for(int i=0;i<k;i++)
    {
        maxi=v.front();
        sum-=maxi;
        pop_heap(v.begin(), v.end());
        v.pop_back();
        res = maxi / 2;
        sum+=res;
        v.push_back(res);
        push_heap(v.begin(),v.end());
    }	
    cout<<sum;
}
