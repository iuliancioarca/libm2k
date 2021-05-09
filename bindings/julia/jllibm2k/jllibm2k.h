// JLLIBM2K.h - Contains declarations of libm2k c julia wrapper functions
#pragma once
#define JLLIBM2K_EXPORTS

#ifdef JLLIBM2K_EXPORTS
#define JLLIBM2K_API __declspec(dllexport)
#else
#define JLLIBM2K_API __declspec(dllimport)
#endif

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

struct chdata
{
	double* ch1;
	double* ch2;
};

// contextbuilder.hpp
//extern "C" JLLIBM2K_API std::vector<libm2k::CONTEXT_INFO*> getContextsInfo();
//extern "C" JLLIBM2K_API std::vector<const char*> getAllContexts();
//extern "C" JLLIBM2K_API Context* contextOpen(const char*);
//extern "C" JLLIBM2K_API Context* contextOpen(struct iio_context*, const char*);
extern "C" JLLIBM2K_API Context* contextOpen();
//extern "C" JLLIBM2K_API M2k* m2kOpen(const char*);
//extern "C" JLLIBM2K_API M2k* m2kOpen(struct iio_context*, const char*);
extern "C" JLLIBM2K_API M2k* m2kOpen();
extern "C" JLLIBM2K_API void contextClose(Context*);
//extern "C" JLLIBM2K_API void contextCloseAll();
//extern "C" JLLIBM2K_API const char* getVersion();


// context.hpp
//extern "C" JLLIBM2K_API  char* getUri(Context*);
extern "C" JLLIBM2K_API  libm2k::analog::DMM* getDMM(Context*, unsigned int index);
//extern "C" JLLIBM2K_API  libm2k::analog::DMM* getDMM(const char* name);
//extern "C" JLLIBM2K_API  std::vector< libm2k::analog::DMM* > getAllDmm();
//extern "C" JLLIBM2K_API  std::vector< const char* > getAvailableContextAttributes();
//extern "C" JLLIBM2K_API  const char* getContextAttributeValue(Context*, const char* attr);
//extern "C" JLLIBM2K_API  const char* getContextDescription(Context*);
//extern "C" JLLIBM2K_API  const char* getSerialNumber(Context*);
//extern "C" JLLIBM2K_API  std::unordered_set< const char* > getAllDevices();
//extern "C" JLLIBM2K_API  void logAllAttributes();
//extern "C" JLLIBM2K_API  M2k* toM2k();
//extern "C" JLLIBM2K_API  Lidar* toLidar();
//extern "C" JLLIBM2K_API  Generic* toGeneric();
//extern "C" JLLIBM2K_API  unsigned int getDmmCount();
//extern "C" JLLIBM2K_API  const char* getFirmwareVersion();
//extern "C" JLLIBM2K_API  const struct libm2k::IIO_CONTEXT_VERSION getIioContextVersion();
//extern "C" JLLIBM2K_API  struct iio_context* getIioContext();
//extern "C" JLLIBM2K_API  void setTimeout(unsigned int timeout);


