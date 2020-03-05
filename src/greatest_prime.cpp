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


int main(){

    unsigned long n;
    std::cout << "Give us a number! ";
    std::cin >> n;
    int p {};

    for(auto i = 2; i <= n; ++i) 
    {
        if(is_prime(i))
            p = i;
    }
    std::cout << "Prime number " << p << " less than " << n << "\n";

    return 0;
}
