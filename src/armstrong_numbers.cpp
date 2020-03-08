#include <iostream>
#include <vector>
#include <cmath>

/* just in case we test for more than 3 digits*/
int number_of_digits(unsigned long z){
    //unsigned long tmp {};
    int cnt {};

    while (z > 0) { cnt++; z /= 10; }

    return cnt;
    /*
        while (z > 0)
        {
        tmp = z % 10;
        z /= 10;
        ++cnt;
        }
        */
    //return cnt;

}

std::vector<int>& get_digits(unsigned long n, std::vector<int>& res){
    unsigned long tmp {};
    int cnt = number_of_digits(n);
    for(int i = 0; i < cnt; ++i){
        tmp = n % 10;
        res.push_back(tmp);
        n = n / 10;
    }

    return res;
}

bool is_armstrong_number(unsigned long n, std::vector<int>& digits){
    int exp = number_of_digits(n);
    unsigned long res {};

    for(int i = 0; i < exp; ++i){
        res += std::pow(digits.at(i), exp);
    }

    if(res == n) 
        return true;
    return false;
}

int main()
{
    // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    // 153, 370, 371, 407
    // 1634, 8208, 9474
    // 54748, 92727, 93084
    // 548834
    // 1741725, 4210818, 9800817, 9926315
    // 24678050, 24678051, 88593477
    // 146511208, 472335975, 534494836, 912985153
    // 4679307774
    // 32164049650, 32164049651, 40028394225, 42678290603, 44708635679, 49388550606, 82693916578,     // 94204591914

    std::cout << "Enter a 3 digits number: ";
    unsigned long number;
    std::cin >> number;

    std::vector<int> digits;

    /*
        unsigned long test_cases[] = {1634, 8208, 9474};
        for(int i = 0; i < 3; ++i){
        std::cout << test_cases[i] << " ";
    //std::cout << is_armstrong_number(test_cases[i], get_digits(number, digits)) << "\n";
    }
    */
    std::cout << is_armstrong_number(number, get_digits(number, digits)) << "\n";

    return 0;
}
