#include <iostream>

unsigned int gcd(unsigned int const a, unsigned int const b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main(){

    int a, b, max;
    std::cin >> a;
    std::cin >> b;

    if(b == 0)
        return a;

    for(int i = 1; i <= b; i++){
        if(a % i == 0 && b % i == 0){
            max = i;
        }
    }

    std::cout << "GGT von a = " << a << " und b = " << b << " ist " << max << "\n";
    std::cout << gcd(a, b) << "\n";

    return 0;
}
