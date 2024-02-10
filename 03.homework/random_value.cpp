#include <iostream>
#include "high_scores.h"

#include <cstdlib>
#include <ctime>

int rnd_number() {

	// const int max_value = 100;

	std::srand(std::time(nullptr)); // use current time as seed for random generator

	const int random_value = (std::rand() % 100) + 1;

	std::cout << random_value << std::endl;

	return random_value;
}