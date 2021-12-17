#include<iostream>
#include<string>
using namespace std;

string rev(string s)
{
    
 if(s.size()==1)    //return point: base condition
 {
     cout<<s<<endl;
     return s;
 }
 
 cout<<s<<endl;
 
 string s1=s.substr(0,1);  //storing s[0] for every new s
 s=rev(s.substr(1));    //recursing through S till size==1
 s+=s1;                 //adding separated s[0] to reversed s 
 
 cout<<s<<endl;
 return s;
}

int main()
{
   string s;
   cin>>s;
   cout<<endl<<rev(s);
    
   return 0;
}
