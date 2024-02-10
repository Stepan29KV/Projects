#include <iostream>
#include "high_scores.h"


int check_value() {

	const int target_value = rnd_number();

	int current_value = 0;
	int attempts_count = 0;

	// bool not_win = true;

	std::cout << "Enter your guess:" << std::endl;

	do {
		std::cin >> current_value;

		if (current_value > target_value) {
			std::cout << "less than " << current_value << std::endl;
		}
		else if (current_value < target_value) {
			std::cout << "greater than " << current_value << std::endl;
		}
		else {
			std::cout << "you win! attemps = " << attempts_count << std::endl;
			break;
		}
		attempts_count++;

	} while(true);

	return attempts_count;
}