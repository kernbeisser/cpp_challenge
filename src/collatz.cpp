#include<iostream>
#include<iomanip>

int collatz(unsigned int n){
    int s_count = 1;

    while(n != 1){

        if(n % 2 == 0) 
            n /= 2;
        else
            n = (3 * n) + 1;
        ++s_count;
    }

    return s_count;
}

int main(){

    int max_s_count {0};
    int last_i {0};

    for(int i = 500001; i < 1000000; ++i){
        int tmp = collatz(i);
        if(max_s_count < tmp)
        {
            max_s_count = tmp;
            last_i = i;
        }
    }

    std::cout << last_i << " --> " << max_s_count << "\n";

    return 0;
}
