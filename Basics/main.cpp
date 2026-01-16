#include <iostream>

int main() {
    double a;
    double b;

    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "Enter second number: ";
    std::cin >> b;

    double sum = a + b;
    double difference = a - b;
    double product = a * b;
    double quotient = a / b;

    std::cout <<std::endl;
    std::cout << "Results: " << std::endl;
    std::cout <<std::endl;
    
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Product: " << product << std::endl;
    std::cout << "Quotient: " << quotient << std::endl;

    return 0;
}