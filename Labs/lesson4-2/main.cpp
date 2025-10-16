#include <iostream>
using namespace std;

int main()
{
  // 1. Initialize the loop control variable
  int start = 100;

  // 2. The while loop condition: repeat as long as start is greater than or equal to 1
  while (start >= 1)
  {
    // Code inside the loop body executes on repetition

    // Check if the number is a multiple of 5 (remainder is 0)
    if (start % 5 == 0)
    {
      cout << start << endl;
    }

    // 3. Update the loop control variable
    start--;
  }
  return 0;
}