// m2k.hpp
extern "C" JLLIBM2K_API  void reset(M2k* ctx);
extern "C" JLLIBM2K_API  bool calibrateADC(M2k* ctx);
extern "C" JLLIBM2K_API  bool calibrateDAC(M2k* ctx);
extern "C" JLLIBM2K_API  double calibrateFromContext(M2k* ctx);
extern "C" JLLIBM2K_API  libm2k::digital::M2kDigital* getDigital(M2k* ctx);
extern "C" JLLIBM2K_API  libm2k::analog::M2kPowerSupply* getPowerSupply(M2k* ctx);
extern "C" JLLIBM2K_API  libm2k::analog::M2kAnalogIn* getAnalogIn(M2k* ctx);
extern "C" JLLIBM2K_API  libm2k::analog::M2kAnalogIn* getAnalogIn_(M2k* ctx , char* dev_name);
extern "C" JLLIBM2K_API  libm2k::analog::M2kAnalogOut* getAnalogOut(M2k* ctx);
extern "C" JLLIBM2K_API  bool hasMixedSignal(M2k* ctx);
extern "C" JLLIBM2K_API  void startMixedSignalAcquisition(M2k* ctx, unsigned int nb_samples);
extern "C" JLLIBM2K_API  void stopMixedSignalAcquisition(M2k* ctx);
extern "C" JLLIBM2K_API  int getDacCalibrationOffset(M2k* ctx, unsigned int chn);
extern "C" JLLIBM2K_API  double getDacCalibrationGain(M2k* ctx, unsigned int chn);
extern "C" JLLIBM2K_API  int getAdcCalibrationOffset(M2k* ctx, unsigned int chn);
extern "C" JLLIBM2K_API  double getAdcCalibrationGain(M2k* ctx, unsigned int chn);
extern "C" JLLIBM2K_API  void setDacCalibrationOffset(M2k* ctx, unsigned int chn, int offset);
extern "C" JLLIBM2K_API  void setDacCalibrationGain(M2k* ctx, unsigned int chn, double gain);
extern "C" JLLIBM2K_API  void setAdcCalibrationOffset(M2k* ctx, unsigned int chn, int offset);
extern "C" JLLIBM2K_API  void setAdcCalibrationGain(M2k* ctx, unsigned int chn, double gain);
extern "C" JLLIBM2K_API  bool hasContextCalibration(M2k* ctx);
//extern "C" JLLIBM2K_API  std::map< double, std::shared_ptr< struct CALIBRATION_PARAMETERS > > &getLUT();
extern "C" JLLIBM2K_API  bool isCalibrated(M2k* ctx);
extern "C" JLLIBM2K_API  void setLed(M2k* ctx, bool on);
extern "C" JLLIBM2K_API  bool getLed(M2k* ctx);


