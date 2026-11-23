#include<iostream>

int main(){
    std::cout << "Enter two numbers:\n";
    int a , b;
    std::cout << "Enter First number:\n";
    std::cin >> a;
    std::cout << "Enter second number:\n";
    std::cin >> b;
    
    std::cout << "Sum of " << a << " and " << b << " is " << a + b;

    return 0;
}