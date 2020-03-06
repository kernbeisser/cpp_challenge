#include<iostream>

bool is_prime(unsigned long number){

    if(number < 2) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;

    for(int i=3; (i*i)<=number; i+=2){
        if(number % i == 0 ) return false;
    }

    return true;
}

bool is_sexy(unsigned long p1, unsigned long p2){
    if(p2 - p1 == 6)
        return true;
    return false;
}

int main(){

    unsigned long n;
    std::cout << "Give us a number! ";
    std::cin >> n;
    int p1 {};
    int p2 {};

    for(auto i = 2; i <= n; ++i) 
    {
        if(is_prime(i) && is_prime(i+6)){
            p1 = i;
            p2 = i+6;
            std::cout << "Sexy prime pair: (" << p1 << ", " << p2 << ")\n";
        }
    }

    return 0;
}