// m2kanalogin.hpp
extern "C" JLLIBM2K_API void startAcquisition(M2kAnalogIn* ain, unsigned int nb_samples);
extern "C" JLLIBM2K_API void stopAcquisition(M2kAnalogIn* ain);
//extern "C" JLLIBM2K_API chdata* getSamples(M2kAnalogIn* ain, unsigned int nb_samples);
//extern "C" JLLIBM2K_API std::vector< std::vector< double > > getSamplesRaw(M2kAnalogIn* ain, unsigned int nb_samples);
extern "C" JLLIBM2K_API const double* getSamplesInterleaved(M2kAnalogIn* ain, unsigned int nb_samples);
//extern "C" JLLIBM2K_API const short* getSamplesRawInterleaved(M2kAnalogIn* ain, unsigned int nb_samples);
//extern "C" JLLIBM2K_API short getVoltageRaw(M2kAnalogIn* ain, unsigned int ch);
extern "C" JLLIBM2K_API double getVoltage(M2kAnalogIn* ain, unsigned int ch);
//extern "C" JLLIBM2K_API short getVoltageRaw(M2kAnalogIn* ain, libm2k::analog::ANALOG_IN_CHANNEL ch);
//extern "C" JLLIBM2K_API double getVoltage(M2kAnalogIn* ain, libm2k::analog::ANALOG_IN_CHANNEL ch);
//extern "C" JLLIBM2K_API std::vector< short > getVoltageRaw(M2kAnalogIn* ain);
//extern "C" JLLIBM2K_API std::vector< double > getVoltage(M2kAnalogIn* ain);
//extern "C" JLLIBM2K_API const short* getVoltageRawP(M2kAnalogIn* ain);
//extern "C" JLLIBM2K_API const double* getVoltageP(M2kAnalogIn* ain);
extern "C" JLLIBM2K_API void setVerticalOffset(M2kAnalogIn* ain, unsigned int channel, double vertOffset);
extern "C" JLLIBM2K_API double getVerticalOffset(M2kAnalogIn* ain, unsigned int  channel);
extern "C" JLLIBM2K_API double getScalingFactor(M2kAnalogIn* ain, unsigned int ch);
extern "C" JLLIBM2K_API void setRange(M2kAnalogIn* ain, unsigned int channel, unsigned int range);
extern "C" JLLIBM2K_API void setRangeMinMax(M2kAnalogIn* ain, unsigned int channel, double min, double max);
//extern "C" JLLIBM2K_API libm2k::analog::M2K_RANGE getRange(M2kAnalogIn* ain, libm2k::analog::ANALOG_IN_CHANNEL channel);
//extern "C" JLLIBM2K_API std::pair< double, double > getRangeLimits(M2kAnalogIn* ain, libm2k::analog::M2K_RANGE range);
//extern "C" JLLIBM2K_API std::vector< std::pair< const char*, std::pair< double, double > > > getAvailableRanges(M2kAnalogIn* ain);
//extern "C" JLLIBM2K_API int getOversamplingRatio(M2kAnalogIn* ain);
//extern "C" JLLIBM2K_API int getOversamplingRatio(M2kAnalogIn* ain, unsigned int chn_idx);
//extern "C" JLLIBM2K_API int setOversamplingRatio(M2kAnalogIn* ain, int oversampling);
//extern "C" JLLIBM2K_API int setOversamplingRatio(M2kAnalogIn* ain, unsigned int chn_idx, int oversampling);
extern "C" JLLIBM2K_API double getSampleRate(M2kAnalogIn* ain);
//extern "C" JLLIBM2K_API std::vector< double > getAvailableSampleRates(M2kAnalogIn* ain);
extern "C" JLLIBM2K_API double setSampleRate(M2kAnalogIn* ain, double samplerate);
//extern "C" JLLIBM2K_API std::pair< double, double > getHysteresisRange(M2kAnalogIn* ain, ANALOG_IN_CHANNEL chn);
extern "C" JLLIBM2K_API double getFilterCompensation(M2kAnalogIn* ain, double samplerate);
//extern "C" JLLIBM2K_API double getValueForRange(M2kAnalogIn* ain, M2K_RANGE range);
//extern "C" JLLIBM2K_API double convertRawToVolts(M2kAnalogIn* ain, unsigned int channel, short raw);
//extern "C" JLLIBM2K_API short convertVoltsToRaw(M2kAnalogIn* ain, unsigned int channel, double voltage);
extern "C" JLLIBM2K_API unsigned int getNbChannels(M2kAnalogIn* ain);
extern "C" JLLIBM2K_API const char* getNameAin(M2kAnalogIn* ain);
extern "C" JLLIBM2K_API void enableChannel(M2kAnalogIn* ain, unsigned int chnIdx, bool enable);
extern "C" JLLIBM2K_API bool isChannelEnabled(M2kAnalogIn* ain, unsigned int chnIdx);
extern "C" JLLIBM2K_API void cancelAcquisition(M2kAnalogIn* ain);
extern "C" JLLIBM2K_API void setKernelBuffersCount(M2kAnalogIn* ain, unsigned int count);
extern "C" JLLIBM2K_API libm2k::M2kHardwareTrigger* getTrigger(M2kAnalogIn* ain);
//extern "C" JLLIBM2K_API struct IIO_OBJECTS getIioObjects(M2kAnalogIn* ain);
//extern "C" JLLIBM2K_API void getSamples(M2kAnalogIn* ain, std::vector< std::vector< double >> &data, unsigned int nb_samples);
//extern "C" JLLIBM2K_API const char* getChannelName(M2kAnalogIn* ain, unsigned int channel);
extern "C" JLLIBM2K_API double getMaximumSamplerate(M2kAnalogIn* ain);


// dmm.hpp
//extern "C" JLLIBM2K_API std::vector< const char* > getAllChannels();
extern "C" JLLIBM2K_API double readChannelDmm(M2kAnalogIn* ain, unsigned int index);
//extern "C" JLLIBM2K_API libm2k::analog::DMM_READING readChannel(const char* chn_name);
//extern "C" JLLIBM2K_API std::vector< libm2k::analog::DMM_READING > readAll();
extern "C" JLLIBM2K_API const char* getNameDmm(M2kAnalogIn* ain);


