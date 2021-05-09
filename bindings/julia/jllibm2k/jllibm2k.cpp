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

// contextbuilder.hpp
Context* contextOpen()
{
	Context* ctx = libm2k::context::contextOpen();
	if (!ctx) {
		std::cout << "Connection Error: No ADALM2000 device available/connected to your PC." << std::endl;
		return nullptr;
	}
}

M2k* m2kOpen()
{
	M2k* ctx = libm2k::context::m2kOpen();
	if (!ctx) {
		std::cout << "Connection Error: No ADALM2000 device available/connected to your PC." << std::endl;
		return nullptr;
	}
}

void contextClose(Context* ctx)
{
	if (!ctx) {
		std::cout << "Connection Error: No ADALM2000 device available/connected to your PC." << std::endl;
		return;
	}
	libm2k::context::contextClose(ctx);
}


// context.hpp
DMM* getDMM(Context* ctx, unsigned int index)
{
	DMM* dmm = ctx->getDMM(index);
	return dmm;
}
/* error
const char* getContextAttributeValue(Context* ctx, const char* attr)
{
	std::string str = ctx->getContextAttributeValue(attr);
	const char* cstr = str.c_str();
	return cstr;
};

const char* getContextDescription(Context* ctx)
{
	std::string str = ctx->getContextDescription();
	const char* cstr = str.c_str();
	return cstr;
};
/**/


// m2k.hpp
void reset(M2k* ctx)
{
	ctx->reset();
	return;
};

bool calibrateADC(M2k* ctx)
{
	bool st = ctx->calibrateADC();
	return st;
};

bool calibrateDAC(M2k* ctx)
{
	bool st = ctx->calibrateDAC();
	return st;
};

double calibrateFromContext(M2k* ctx)
{
	double val = ctx->calibrateFromContext();
	return val;
};

M2kDigital* getDigital(M2k* ctx)
{
	M2kDigital* dig = ctx->getDigital();
	return dig;
};

M2kPowerSupply* getPowerSupply(M2k* ctx)
{
	M2kPowerSupply* psu = ctx->getPowerSupply();
	return psu;
}

M2kAnalogIn* getAnalogIn(M2k* ctx)
{
	M2kAnalogIn* ain = ctx->getAnalogIn();
	return ain;
}

M2kAnalogIn* getAnalogIn_(M2k* ctx, char* dev_name)
{
	M2kAnalogIn* ain = ctx->getAnalogIn(dev_name);
	return ain;
}

M2kAnalogOut* getAnalogOut(M2k* ctx)
{
	M2kAnalogOut* ao = ctx->getAnalogOut();
	return ao;
}

bool hasMixedSignal(M2k* ctx)
{
	bool ao = ctx->hasMixedSignal();
	return ao;
}

void startMixedSignalAcquisition(M2k* ctx, unsigned int nb_samples)
{
	ctx->startMixedSignalAcquisition(nb_samples);
	return;
}

void stopMixedSignalAcquisition(M2k* ctx)
{
	ctx->stopMixedSignalAcquisition();
	return;
}

int getDacCalibrationOffset(M2k* ctx, unsigned int chn)
{
	int ao = ctx->getDacCalibrationOffset(chn);
	return ao;
}
double getDacCalibrationGain(M2k* ctx, unsigned int chn)
{
	double ao = ctx->getDacCalibrationGain(chn);
	return ao;
}
int getAdcCalibrationOffset(M2k* ctx, unsigned int chn)
{
	int ao = ctx->getAdcCalibrationOffset(chn);
	return ao;
}
double getAdcCalibrationGain(M2k* ctx, unsigned int chn)
{
	double ao = ctx->getAdcCalibrationGain(chn);
	return ao;
}
void setDacCalibrationOffset(M2k* ctx, unsigned int chn, int offset)
{
	ctx->setDacCalibrationOffset(chn, offset);
	return;
}
void setDacCalibrationGain(M2k* ctx, unsigned int chn, double gain)
{
	ctx->setDacCalibrationGain(chn, gain);
	return;
}
void setAdcCalibrationOffset(M2k* ctx, unsigned int chn, int offset)
{
	ctx->setAdcCalibrationOffset(chn, offset);
	return;
}
void setAdcCalibrationGain(M2k* ctx, unsigned int chn, double gain)
{
	ctx->setAdcCalibrationGain(chn, gain);
	return;
}
bool hasContextCalibration(M2k* ctx)
{
	bool ao = ctx->hasContextCalibration();
	return ao;
}
//std::map< double, std::shared_ptr< struct CALIBRATION_PARAMETERS > > &getLUT()

bool isCalibrated(M2k* ctx)
{
	bool ao = ctx->isCalibrated();
	return ao;
}
void setLed(M2k* ctx, bool on)
{
	ctx->setLed(on);
	return;
}
bool getLed(M2k* ctx)
{
	bool ao = ctx->getLed();
	return ao;
}


/*ctx->getUri(); errors our
char* getUri(Context* ctx)
{
	std::string uri = ctx->getUri();
	char* cstr = new char[uri.length() + 1];
	//char* cstr = new char[2];
	strcpy(cstr, uri.c_str());
	//const char* cstr = uri.c_str();

	return cstr;
};
/**/

