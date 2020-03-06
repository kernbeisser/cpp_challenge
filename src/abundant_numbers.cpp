#include<iostream>

unsigned int abundance(unsigned int upper){
    // unsigned int divisors[upper] {0};
    unsigned int sum {0};

    for(int i = 1; i < upper; ++i){
        if(upper % i == 0){
            sum += i;
        }
    }
  /* 
    for(int i = 0; i < upper; ++i){
        sum += divisors[i];
    }
  */
    if(sum > upper)
        return sum;
    else
        return 0;
}

int main(){

    for(int i = 1; i < 100; ++i){
        unsigned int a = abundance(i);
        if(a)
            std::cout << a << "\n";
    }
    
    return 0;
}
