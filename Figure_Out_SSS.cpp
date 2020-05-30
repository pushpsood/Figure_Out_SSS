#include<iostream> //for cin
#include <cstdlib>
using namespace std;

typedef unsigned char byte;
int main()
{
   byte p[32];
   for(int i=0;i<32;i++)
   {
       scanf("%c",&p[i]);
   }
   cout<<p[4];

}
