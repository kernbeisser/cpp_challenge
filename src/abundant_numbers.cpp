#include<iostream>

unsigned int abundance(unsigned int upper){
    unsigned int sum {0};

    for(int i = 1; i < upper; ++i){
        if(upper % i == 0){
            sum += i;
        }
    }

    if(sum > upper)
        return sum;
    else
        return 0;
}

int main(){

    std::cout << "Enter an upper limit: ";
    unsigned int upper {};
    std::cin >> upper;

    for(int i = 1; i < upper; ++i){
        unsigned int a = abundance(i);
        if(a)
            std::cout << a << "\n";
    }
    
    return 0;
}
