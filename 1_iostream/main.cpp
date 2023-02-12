// ? => import iostream library which contains cout, cin, etc. used for input and output
#include <iostream>

// ? => main function is the entry point of the program
int main()
{
    std::cout << "This is";
    std::cout << "Without endl";

    std::cout << std::endl;

    std::cout << "This is " << std::endl;
    std::cout << "With endl";

    std::cerr << "Error message from std" << std::endl;
    std::clog << "Log message from std" << std::endl;

    // ? => return 0 to the operating system to indicate that the program has been executed successfully
    return 0;
}

// ? => cout is used to print something to the console
// ? => cin is used to get input from the user - Can be found in 4_input folder
// ? => cerr is used to print error messages
// ? => clog is used to print log messages
// ? => endl is used to print a new line