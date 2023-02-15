#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>

int returnSum(int a, int b) {
    return a + b;
}

int returnDiffrence(int a, int b) {
    return a - b;
}

int returnProduct(int a, int b) {
    return a * b;
}

int returnQuotient(int a, int b) {
    return round(a / b);
}

int main() {
    int a = 10; 
    int b = 5;

    std::cout << "Please enter two numbers seperated by a space:" << std::endl;
    scanf("%d %d", &a, &b);

    std::cout << returnSum(a, b) << std::endl; 
    std::cout << returnDiffrence(a, b) << std::endl; 
    std::cout << returnProduct(a, b) << std::endl; 
    std::cout << returnQuotient(a, b) << std::endl; 

    return 0;
}

