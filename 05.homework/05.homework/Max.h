#pragma once

#include <limits>
#include "IStatistics.h"

class Max : public IStatistics {
// public:
public:
	Max();

	void update(double next) override; 

	double eval() const override;

	const char * name() const override;


private:
	double m_max;
};
