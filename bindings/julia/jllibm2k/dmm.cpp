#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier

#include "jllibm2k.h"

using namespace std;
using namespace libm2k;
using namespace libm2k::analog;



//extern "C" JLLIBM2K_API std::vector< const char* > getAllChannels();
//extern "C" JLLIBM2K_API libm2k::analog::DMM_READING readChannel(unsigned int index);
//extern "C" JLLIBM2K_API libm2k::analog::DMM_READING readChannel(const char* chn_name);
//extern "C" JLLIBM2K_API std::vector< libm2k::analog::DMM_READING > readAll();
const char* getNameDmm(M2kAnalogIn* ain)
{
	std::string ain_name = ain->getName();
	char* cstr = new char[ain_name.length() + 1];
	strcpy(cstr, ain_name.c_str());
	return cstr;
};

double readChannelDmm(M2kAnalogIn* ain, unsigned int index)
{
	double data = ain->getVoltage(index);
	return data;
}