#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int r,s,digit,rev=0 ;
    cin >>  s;
    r = s;
    do
    {
    digit = s % 10;
    rev = (rev * 10) + digit ;
    s = s /10;
    } while (s != 0);
    
         if( r == rev)
         {
                cout<< "yes" ;
         }
         else
         {
                cout<< "no" ;
         }            
    
	return 0;
}
