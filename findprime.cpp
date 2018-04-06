#include <iostream>
using namespace std;

int main() {
int  a,b,i,j,count=0;
cin >> a ;
cin >> b ;
for ( i=a ; i<=b ; i++)
             {
                 count=0;
                 for(j=2;j<i;j++)
                 {
                     if(i%j==0)
                     {
                       count++;
                 break;
                   
                     }
                 }
                 if( count ==0)
                 {
                     cout <<"\n"<<i;
                 }
             }
                
	return 0;
}
