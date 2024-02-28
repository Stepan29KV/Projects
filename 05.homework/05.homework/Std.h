#pragma once

#include <limits>
#include "IStatistics.h"
#include <vector>
#include <cmath>
#include "Mean.h"



class Std : public IStatistics {
public:
	Std();
	
	void update(double next) override;

	double eval() const override;

	const char * name() const override;

private:
	Mean *mean;
	std::vector <double> numeric_arr = {};

	~Std(){
		delete mean;
	}
};