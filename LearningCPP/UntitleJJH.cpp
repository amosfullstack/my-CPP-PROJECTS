#include <iostream>

int main() {
    int num = 10;  // Declare and initialize an integer variable
    int* ptr = &num;  // Declare and initialize a pointer to int, pointing to the address of 'num'

    std::cout << "Value of num: " << num << std::endl;
    std::cout << "Address of num: " << &num << std::endl;
    std::cout << "Value of ptr: " << ptr << std::endl;
    std::cout << "Value pointed by ptr: " << *ptr << std::endl;

    return 0;
}

