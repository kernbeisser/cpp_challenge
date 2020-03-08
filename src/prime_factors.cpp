#include<iostream>
#include<cmath>

bool is_prime(int n){
    if(n == 1)
        return false;
    for(int i = 2; i <= std::sqrt(n); ++i){
        if(n % i == 0)
            return false;
    }
    return true;
}

int main(){

    int number {};
    std::cout << "Enter the number to be factorized: ";
    std::cin >> number;

    for(int i = 2; i < number; ++i){
        if(is_prime(i) && number % i == 0)
            std::cout << "Prime factor: " << i << "\n";
    }
    std::cout << std::endl;

    return 0;
}
