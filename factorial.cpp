#include <iostream>
using namespace std;

int main() {
int num , i, fact=1;
cout << "enter the number" ;
cin >> num ;
for (i=num ; i>0 ; i--)
             {
                 fact=fact*i;
             }
                cout << "\n" << fact ;
	return 0;
}
