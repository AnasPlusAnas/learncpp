#include <iostream>

// ? => to define a function it is same as Java, also for calling a function it is same as Java. The only difference here is the function is placed above the main function.
// returnType function_name (parameters) { body }
int sumNumbers(int firstNumber, int secondNumber)
{
    int sum = firstNumber + secondNumber;
    return sum;
}

void printNumbers()
{
    std::cout << "The sum is " << sumNumbers(1, 4) << std::endl;
}

int main()
{
    // ? => in C++ we can use = or {} to initialize a variable.
    // difference in using = and {} is that {} is more secure and it is recommended to use {} instead of =.
    int firstNumber = 12;
    int secondNumber{9};

    int sum{firstNumber + secondNumber};

    std::cout << "The sum of " << firstNumber << " and " << secondNumber << " is " << sum << std::endl;

    // calling the function
    sum = sumNumbers(10, 9);
    std::cout << "The sum is " << sum << std::endl;

    // we can also call the function in the cout statement
    std::cout << "The sum is " << sumNumbers(13, 9) << std::endl;

    // calling the function without any return type
    printNumbers();

    return 0;
}
