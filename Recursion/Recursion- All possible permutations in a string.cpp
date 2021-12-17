#include <iostream>
#include<string>

using namespace std;

void permute( string q, string ans)
{
    if(q.length()==1)
    {
        cout<<ans+q<<endl;
        return;
    }
    
    for(int i=0;i<q.length();i++)
    {
        permute(q.substr(0,i)+q.substr(i+1),ans+q[i]);
        //don't use erase as it alters the actual string
    }
   
}

int main()
{
    string s="ABC";
    permute(s,"");
    return 0;
}
