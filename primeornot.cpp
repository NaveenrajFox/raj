#include <iostream>
using namespace std;

int main() {
int num , i, count=0;
cout << "enter the number" ;
cin >> num ;
for (i=2 ; i<num ; i++)
             {
                 if(num % i==0)
                 {
                     count++;
                     break;
                 }
             }
                 if (count==0)
                 {
                     cout<<"\nyes";
                 }
                 else
                 {
                     cout << "\nno" ;
                 }
	return 0;
}