// analogout.hpp
//extern "C" JLLIBM2K_API std::vector< int > getOversamplingRatio();
//extern "C" JLLIBM2K_API int getOversamplingRatio(unsigned int chn);
//extern "C" JLLIBM2K_API std::vector< int > setOversamplingRatio(std::vector< int > oversampling_ratio);
//extern "C" JLLIBM2K_API int setOversamplingRatio(unsigned int chn, int oversampling_ratio);
//extern "C" JLLIBM2K_API std::vector< double > getSampleRate();
extern "C" JLLIBM2K_API double getSampleRateFgen(M2kAnalogOut* fgen, unsigned int chn);
//extern "C" JLLIBM2K_API std::vector< double > getAvailableSampleRates(unsigned int chn);
//extern "C" JLLIBM2K_API std::vector< double > setSampleRate(std::vector< double > samplerates);
extern "C" JLLIBM2K_API double setSampleRateFgen(M2kAnalogOut* fgen, unsigned int chn, double samplerate);
extern "C" JLLIBM2K_API void setCyclic(M2kAnalogOut* fgen, bool en);
extern "C" JLLIBM2K_API void setCyclicCh(M2kAnalogOut* fgen, unsigned int chn, bool en);
extern "C" JLLIBM2K_API bool getCyclic(M2kAnalogOut* fgen, unsigned int chn);
extern "C" JLLIBM2K_API double getScalingFactorFgen(M2kAnalogOut* fgen, unsigned int chn);
extern "C" JLLIBM2K_API double getFilterCompensationFgen(M2kAnalogOut* fgen, double samplerate);
//extern "C" JLLIBM2K_API void pushBytes(unsigned int chnIdx, double* data, unsigned int nb_samples);
//extern "C" JLLIBM2K_API void pushRawBytes(unsigned int chnIdx, short* data, unsigned int nb_samples);
extern "C" JLLIBM2K_API void pushInterleaved(M2kAnalogOut* fgen, double* data, unsigned int nb_channels, unsigned int nb_samples);
//extern "C" JLLIBM2K_API void pushRawInterleaved(short* data, unsigned int nb_channels, unsigned int nb_samples);
extern "C" JLLIBM2K_API void push(M2kAnalogOut * fgen, unsigned int chnIdx, double* data, size_t arr_len);
//extern "C" JLLIBM2K_API void pushRaw(unsigned int chnIdx, std::vector< short > const& data);
//extern "C" JLLIBM2K_API void push(std::vector< std::vector< double >> const& data);
//extern "C" JLLIBM2K_API void pushRaw(std::vector< std::vector< short >> const& data);
extern "C" JLLIBM2K_API void stopAllFgen(M2kAnalogOut* fgen);
extern "C" JLLIBM2K_API void stopFgen(M2kAnalogOut* fgen, unsigned int chn);
extern "C" JLLIBM2K_API void cancelBufferAllFgen(M2kAnalogOut* fgen);
extern "C" JLLIBM2K_API void cancelBufferFgen(M2kAnalogOut* fgen, unsigned int chn);
extern "C" JLLIBM2K_API void enableChannelFgen(M2kAnalogOut* fgen, unsigned int chnIdx, bool enable);
extern "C" JLLIBM2K_API bool isChannelEnabledFgen(M2kAnalogOut* fgen, unsigned int chnIdx);
extern "C" JLLIBM2K_API void setKernelBuffersCountFgen(M2kAnalogOut* fgen, unsigned int chnIdx, unsigned int count);
//extern "C" JLLIBM2K_API short convertVoltsToRaw(unsigned int channel, double voltage);
//extern "C" JLLIBM2K_API double convertRawToVolts(unsigned int channel, short raw);
//extern "C" JLLIBM2K_API struct IIO_OBJECTS getIioObjects();
//extern "C" JLLIBM2K_API unsigned int getNbChannels();
extern "C" JLLIBM2K_API const char* getChannelNameFgen(M2kAnalogOut* fgen, unsigned int channel);
extern "C" JLLIBM2K_API double getMaximumSamplerateFgen(M2kAnalogOut* fgen, unsigned int chn_idx);


// powersupply.hpp
extern "C" JLLIBM2K_API void enableChannelPsu(M2kPowerSupply*, unsigned int chn, bool en);
extern "C" JLLIBM2K_API void enableAllPsu(M2kPowerSupply*, bool en);
extern "C" JLLIBM2K_API double readChannelPsu(M2kPowerSupply*, unsigned int chn);
extern "C" JLLIBM2K_API void pushChannelPsu(M2kPowerSupply*, unsigned int chn, double value);
extern "C" JLLIBM2K_API bool anyChannelEnabledPsu(M2kPowerSupply*);

