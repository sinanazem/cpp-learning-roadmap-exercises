#include <iostream>
using namespace std;

int main() {
   for (int i = 1; i <= 5; i++) {
      for (int j = 1; j <= 5-i; j++) {
         cout << " ";
      }
      for (int k = 1; k <= 2*i-1; k++) {
         cout << "*";
      }
      cout << endl;
   }

   return 0;
}










// #include <iostream>
// using namespace std;

// int main() {
//    for (int i = 1; i <= 5; i++) {
//       for (int j = 1; j <= i; j++) {
//          cout << "* ";
//       }
//       cout << endl;
//    }

//    return 0;
// }

















// #include <iostream>
// using namespace std;

// int main() {
//    int sum = 0;

//    for (int i = 15; i <= 35; i++) {
//       if (i % 2 != 0)
//          sum += i;
//    }

//    cout << "The sum of odd numbers between 15 and 35 is: " << sum << endl;

//    return 0;
// }
















// # include <iostream>
// using namespace std;

// int main() {
//    for (int i = 10; i <= 30; i++) {
//       if (i % 3 == 0)
//          cout << i << " ";
//    }

//    cout << endl;

//    return 0;
// }
















// #include <iostream>
// using namespace std;

// int main() {
//    int number, max_number = 0;

//    for (int i = 0; i < 10; i++) {
//       cout << "Enter number " << i+1 << ": ";
//       cin >> number;

//       if (number > max_number)
//          max_number = number;
//    }

//    cout << "The largest number is: " << max_number << endl;

//    return 0;
// }

