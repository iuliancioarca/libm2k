#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier

#include "jllibm2k.h"

#include <cmath>
#include <libm2k/analog/m2kpowersupply.hpp>
#include <libm2k/m2kexceptions.hpp>
#include <libm2k/logger.hpp>
#include <libm2k/utils/utils.hpp>
#include <iio.h>

using namespace libm2k::analog;
using namespace libm2k::utils;

void enableChannelPsu(M2kPowerSupply* ps, unsigned int chn, bool en)
{
	ps->enableChannel(chn, en);
	return;
};

void enableAllPsu(M2kPowerSupply* ps, bool en)
{
	ps->enableAll(en);
	return;
};

double readChannelPsu(M2kPowerSupply* ps, unsigned int chn)
{
	double val = ps->readChannel(chn);
	return val;
};

void pushChannelPsu(M2kPowerSupply* ps, unsigned int chn, double value)
{
	ps->pushChannel(chn, value);
	return;
};

bool anyChannelEnabledPsu(M2kPowerSupply* ps)
{
	bool val = ps->anyChannelEnabled();
	return val;
};
