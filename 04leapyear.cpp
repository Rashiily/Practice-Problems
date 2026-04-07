#include <iostream>
using namespace std;
int main()
{
int year;
cout << "Enter a year: ";
    cin >> year;
if (year % 4 == 0)
cout << "Leap Year";
else
cout << "Not a Leap Year";
return 0;
}

/*output1:
Enter a year: 2026
Not a Leap Year
output2:
Enter a year: 2000
Leap Year*/
