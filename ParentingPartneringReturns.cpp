//question link : https://codingcompetitions.withgoogle.com/codejam/round/000000000019fd27/000000000020bdf9

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
       int n;
       cin>>n;
       int a,b;
       char f[n];
       vector<vector<int> > v(n);
       int flag=0;
       for(int i=0;i<n;i++)
       {
         cin>>a>>b;
         v[i].push_back(a);
         v[i].push_back(b);
         v[i].push_back(i);
       }
       sort(v.begin(),v.end());
       string ans="";
       int c =0;
       int j=0;
       for(int i=0;i<n;i++)
       {
         if(v[i][0]>=c)
         {
           c= v[i][1];
           f[v[i][2]] = 'C';
         }
         else if(v[i][0]>=j)
         {
           j = v[i][1];
           f[v[i][2]] = 'J';
         }
         else
         {
           flag=1;
           break;
         }
       }
       if(flag==1)
       {
         cout<<"Case"<<" "<<"#"<<k+1<<":"<<" "<<"IMPOSSIBLE"<<endl;

       }
       else
       {
         string ans = "";
         for(int i=0;i<n;i++)
         {
           ans+=f[i];
         }
         cout<<"Case"<<" "<<"#"<<k+1<<":"<<" "<<ans<<endl;
       }
    }
    return 0;
}
