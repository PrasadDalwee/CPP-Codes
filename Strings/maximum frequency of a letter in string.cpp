// here string will contain only lowercase letters

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    
    int a[26]={0};     // value index array
    int pos,mpos,max=0;
    
    for(int i=0;i<s.size();i++)
    {
        pos=s[i]-97;        //ascii difference from 'a'
        
        if(pos>=0)           // to exclude spaces
        {
            a[pos]++;
            if(a[pos]>max)
            {
                max=a[pos];
                mpos=pos;
            }
        }
    }
    
    cout<<char(mpos+97)<<" "<<max;
}
