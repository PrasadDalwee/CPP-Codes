#include<string>
#include <iostream>
#include<algorithm>

using namespace std;

int
main ()
{
  string a;
  getline (cin, a);

  transform (a.begin (), a.end (), a.begin (),::toupper);            // start iterator, end iterator, convert from, case
  cout << a<<endl;

  transform (a.begin (), a.end (), a.begin (),::tolower);
  cout << a;

  return 0;
}
