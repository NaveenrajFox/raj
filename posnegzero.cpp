#include <iostream.h>
#include <conio.h>
void main()
{
 int a;
 clrscr();
 cout << "Enter your number:\n";
 cin >> a;
 if ( a > 0 )
 {
 cout << "your number is positive";
 }
 else if ( a < 0 )
 {
 cout << "your number is negative";
 }
 else
 {
 cout << "your number is zero";
 }
 getch();
 }