/*
// digital.hpp
extern "C" JLLIBM2K_API void setDirection(unsigned short mask);
extern "C" JLLIBM2K_API void setDirection(unsigned int index, DIO_DIRECTION dir);
extern "C" JLLIBM2K_API void setDirection(unsigned int index, bool dir);
extern "C" JLLIBM2K_API void setDirection(DIO_CHANNEL index, bool dir);
extern "C" JLLIBM2K_API void setDirection(DIO_CHANNEL index, DIO_DIRECTION dir);
extern "C" JLLIBM2K_API DIO_DIRECTION getDirection(DIO_CHANNEL index);
extern "C" JLLIBM2K_API void setValueRaw(DIO_CHANNEL index, DIO_LEVEL level);
extern "C" JLLIBM2K_API void push(std::vector< unsigned short > const& data);
extern "C" JLLIBM2K_API void push(unsigned short* data, unsigned int nb_samples);
extern "C" JLLIBM2K_API void setValueRaw(unsigned int index, DIO_LEVEL level);
extern "C" JLLIBM2K_API void setValueRaw(DIO_CHANNEL index, bool level);
extern "C" JLLIBM2K_API DIO_LEVEL getValueRaw(DIO_CHANNEL index);
extern "C" JLLIBM2K_API DIO_LEVEL getValueRaw(unsigned int index);
extern "C" JLLIBM2K_API void stopBufferOut();
extern "C" JLLIBM2K_API void startAcquisition(unsigned int nb_samples);
extern "C" JLLIBM2K_API void stopAcquisition();
extern "C" JLLIBM2K_API void cancelAcquisition();
extern "C" JLLIBM2K_API void cancelBufferOut();
extern "C" JLLIBM2K_API std::vector< unsigned short > getSamples(unsigned int nb_samples);
extern "C" JLLIBM2K_API const unsigned short* getSamplesP(unsigned int nb_samples);
extern "C" JLLIBM2K_API void enableChannel(unsigned int index, bool enable);
extern "C" JLLIBM2K_API void enableChannel(DIO_CHANNEL index, bool enable);
extern "C" JLLIBM2K_API void enableAllOut(bool enable);
extern "C" JLLIBM2K_API bool anyChannelEnabled(DIO_DIRECTION dir);
extern "C" JLLIBM2K_API void setOutputMode(DIO_CHANNEL chn, DIO_MODE mode);
extern "C" JLLIBM2K_API void setOutputMode(unsigned int chn, DIO_MODE mode);
extern "C" JLLIBM2K_API DIO_MODE getOutputMode(DIO_CHANNEL chn);
extern "C" JLLIBM2K_API DIO_MODE getOutputMode(unsigned int chn);
extern "C" JLLIBM2K_API double setSampleRateIn(double samplerate);
extern "C" JLLIBM2K_API double setSampleRateOut(double samplerate);
extern "C" JLLIBM2K_API double getSampleRateIn();
extern "C" JLLIBM2K_API double getSampleRateOut();
extern "C" JLLIBM2K_API bool getCyclic();
extern "C" JLLIBM2K_API void setCyclic(bool cyclic);
extern "C" JLLIBM2K_API libm2k::M2kHardwareTrigger * getTrigger();
extern "C" JLLIBM2K_API void setKernelBuffersCountIn(unsigned int count);
extern "C" JLLIBM2K_API void setKernelBuffersCountOut(unsigned int count);
extern "C" JLLIBM2K_API struct IIO_OBJECTS getIioObjects();
extern "C" JLLIBM2K_API unsigned int getNbChannelsIn();
extern "C" JLLIBM2K_API unsigned int getNbChannelsOut();
extern "C" JLLIBM2K_API void getSamples(std::vector< unsigned short > &data, unsigned int nb_samples);
extern "C" JLLIBM2K_API void setRateMux();
extern "C" JLLIBM2K_API void resetRateMux();
/*/


