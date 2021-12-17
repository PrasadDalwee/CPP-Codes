#include<string>
#include <iostream>

using namespace std;

int main()
{
   string a;
   cin>>a;            // use getline(cin,a); if the string is going to have spaces
   
   for(int i=0;i<a.length();i++)
   {
       if(123>a[i] && a[i]>96)
       {
           a[i]=a[i]-32;            //ascii difference A->65 a->97 Z->90 z->122
       }
       
       else if(64<a[i] && a[i]<91)
       {
           a[i]=a[i]+32;
       }
   }
 
    cout<<a;
    
    return 0;
}
