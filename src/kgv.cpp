#include <iostream>
#include <vector>

int main(){

    std::vector<unsigned int> numbers;
    unsigned int n {0};

    std::cout << "Gib nun einige positive Ganzahlen ein (Ende mit -1):\n";
    while(n != -1){
        std::cin >> n;
        numbers.push_back(n);
    }

    unsigned int kgv {1};

    std::cout << "Huhu, Tommi!\n";

    return 0;
}
