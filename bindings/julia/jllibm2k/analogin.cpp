#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier

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


void startAcquisition(M2kAnalogIn* ain, unsigned int nb_samples)
{
	ain->startAcquisition(nb_samples);
	return;
}

void stopAcquisition(M2kAnalogIn* ain)
{
	ain->stopAcquisition();
	return;
}
/* No testedx, probably not needed
chdata* getSamples(M2kAnalogIn* ain, unsigned int nb_samples)
{
	double* pch1;
	double* pch2;

	pch1 = (double*)malloc(nb_samples * sizeof(double));
	pch2 = (double*)malloc(nb_samples * sizeof(double));
	const double* ro = ain->getSamplesInterleaved(nb_samples);
	for (int i = 1; i < 2*nb_samples; ++i)
	{
		if (i % 2 == 0) {
			pch2[i] = ro[i];
		}
		else {
			pch1[i] = ro[i];
		}
	}
	struct chdata* chptr, aindata;
	chptr = &aindata;
	(*chptr).ch1 = pch1;
	(*chptr).ch2 = pch2;
	return chptr;
}
/**/


const double* getSamplesInterleaved(M2kAnalogIn* ain, unsigned int nb_samples)
{
	const double* ro = ain->getSamplesInterleaved(nb_samples);
	return ro;
}

double getVoltage(M2kAnalogIn* ain, unsigned int ch)
{
	double ro = ain->getVoltage(ch);
	return ro;
}

void setVerticalOffset(M2kAnalogIn* ain, unsigned int channel, double vertOffset)
{
	ain->setVerticalOffset((ANALOG_IN_CHANNEL)channel, vertOffset);
	return;
}

double getVerticalOffset(M2kAnalogIn* ain, unsigned int  channel)
{
	double offs = ain->getVerticalOffset((ANALOG_IN_CHANNEL)channel);
	return offs;
}

double getScalingFactor(M2kAnalogIn* ain, unsigned int ch)
{
	double scf = ain->getScalingFactor((ANALOG_IN_CHANNEL)ch);
	return scf;
}

void setRange(M2kAnalogIn* ain, unsigned int channel, unsigned int range)
{
	ain->setRange((ANALOG_IN_CHANNEL)channel, (M2K_RANGE)range);
	return;
}

void setRangeMinMax(M2kAnalogIn* ain, unsigned int channel, double min, double max)
{
	ain->setRange((ANALOG_IN_CHANNEL)channel, min, max);
	return;
}

double getSampleRate(M2kAnalogIn* ain)
{
	double sr = ain->getSampleRate();
	return sr;
}

double setSampleRate(M2kAnalogIn* ain, double samplerate)
{
	double sr = ain->setSampleRate(samplerate);
	return sr;
}

double getFilterCompensation(M2kAnalogIn* ain, double samplerate)
{
	double sr = ain->getFilterCompensation(samplerate);
	return sr;
}

unsigned int getNbChannels(M2kAnalogIn* ain)
{
	unsigned int nc = ain->getNbChannels();
	return nc;
}

const char* getNameAin(M2kAnalogIn* ain)
{
	std::string uri = ain->getName();
	const char* cstr = uri.c_str();
	return cstr;
}

void enableChannel(M2kAnalogIn* ain, unsigned int chnIdx, bool enable)
{
	ain->enableChannel(chnIdx, enable);
	return;
}

bool isChannelEnabled(M2kAnalogIn* ain, unsigned int chnIdx)
{
	bool nc = ain->isChannelEnabled(chnIdx);
	return nc;
}

void cancelAcquisition(M2kAnalogIn* ain)
{
	ain->cancelAcquisition();
	return;
}

void setKernelBuffersCount(M2kAnalogIn* ain, unsigned int count)
{
	ain->setKernelBuffersCount(count);
	return;
}

libm2k::M2kHardwareTrigger* getTrigger(M2kAnalogIn* ain)
{
	libm2k::M2kHardwareTrigger* trg = ain->getTrigger();
	return trg;
}

double getMaximumSamplerate(M2kAnalogIn* ain)
{
	double nc = ain->getMaximumSamplerate();
	return nc;
}


