#include "Mean.h"
#include <limits>

Mean::Mean(){
		sum = 0;
		count = 0;
}

void Mean::update(double next) {
	count++;
	sum += next;
}


double Mean::eval() const {
		return sum / count;
	}


const char * Mean::name() const {
	return "mean";
}