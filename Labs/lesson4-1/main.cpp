#include <iostream>
using namespace std;

int main()
{
  int input;

  // Prompt the user for input
  cout << "Enter a number to print pattern\n";
  cin >> input;

  // Outer loop: Controls the number of rows (j)
  for (int j = 1; j <= input; j++)
  {
    // Inner loop: Controls the number of elements printed in the current row (i)
    // Since i iterates up to j, each row prints one more element than the last.
    for (int i = 1; i <= j; i++)
    {
      cout << '*' << " "; // Print an asterisk followed by a space
    }

    // Move to the next line after completing a row
    cout << endl;
  }
}