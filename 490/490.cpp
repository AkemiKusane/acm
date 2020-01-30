#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str;
  string strs[100];
  int a=0;
  int max = 0;
  while(getline(cin,str))
  {

    strs[a] = str;
    if (strs[a].length()>max)
      max=strs[a].length();
    a++;
  }
  for(int i = 0; i<max;++i )
  {
    for(int j = a-1; j >= 0; --j)
    {
      if(strs[j].length() <= i)
      {
        cout << ' ';
      } else {

        cout << strs[j][i];
      }
    }
    cout << endl;

  }
  return 0;
}
// 你对边境条件还是不是掌握的很好
// a 是你输入的行数没错，但是数组是0开始的，那么等到j和a一样大了
// 就不是有效数据了