// m2ktrigger.hpp
// TODO: test all
// TODO: test how ENUMS are imported and exported to Julia
extern "C" JLLIBM2K_API int getAnalogLevelRaw(M2kHardwareTrigger* trg, unsigned int chnIdx);
extern "C" JLLIBM2K_API void setAnalogLevelRaw(M2kHardwareTrigger* trg, unsigned int chnIdx, int level);
extern "C" JLLIBM2K_API void setAnalogLevel(M2kHardwareTrigger* trg, unsigned int chnIdx, double v_level);
extern "C" JLLIBM2K_API double getAnalogLevel(M2kHardwareTrigger* trg, unsigned int chnIdx);
extern "C" JLLIBM2K_API double getAnalogHysteresis(M2kHardwareTrigger* trg, unsigned int chnIdx);
extern "C" JLLIBM2K_API void setAnalogHysteresis(M2kHardwareTrigger* trg, unsigned int chnIdx, double hysteresis);
//extern "C" JLLIBM2K_API M2K_TRIGGER_CONDITION_ANALOG getAnalogCondition(M2kHardwareTrigger* trg, unsigned int chnIdx);
//extern "C" JLLIBM2K_API void setAnalogCondition(M2kHardwareTrigger* trg, unsigned int chnIdx, M2K_TRIGGER_CONDITION_ANALOG cond);
//extern "C" JLLIBM2K_API M2K_TRIGGER_CONDITION_DIGITAL getDigitalCondition(M2kHardwareTrigger* trg, unsigned int chnIdx);
//extern "C" JLLIBM2K_API void setDigitalCondition(M2kHardwareTrigger* trg, unsigned int chnIdx, unsigned int cond);
extern "C" JLLIBM2K_API M2K_TRIGGER_MODE getAnalogMode(M2kHardwareTrigger* trg, unsigned int chnIdx);
extern "C" JLLIBM2K_API void setAnalogMode(M2kHardwareTrigger* trg, unsigned int chnIdx, unsigned int mode);
//extern "C" JLLIBM2K_API libm2k::digital::DIO_TRIGGER_MODE getDigitalMode(M2kHardwareTrigger* trg);
extern "C" JLLIBM2K_API void setDigitalMode(M2kHardwareTrigger* trg, unsigned int mode);
//extern "C" JLLIBM2K_API M2K_TRIGGER_SOURCE_ANALOG getAnalogSource(M2kHardwareTrigger* trg);
extern "C" JLLIBM2K_API void setAnalogSource(M2kHardwareTrigger* trg, unsigned int src);
extern "C" JLLIBM2K_API int getAnalogSourceChannel(M2kHardwareTrigger* trg);
extern "C" JLLIBM2K_API void setAnalogSourceChannel(M2kHardwareTrigger* trg, unsigned int chnIdx);
extern "C" JLLIBM2K_API int getAnalogDelay(M2kHardwareTrigger* trg);
extern "C" JLLIBM2K_API void setAnalogDelay(M2kHardwareTrigger* trg, int delay);
extern "C" JLLIBM2K_API int getDigitalDelay(M2kHardwareTrigger* trg);
extern "C" JLLIBM2K_API void setDigitalDelay(M2kHardwareTrigger* trg, int delay);
extern "C" JLLIBM2K_API void setAnalogStreamingFlag(M2kHardwareTrigger* trg, bool enable);
extern "C" JLLIBM2K_API bool getAnalogStreamingFlag(M2kHardwareTrigger* trg);
extern "C" JLLIBM2K_API void setDigitalStreamingFlag(M2kHardwareTrigger* trg, bool enable);
extern "C" JLLIBM2K_API bool getDigitalStreamingFlag(M2kHardwareTrigger* trg);
//extern "C" JLLIBM2K_API M2K_TRIGGER_CONDITION_DIGITAL getAnalogExternalCondition(M2kHardwareTrigger* trg, unsigned int chnIdx);
//extern "C" JLLIBM2K_API void setAnalogExternalCondition(M2kHardwareTrigger* trg, unsigned int chnIdx, unsigned int cond);
//extern "C" JLLIBM2K_API M2K_TRIGGER_CONDITION_DIGITAL getDigitalExternalCondition(M2kHardwareTrigger* trg);
extern "C" JLLIBM2K_API void setDigitalExternalCondition(M2kHardwareTrigger* trg, unsigned int cond);
extern "C" JLLIBM2K_API void setAnalogExternalOutSelect(M2kHardwareTrigger* trg, unsigned int output_select);
//extern "C" JLLIBM2K_API M2K_TRIGGER_OUT_SELECT getAnalogExternalOutSelect(M2kHardwareTrigger* trg);
extern "C" JLLIBM2K_API void setDigitalSource(M2kHardwareTrigger* trg, unsigned int external_src);
//extern "C" JLLIBM2K_API M2K_TRIGGER_SOURCE_DIGITAL getDigitalSource(M2kHardwareTrigger* trg);
