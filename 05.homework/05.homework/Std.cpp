#include <limits>
#include "Std.h"
#include <vector>
#include <cmath>

Std::Std(){		mean = new Mean();
}

	
void Std::update(double next) {
	numeric_arr.push_back(next);
	mean->update(next);
}


double Std::eval() const {
	double num = 0;
	double temp  = 0;
	for (size_t i = 0; i < numeric_arr.size(); i++){
		temp = numeric_arr[i] - mean->eval();
		num += temp * temp;
	}
	return sqrt(num / numeric_arr.size());
}

const char * Std::name() const {
	return "std";
}