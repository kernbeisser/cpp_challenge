#include<iostream>

unsigned int sum_of_divisors(unsigned int upper){
    unsigned int sum {0};

    for(unsigned int i = 1; i < upper; ++i){
        if(upper % i == 0){
            sum += i;
        }
    }

    return sum;
}

void bff(unsigned int n){
    unsigned int i {};
    unsigned int j {};

    for(i = 1; i <= n; ++i){
        j = sum_of_divisors(i);

        if((i < j) && (j <= n) && (sum_of_divisors(j) == i)){
            std::cout << "a pair of amicable numbers (" << i << ", " << j << ")\n";
        }
    }
}

int main(){

    unsigned int number {100000};

    bff(number);

    return 0;
}
