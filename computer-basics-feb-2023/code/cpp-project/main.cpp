#include <iostream>

// int main()
// {
//    float mathScore;
//    float physicsScore;
//    float scienceScore;
//    float avg;
//    std::cout<< "please enter your Math score:\n";
//    std::cin>> mathScore;
//    std::cout<< "please enter your Physics score:\n";
//    std::cin>> physicsScore;
//    std::cout<< "please enter your Science score:\n";
//    std::cin>> scienceScore;
//    avg = (mathScore + physicsScore + scienceScore) / 3;

//    if (avg >= 14)
//    {
//       std::cout<< "Your GPA is "<<avg;
//       std::cout<< "\n";
//       std::cout<< "You are allowed to choose the unit";
//    }
//    else
//    {
//       std::cout<< "Your GPA is "<<avg;
//       std::cout<< "\n";
//       std::cout<< "You are not allowed to select units";
//    }
//    return 0;
// }

// using namespace std;

// int main()
// {
//    float sideLength;
//    float squareArea;
//    float squarePerimeter;
//    cout<< "please enter square side length:\n";
//    cin>> sideLength;
//    squareArea = sideLength*sideLength;
//    squarePerimeter = sideLength * 4;

//    cout<< "Square Area: "<<squareArea;
//    cout << "\n";
//    cout<< "Square Perimeter: "<<squarePerimeter;
//    return 0;
// }


// int main()
// {
//    int num1;
//    int num2;
//    cout<< "Plese enter first number:\n";
//    cin>> num1;
//    cout<< "Plese enter second number:\n";
//    cin>> num2;
//    cout<< num1+num2;
//    return 0;
// }


// int main()
// {
//    float number;
//    std::cout<< "please enter your number: \n";
//    switch (6)
//    {
//    case 6:/* constant-expression */
//       std::cout<< number;
//       break;
//    default:
//       break;
//    }
//    return 0;
// }

int main(){
char ch;
std::cin>> ch;
switch (ch) {
  case 'm':
    std::cout << "Mahsa";
    break;
  case 's':
    std::cout << "sina";
    break;
  case 'r':
    std::cout << "reza";
    break;
  case 'k':
    std::cout << "kamran";
    break;
  case 'z':
    std::cout << "Zari";
    break;
  case 'p':
    std::cout << "pouya";
    break;
  case 'n':
    std::cout << "nima";
    break;
}
}