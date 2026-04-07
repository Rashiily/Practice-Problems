#include <iostream>
using namespace std;
int main()
{
int n, sum = 0;
cout << "Enter a number: ";
cin >> n;
sum = n * (n + 1) / 2;
cout << "Sum of natural numbers = " << sum;
return 0;
}

/*output:
Enter a number: 7
Sum of natural numbers = 28*/
