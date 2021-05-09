#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier

#include <iostream>
#include <iostream>
#include <math.h>
#include <libm2k/m2k.hpp>
#include <libm2k/contextbuilder.hpp>
#include <libm2k/context.hpp>
#include <libm2k/analog/m2kpowersupply.hpp>
#include <libm2k/analog/m2kanalogin.hpp>
#include <libm2k/analog/m2kanalogout.hpp>
#include <libm2k/m2kglobal.hpp>
#include <libm2k/digital/m2kdigital.hpp>
#include <libm2k/digital/enums.hpp>
#include <libm2k/utils/enums.hpp>
#include <libm2k/utils/utils.hpp>
#include <libm2k/enums.hpp>
#include <string>
#include <vector>
#include <memory>

#include "jllibm2k.h"

using namespace std;
using namespace libm2k;
using namespace libm2k::analog;
using namespace libm2k::context;
using namespace libm2k::digital;


double getSampleRateFgen(M2kAnalogOut* fgen, unsigned int chn)
{
	double ro = fgen->getSampleRate(chn);
	return ro;
}

double setSampleRateFgen(M2kAnalogOut* fgen, unsigned int chn, double samplerate)
{
	double sr = fgen->setSampleRate(chn, samplerate);
	return sr;
}

void setCyclic(M2kAnalogOut* fgen, bool en)
{
	fgen->setCyclic(en);
	return;

}

void setCyclicCh(M2kAnalogOut* fgen, unsigned int chn, bool en)
{
	fgen->setCyclic(chn, en);
	return;
}

bool getCyclic(M2kAnalogOut* fgen, unsigned int chn)
{
	bool x=fgen->getCyclic(chn);
	return x;
}

double getScalingFactorFgen(M2kAnalogOut* fgen, unsigned int chn)
{
	double x = fgen->getScalingFactor(chn);
	return x;
}

double getFilterCompensationFgen(M2kAnalogOut* fgen, double samplerate)
{
	double x = fgen->getFilterCompensation(samplerate);
	return x;
}

void pushInterleaved(M2kAnalogOut* fgen, double* data, unsigned int nb_channels, unsigned int nb_samples)
{
	fgen->pushInterleaved(data, nb_channels, nb_samples);
	return;
}
void push(M2kAnalogOut* fgen, unsigned int chnIdx, double* data, size_t arr_len)
{
	fgen->push(chnIdx, std::vector<double>(data, data + arr_len));
	return;
}
void stopAllFgen(M2kAnalogOut* fgen)
{
	fgen->stop();
	return;
}

void stopFgen(M2kAnalogOut* fgen, unsigned int chn)
{
	fgen->stop(chn);
	return;
}

void cancelBufferAllFgen(M2kAnalogOut* fgen)
{
	fgen->cancelBuffer();
	return;
}

void cancelBufferFgen(M2kAnalogOut* fgen, unsigned int chn)
{
	fgen->cancelBuffer(chn);
	return;
}

void enableChannelFgen(M2kAnalogOut* fgen, unsigned int chnIdx, bool enable)
{
	fgen->enableChannel(chnIdx, enable);
	return;
}

bool isChannelEnabledFgen(M2kAnalogOut* fgen, unsigned int chnIdx)
{
	bool x=fgen->isChannelEnabled(chnIdx);
	return x;
}

void setKernelBuffersCountFgen(M2kAnalogOut* fgen, unsigned int chnIdx, unsigned int count)
{
	fgen->setKernelBuffersCount(chnIdx, count);
	return;
}

const char* getChannelNameFgen(M2kAnalogOut* fgen, unsigned int channel)
{
	std::string uri = fgen->getChannelName(channel);
	const char* cstr = uri.c_str();
	return cstr;
}

double getMaximumSamplerateFgen(M2kAnalogOut* fgen, unsigned int chn_idx)
{
	double x = fgen->getMaximumSamplerate(chn_idx);
	return x;
}