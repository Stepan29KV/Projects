#pragma once

#include <limits>
#include "IStatistics.h"

class Mean : public IStatistics {
public:
	Mean();

	void update(double next) override;

	double eval() const override;
	const char * name() const override;	

private:
	int count;
	double sum;
};