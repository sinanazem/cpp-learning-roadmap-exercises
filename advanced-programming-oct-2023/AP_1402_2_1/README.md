# C++ Exercise Series

## Overview

This repository contains my solutions to the first series of C++ exercises assigned by **Mehran Ghoratolhamid**. <br>The solutions are implemented in C++ and aim to demonstrate my understanding of these concepts.

## Table of Contents

- [Exercise 1](#exercise-1)
- [Exercise 2](#exercise-2)
- [Exercise 3](#exercise-3)
- [...

## Getting Started

To view and run the code, follow these instructions:

1. **Clone the Repository:**
   ```bash
   git clone https://github.com/your-username/cplusplus-exercise-series.git
   cd cplusplus-exercise-series

## Exercise Details

### Exercise 1
- **Description:** Write a program that receives a four-digit number from the input and prints the sum of its digits.<br>
- **File(s):** exercise1.cpp<br>
- **Solution:**<br>
```
#include <iostream>
#using namespace std;
int main() {
    // تعریف یک متغیر برای نگهداری عدد چهاررقمی
    int number;

    // درخواست ورودی از کاربر
    cout << "Please Enter your number:" ;
    cin >> number;

    // جدا کردن ارقام و محاسبه مجموع آن‌ها
    int digit1 = number % 10;       
    int digit2 = (number / 10) % 10; 
    int digit3 = (number / 100) % 10;
    int digit4 = number / 1000;

    // محاسبه مجموع ارقام
    int sum = digit1 + digit2 + digit3 + digit4;

    // چاپ نتیجه
    cout << "Sum: " << sum << std::endl;

    return 0;
}

```

### Exercise 2
- **Description:** Write a program that receives a four-digit number from the input and prints the sum of its digits.<br>
- **File(s):** exercise1.cpp<br>
- **Solution:**<br>
```

```

### Exercise 3
- **Description:** Write a program that receives a four-digit number from the input and prints the sum of its digits.<br>
- **File(s):** exercise1.cpp<br>
- **Solution:**<br>
```

```
