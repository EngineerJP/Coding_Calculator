#include <iostream>

using namespace std;

int main()
{
  int a;
  int b;
  int sum;
  int diff;
  int product;
  int quotient;
  int remainder;

  cout << "Enter a number!: \n";
  cin >> a;
  cout << "Enter a second number!: \n";
  cin >> b;
  sum = a + b;
  cout << "The sum of those numbers equals " << sum << endl;
  diff = a - b;
  cout << "The difference between those two numbers is " << diff << endl;
  product = a * b;
  cout << "The product of the two numbers is " << product << endl;
  quotient = a / b;
  cout << "The quotient of the two numbers is " << quotient << endl;
  remainder = a % b;
  cout << "The remainder of the quotient equals " << remainder << endl;
  return 0;
}
