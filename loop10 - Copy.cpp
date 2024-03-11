#include<iostream>
using namespace std;
int main()
{
   char row,col;
   for(row='a';row<='e';row++)
   {
      for(col=row;col>='a';col--)
      {
         cout<<row;
      }
      cout<<endl;
   }
}
