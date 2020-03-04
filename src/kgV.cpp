#include <iostream>

int kgV(int a, int b){
    if(a == 0 || b == 0)
        return 0;

    int kgv = 1;
    while(!(kgv  % a == 0 && kgv % b == 0 )){
    	kgv++;
    }

    return kgv;
}

int main(){

    int a, b;
    std::cin >> a;
    std::cin >> b;

    std::cout << kgV(a, b) << "\n";

    return 0;
}
