//question link - https://codingcompetitions.withgoogle.com/codejam/round/000000000019fd27/0000000000209a9f


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
       string s;
      cin>>s;

      string s1 = "";
      int r=0;
      char prev = s[0];
     for(int i=0;i<s.length();i++)
     {
       if(s[i]=='0')
       {
         for(int k=0;k<r;k++)
         {
           s1+=")";
         }
         s1+="0";
         r = 0;
       }
       else if((s[i]-'0')>(prev-'0'))
       {

         for(int k=0;k<(s[i]-'0')-r;k++)
         {
           s1+="(";
         }
         s1+=s[i];
         r = s[i]- '0';
       }
       else if((s[i]-'0')<(prev-'0'))
       {
         for(int k=0;k<r-(s[i]-'0');k++)
         {
           s1+=")";
         }
         s1+=s[i];
         for(int k=0;k<(s[i]-'0');k++)
         {
           s1+=")";
         }
         r = 0;
       }
       else if((s[i]-'0')==(prev-'0') && i!=0)
       {

         s1+=s[i];
       }
       else if((s[i]-'0')==(prev-'0') && i==0)
       {
         for(int k=0;k<(s[i]-'0');k++)
         {
           s1+="(";
         }
          s1+=s[i];
         r = s[i] - '0';
       }

       prev = s[i];
     }
     for(int i=0;i<r;i++)
     {
       s1+=")";
     }
     cout<<"Case"<<" "<<"#"<<i+1<<":"<<" "<<s1<<endl;
    }
    return 0;
}
