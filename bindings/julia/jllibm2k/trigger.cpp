#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier

#include <libm2k/enums.hpp>
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
#include <libm2k/m2khardwaretrigger.hpp>

#include "jllibm2k.h"

using namespace std;
using namespace libm2k;


int getAnalogLevelRaw(M2kHardwareTrigger* trg, unsigned int chnIdx)
{
	int x = trg->getAnalogLevelRaw(chnIdx);
	return x;
}

void setAnalogLevelRaw(M2kHardwareTrigger* trg, unsigned int chnIdx, int level)
{
	trg->setAnalogLevelRaw(chnIdx, level);
	return;
}

void setAnalogLevel(M2kHardwareTrigger* trg, unsigned int chnIdx, double v_level)
{
	trg->setAnalogLevel(chnIdx, v_level);
	return;
}

double getAnalogLevel(M2kHardwareTrigger* trg, unsigned int chnIdx)
{
	double x=trg->getAnalogLevel(chnIdx);
	return x;
}

double getAnalogHysteresis(M2kHardwareTrigger* trg, unsigned int chnIdx)
{
	double x = trg->getAnalogHysteresis(chnIdx);
	return x;
}

void setAnalogHysteresis(M2kHardwareTrigger* trg, unsigned int chnIdx, double hysteresis)
{
	trg->setAnalogHysteresis(chnIdx, hysteresis);
	return;
}

M2K_TRIGGER_CONDITION_ANALOG getAnalogCondition(M2kHardwareTrigger* trg, unsigned int chnIdx)
{
	M2K_TRIGGER_CONDITION_ANALOG x = trg->getAnalogCondition(chnIdx);
	return x;
}

void setAnalogCondition(M2kHardwareTrigger* trg, unsigned int chnIdx, unsigned int cond)
{
	trg->setAnalogHysteresis(chnIdx, (M2K_TRIGGER_CONDITION_ANALOG)cond);
	return;
}

M2K_TRIGGER_CONDITION_DIGITAL getDigitalCondition(M2kHardwareTrigger* trg, unsigned int chnIdx)
{
	M2K_TRIGGER_CONDITION_DIGITAL x = trg->getDigitalCondition(chnIdx);
	return x;
}

void setDigitalCondition(M2kHardwareTrigger* trg, unsigned int chnIdx, unsigned int cond)
{
	trg->setDigitalCondition(chnIdx, (M2K_TRIGGER_CONDITION_DIGITAL)cond);
	return;
}

M2K_TRIGGER_MODE getAnalogMode(M2kHardwareTrigger* trg, unsigned int chnIdx)
{
	M2K_TRIGGER_MODE x = trg->getAnalogMode(chnIdx);
	return x;
}

void setAnalogMode(M2kHardwareTrigger* trg, unsigned int chnIdx, unsigned int mode)
{
	trg->setAnalogMode(chnIdx, (M2K_TRIGGER_MODE)mode);
	return;
}

libm2k::digital::DIO_TRIGGER_MODE getDigitalMode(M2kHardwareTrigger* trg)
{
	libm2k::digital::DIO_TRIGGER_MODE x = trg->getDigitalMode();
	return x;
}

void setDigitalMode(M2kHardwareTrigger* trg,  unsigned int mode)
{
	trg->setDigitalMode((libm2k::digital::DIO_TRIGGER_MODE)mode);
	return;
}

M2K_TRIGGER_SOURCE_ANALOG getAnalogSource(M2kHardwareTrigger* trg)
{
	M2K_TRIGGER_SOURCE_ANALOG x = trg->getAnalogSource();
	return x;
}

void setAnalogSource(M2kHardwareTrigger* trg, unsigned int src)
{
	trg->setAnalogSource((M2K_TRIGGER_SOURCE_ANALOG)src);
	return;
}

int getAnalogSourceChannel(M2kHardwareTrigger* trg)
{
	int x = trg->getAnalogSourceChannel();
	return x;
}

void setAnalogSourceChannel(M2kHardwareTrigger* trg, unsigned int chnIdx)
{
	trg->setAnalogSourceChannel(chnIdx);
	return;
}

int getAnalogDelay(M2kHardwareTrigger* trg)
{
	int x = trg->getAnalogDelay();
	return x;
}

void setAnalogDelay(M2kHardwareTrigger* trg, int delay)
{
	trg->setAnalogDelay(delay);
	return;
}

int getDigitalDelay(M2kHardwareTrigger* trg)
{
	int x = trg->getDigitalDelay();
	return x;
}

void setDigitalDelay(M2kHardwareTrigger* trg, int delay)
{
	trg->setDigitalDelay(delay);
	return;
}

void setAnalogStreamingFlag(M2kHardwareTrigger* trg, bool enable)
{
	trg->setAnalogStreamingFlag(enable);
	return;
}

bool getAnalogStreamingFlag(M2kHardwareTrigger* trg)
{
	bool x = trg->getAnalogStreamingFlag();
	return x;
}

void setDigitalStreamingFlag(M2kHardwareTrigger* trg, bool enable)
{
	trg->setDigitalStreamingFlag(enable);
	return;
}

bool getDigitalStreamingFlag(M2kHardwareTrigger* trg)
{
	bool x = trg->getDigitalStreamingFlag();
	return x;
}

M2K_TRIGGER_CONDITION_DIGITAL getAnalogExternalCondition(M2kHardwareTrigger* trg, unsigned int chnIdx)
{
	M2K_TRIGGER_CONDITION_DIGITAL x = trg->getAnalogExternalCondition(chnIdx);
	return x;
}

void setAnalogExternalCondition(M2kHardwareTrigger* trg, unsigned int chnIdx, unsigned int cond)
{
	trg->setAnalogExternalCondition(chnIdx, (M2K_TRIGGER_CONDITION_DIGITAL)cond);
	return;
}

M2K_TRIGGER_CONDITION_DIGITAL getDigitalExternalCondition(M2kHardwareTrigger* trg)
{
	M2K_TRIGGER_CONDITION_DIGITAL x = trg->getDigitalExternalCondition();
	return x;
}

void setDigitalExternalCondition(M2kHardwareTrigger* trg, unsigned int cond)
{
	trg->setDigitalExternalCondition((M2K_TRIGGER_CONDITION_DIGITAL)cond);
	return;
}

void setAnalogExternalOutSelect(M2kHardwareTrigger* trg, unsigned int  output_select)
{
	trg->setAnalogExternalOutSelect((M2K_TRIGGER_OUT_SELECT)output_select);
	return;
}

M2K_TRIGGER_OUT_SELECT getAnalogExternalOutSelect(M2kHardwareTrigger* trg)
{
	M2K_TRIGGER_OUT_SELECT x = trg->getAnalogExternalOutSelect();
	return x;
}

void setDigitalSource(M2kHardwareTrigger* trg,  unsigned int external_src)
{
	trg->setDigitalSource((M2K_TRIGGER_SOURCE_DIGITAL)external_src);
	return;
}

M2K_TRIGGER_SOURCE_DIGITAL getDigitalSource(M2kHardwareTrigger* trg)
{
	M2K_TRIGGER_SOURCE_DIGITAL x = trg->getDigitalSource();
	return x;
}