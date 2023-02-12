#include <iostream>
// ? => The <string> library is used to work with strings.
#include <string>

int main()
{
    // ? => while data goes INTO cout (<<), for cin it goes OUT OF cin (>>)
    // Asking user to input their name, cin adds a new line after the input automatically
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;

    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "Hello " << name << ", you are " << age << " years old." << std::endl;

    // multiple variables can be used in 1 line of cin to get multiple inputs
    int num1, num2;
    std::cout << "Enter 2 numbers: " << std::endl;
    std::cin >> num1 >> num2;
    std::cout << "You entered "
              << num1
              << " and "
              << num2 << std::endl;

    // CPP does not like spaces in the input, so if you want to get a string with spaces, you need to use getline()
    // ! For some reason, getline() doesnt let user input anything if there was a previous cin, so you need to use cin.ignore() to clear the buffer
    std::cin.ignore();
    std::string fullName;
    std::cout << "Enter your full name: " << std::endl;
    std::getline(std::cin, fullName);
    std::cout << "full name: " << fullName << std::endl;

    return 0;
}