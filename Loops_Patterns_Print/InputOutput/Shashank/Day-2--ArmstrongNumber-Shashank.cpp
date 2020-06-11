#include <cmath>
#include <iostream>

using namespace std;

int main() {
   int num, originalNum, remainder, n = 0, result = 0, power;
   printf("Enter an integer: ");
   scanf("%d", &num);

   originalNum = num;

   while (originalNum != 0) {       // To find the length of the number
      originalNum /= 10;
      ++n;
   }
   originalNum = num;

   while (originalNum != 0) {           //To find tghe armstrongs number
      remainder = originalNum % 10;

      // pow() returns a double value
      // round() returns the equivalent int
      power = round(pow(remainder, n));
      result += power;
      originalNum /= 10;
   }

   if (result == num)
      cout << true;
   else
      cout << false;
   return 0;
}
