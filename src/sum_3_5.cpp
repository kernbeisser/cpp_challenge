#include <iostream>

int main(){

	std::cout << "Wie weit wollen Sie gehen? ";
	int weit{0};
	std::cin >> weit;
	int sum{0};

	for(int i = 3; i <= weit; i++){
		if(i % 3 == 0 && i % 5 == 0){
			sum += i;
		}
	}

	std::cout << sum << "\n";

	return 0;
}
