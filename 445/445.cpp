#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main ()
{
  string str;
    int i = 0;
    char q;
  while(getline(cin,str))
  {
    if(str.length()==0)
    {
      cout << endl;
    }
    for (string::iterator itor = str.begin(); itor != str.end(); itor++)
    {
      if(isdigit(*itor))
      {
        i+=*itor - '0';
      }
      else if(isupper(*itor) || *itor == 'b' || *itor == '*')
      {
        q = *itor;
        if(q = 'b')
          q=' ';
        for(int j = 0; j <i; ++j)
        {
          cout << q;
        }
        i = 0;
      }
      else if(*itor == '!')
        cout << endl;
    }
    cout << endl;
  }
  return 0;
}
