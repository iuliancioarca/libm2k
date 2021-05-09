# Julia wrapper for header: jllibm2k.h (manually edited based on jllibm2k.hpp)
# Automatically generated using Clang.jl


function contextOpen()
    ccall((:contextOpen, jllibm2k), Ptr{Cint}, ())
end

function m2kOpen()
    ccall((:m2kOpen, jllibm2k), Ptr{Cint}, ())
end

function contextClose(arg1)
    ccall((:contextClose, jllibm2k), Cvoid, (Ptr{Cint},), arg1)
end

function getDMM(arg1, index)
    ccall((:getDMM, jllibm2k), Ptr{Cint}, (Ptr{Cint}, UInt32), arg1, index)
end

function reset(ctx)
    ccall((:reset, jllibm2k), Cvoid, (Ptr{Cint},), ctx)
end

function calibrateADC(ctx)
    ccall((:calibrateADC, jllibm2k), Cint, (Ptr{Cint},), ctx)
end

function calibrateDAC(ctx)
    ccall((:calibrateDAC, jllibm2k), Cint, (Ptr{Cint},), ctx)
end

function calibrateFromint(ctx)
    ccall((:calibrateFromint, jllibm2k), Cdouble, (Ptr{Cint},), ctx)
end

function getDigital(ctx)
    ccall((:getDigital, jllibm2k), Ptr{Cint}, (Ptr{Cint},), ctx)
end

function getPowerSupply(ctx)
    ccall((:getPowerSupply, jllibm2k), Ptr{Cint}, (Ptr{Cint},), ctx)
end

function getAnalogIn(ctx)
    ccall((:getAnalogIn, jllibm2k), Ptr{Cint}, (Ptr{Cint},), ctx)
end

function getAnalogIn_(ctx, dev_name)
    ccall((:getAnalogIn_, jllibm2k), Ptr{Cint}, (Ptr{Cint}, Cstring), ctx, dev_name)
end

function getAnalogOut(ctx)
    ccall((:getAnalogOut, jllibm2k), Ptr{Cint}, (Ptr{Cint},), ctx)
end

function hasMixedSignal(ctx)
    ccall((:hasMixedSignal, jllibm2k), Cint, (Ptr{Cint},), ctx)
end

function startMixedSignalAcquisition(ctx, nb_samples)
    ccall((:startMixedSignalAcquisition, jllibm2k), Cvoid, (Ptr{Cint}, UInt32), ctx, nb_samples)
end

function stopMixedSignalAcquisition(ctx)
    ccall((:stopMixedSignalAcquisition, jllibm2k), Cvoid, (Ptr{Cint},), ctx)
end

function getDacCalibrationOffset(ctx, chn)
    ccall((:getDacCalibrationOffset, jllibm2k), Cint, (Ptr{Cint}, UInt32), ctx, chn)
end

function getDacCalibrationGain(ctx, chn)
    ccall((:getDacCalibrationGain, jllibm2k), Cdouble, (Ptr{Cint}, UInt32), ctx, chn)
end

function getAdcCalibrationOffset(ctx, chn)
    ccall((:getAdcCalibrationOffset, jllibm2k), Cint, (Ptr{Cint}, UInt32), ctx, chn)
end

function getAdcCalibrationGain(ctx, chn)
    ccall((:getAdcCalibrationGain, jllibm2k), Cdouble, (Ptr{Cint}, UInt32), ctx, chn)
end

function setDacCalibrationOffset(ctx, chn, offset)
    ccall((:setDacCalibrationOffset, jllibm2k), Cvoid, (Ptr{Cint}, UInt32, Cint), ctx, chn, offset)
end

function setDacCalibrationGain(ctx, chn, gain)
    ccall((:setDacCalibrationGain, jllibm2k), Cvoid, (Ptr{Cint}, UInt32, Cdouble), ctx, chn, gain)
end

function setAdcCalibrationOffset(ctx, chn, offset)
    ccall((:setAdcCalibrationOffset, jllibm2k), Cvoid, (Ptr{Cint}, UInt32, Cint), ctx, chn, offset)
end

function setAdcCalibrationGain(ctx, chn, gain)
    ccall((:setAdcCalibrationGain, jllibm2k), Cvoid, (Ptr{Cint}, UInt32, Cdouble), ctx, chn, gain)
end

function hasintCalibration()
    ccall((:hasintCalibration, jllibm2k), Cint, ())
end

function isCalibrated(ctx)
    ccall((:isCalibrated, jllibm2k), Cint, (Ptr{Cint},), ctx)
end

function setLed(ctx, on)
    ccall((:setLed, jllibm2k), Cvoid, (Ptr{Cint}, Cint), ctx, on)
end

function getLed(ctx)
    ccall((:getLed, jllibm2k), Cint, (Ptr{Cint},), ctx)
end

function startAcquisition(ain, nb_samples)
    ccall((:startAcquisition, jllibm2k), Cvoid, (Ptr{Cint}, UInt32), ain, nb_samples)
end

function stopAcquisition(ain)
    ccall((:stopAcquisition, jllibm2k), Cvoid, (Ptr{Cint},), ain)
end

function getSamplesInterleaved(ain, nb_samples)
    ccall((:getSamplesInterleaved, jllibm2k), Ptr{Cdouble}, (Ptr{Cint}, UInt32), ain, nb_samples)
end

function getVoltage(ain, ch)
    ccall((:getVoltage, jllibm2k), Cdouble, (Ptr{Cint}, UInt32), ain, ch)
end

function setVerticalOffset(ain, channel, vertOffset)
    ccall((:setVerticalOffset, jllibm2k), Cvoid, (Ptr{Cint}, UInt32, Cdouble), ain, channel, vertOffset)
end

function getVerticalOffset(ain, channel)
    ccall((:getVerticalOffset, jllibm2k), Cdouble, (Ptr{Cint}, UInt32), ain, channel)
end

function getScalingFactor(ain, ch)
    ccall((:getScalingFactor, jllibm2k), Cdouble, (Ptr{Cint}, UInt32), ain, ch)
end

function setRange(ain, channel, range)
    ccall((:setRange, jllibm2k), Cvoid, (Ptr{Cint}, UInt32, UInt32), ain, channel, range)
end

function setRangeMinMax(ain, channel, min, max)
    ccall((:setRangeMinMax, jllibm2k), Cvoid, (Ptr{Cint}, UInt32, Cdouble, Cdouble), ain, channel, min, max)
end

function getSampleRate(ain)
    ccall((:getSampleRate, jllibm2k), Cdouble, (Ptr{Cint},), ain)
end

function setSampleRate(ain, samplerate)
    ccall((:setSampleRate, jllibm2k), Cdouble, (Ptr{Cint}, Cdouble), ain, samplerate)
end

function getFilterCompensation(ain, samplerate)
    ccall((:getFilterCompensation, jllibm2k), Cdouble, (Ptr{Cint}, Cdouble), ain, samplerate)
end

function getNbChannels(ain)
    ccall((:getNbChannels, jllibm2k), UInt32, (Ptr{Cint},), ain)
end

function getNameAin(ain)
    ccall((:getNameAin, jllibm2k), Cstring, (Ptr{Cint},), ain)
end

function enableChannel(ain, chnIdx, enable)
    ccall((:enableChannel, jllibm2k), Cvoid, (Ptr{Cint}, UInt32, Cint), ain, chnIdx, enable)
end

function isChannelEnabled(ain, chnIdx)
    ccall((:isChannelEnabled, jllibm2k), Cint, (Ptr{Cint}, UInt32), ain, chnIdx)
end

function cancelAcquisition(ain)
    ccall((:cancelAcquisition, jllibm2k), Cvoid, (Ptr{Cint},), ain)
end

function setKernelBuffersCount(ain, count)
    ccall((:setKernelBuffersCount, jllibm2k), Cvoid, (Ptr{Cint}, UInt32), ain, count)
end

function getTrigger(ain)
    ccall((:getTrigger, jllibm2k), Ptr{Cint}, (Ptr{Cint},), ain)
end

function getMaximumSamplerate(ain)
    ccall((:getMaximumSamplerate, jllibm2k), Cdouble, (Ptr{Cint},), ain)
end

function readChannelDmm(ain, index)
    ccall((:readChannelDmm, jllibm2k), Cdouble, (Ptr{Cint}, UInt32), ain, index)
end

function getNameDmm(ain)
    ccall((:getNameDmm, jllibm2k), Cstring, (Ptr{Cint},), ain)
end

function getSampleRateFgen(fgen, chn)
    ccall((:getSampleRateFgen, jllibm2k), Cdouble, (Ptr{Cint}, UInt32), fgen, chn)
end

function setSampleRateFgen(fgen, chn, samplerate)
    ccall((:setSampleRateFgen, jllibm2k), Cdouble, (Ptr{Cint}, UInt32, Cdouble), fgen, chn, samplerate)
end

function setCyclic(fgen, en)
    ccall((:setCyclic, jllibm2k), Cvoid, (Ptr{Cint}, Cint), fgen, en)
end

function setCyclicCh(fgen, chn, en)
    ccall((:setCyclicCh, jllibm2k), Cvoid, (Ptr{Cint}, UInt32, Cint), fgen, chn, en)
end

function getCyclic()
    ccall((:getCyclic, jllibm2k), Cint, ())
end

function getScalingFactorFgen(fgen, chn)
    ccall((:getScalingFactorFgen, jllibm2k), Cdouble, (Ptr{Cint}, UInt32), fgen, chn)
end

function getFilterCompensationFgen(fgen, samplerate)
    ccall((:getFilterCompensationFgen, jllibm2k), Cdouble, (Ptr{Cint}, Cdouble), fgen, samplerate)
end

function pushInterleaved(fgen, data, nb_channels, nb_samples)
    ccall((:pushInterleaved, jllibm2k), Cvoid, (Ptr{Cint}, Ptr{Cdouble}, UInt32, UInt32), fgen, data, nb_channels, nb_samples)
end

function push(fgen, ch, data, nbytes) # added manually
    ccall((:push, jllibm2k), Cvoid, (Ptr{Cint}, UInt32, Ptr{Cdouble}, UInt32), fgen, ch, data, nbytes)
end

function stopAllFgen(fgen)
    ccall((:stopAllFgen, jllibm2k), Cvoid, (Ptr{Cint},), fgen)
end

function stopFgen(fgen, chn)
    ccall((:stopFgen, jllibm2k), Cvoid, (Ptr{Cint}, UInt32), fgen, chn)
end

function cancelBufferAllFgen(fgen)
    ccall((:cancelBufferAllFgen, jllibm2k), Cvoid, (Ptr{Cint},), fgen)
end

function cancelBufferFgen(fgen, chn)
    ccall((:cancelBufferFgen, jllibm2k), Cvoid, (Ptr{Cint}, UInt32), fgen, chn)
end

function enableChannelFgen(fgen, chnIdx, enable)
    ccall((:enableChannelFgen, jllibm2k), Cvoid, (Ptr{Cint}, UInt32, Cint), fgen, chnIdx, enable)
end

function isChannelEnabledFgen(fgen, channel)
    ccall((:isChannelEnabledFgen, jllibm2k), Cint, (Ptr{Cint}, UInt32), fgen, channel)
end

function setKernelBuffersCountFgen(fgen, chnIdx, count)
    ccall((:setKernelBuffersCountFgen, jllibm2k), Cvoid, (Ptr{Cint}, UInt32, UInt32), fgen, chnIdx, count)
end

function getChannelNameFgen(fgen, channel)
    ccall((:getChannelNameFgen, jllibm2k), Cstring, (Ptr{Cint}, UInt32), fgen, channel)
end

function getMaximumSamplerateFgen(fgen, chn_idx)
    ccall((:getMaximumSamplerateFgen, jllibm2k), Cdouble, (Ptr{Cint}, UInt32), fgen, chn_idx)
end

function enableChannelPsu(arg1, chn, en)
    ccall((:enableChannelPsu, jllibm2k), Cvoid, (Ptr{Cint}, UInt32, Cint), arg1, chn, en)
end

function enableAllPsu(arg1, en)
    ccall((:enableAllPsu, jllibm2k), Cvoid, (Ptr{Cint}, Cint), arg1, en)
end

function readChannelPsu(arg1, chn)
    ccall((:readChannelPsu, jllibm2k), Cdouble, (Ptr{Cint}, UInt32), arg1, chn)
end

function pushChannelPsu(arg1, chn, value)
    ccall((:pushChannelPsu, jllibm2k), Cvoid, (Ptr{Cint}, UInt32, Cdouble), arg1, chn, value)
end

function anyChannelEnabledPsu(arg1)
    ccall((:anyChannelEnabledPsu, jllibm2k), Cint, (Ptr{Cint},), arg1)
end

function getAnalogLevelRaw(trg, chnIdx)
    ccall((:getAnalogLevelRaw, jllibm2k), Cint, (Ptr{Cint}, UInt32), trg, chnIdx)
end

function setAnalogLevelRaw(trg, chnIdx, level)
    ccall((:setAnalogLevelRaw, jllibm2k), Cvoid, (Ptr{Cint}, UInt32, Cint), trg, chnIdx, level)
end

function setAnalogLevel(trg, chnIdx, v_level)
    ccall((:setAnalogLevel, jllibm2k), Cvoid, (Ptr{Cint}, UInt32, Cdouble), trg, chnIdx, v_level)
end

function getAnalogLevel(trg, chnIdx)
    ccall((:getAnalogLevel, jllibm2k), Cdouble, (Ptr{Cint}, UInt32), trg, chnIdx)
end

function getAnalogHysteresis(trg, chnIdx)
    ccall((:getAnalogHysteresis, jllibm2k), Cdouble, (Ptr{Cint}, UInt32), trg, chnIdx)
end

function setAnalogHysteresis(trg, chnIdx, hysteresis)
    ccall((:setAnalogHysteresis, jllibm2k), Cvoid, (Ptr{Cint}, UInt32, Cdouble), trg, chnIdx, hysteresis)
end

function setAnalogMode(trg, chnIdx, mode)
    ccall((:setAnalogMode, jllibm2k), Cvoid, (Ptr{Cint}, UInt32, UInt32), trg, chnIdx, mode)
end

function setDigitalMode(trg, mode)
    ccall((:setDigitalMode, jllibm2k), Cvoid, (Ptr{Cint}, UInt32), trg, mode)
end

function setAnalogSource(trg, src)
    ccall((:setAnalogSource, jllibm2k), Cvoid, (Ptr{Cint}, UInt32), trg, src)
end

function getAnalogSourceChannel(trg)
    ccall((:getAnalogSourceChannel, jllibm2k), Cint, (Ptr{Cint},), trg)
end

function setAnalogSourceChannel(trg, chnIdx)
    ccall((:setAnalogSourceChannel, jllibm2k), Cvoid, (Ptr{Cint}, UInt32), trg, chnIdx)
end

function getAnalogDelay(trg)
    ccall((:getAnalogDelay, jllibm2k), Cint, (Ptr{Cint},), trg)
end

function setAnalogDelay(trg, delay)
    ccall((:setAnalogDelay, jllibm2k), Cvoid, (Ptr{Cint}, Cint), trg, delay)
end

function getDigitalDelay(trg)
    ccall((:getDigitalDelay, jllibm2k), Cint, (Ptr{Cint},), trg)
end

function setDigitalDelay(trg, delay)
    ccall((:setDigitalDelay, jllibm2k), Cvoid, (Ptr{Cint}, Cint), trg, delay)
end

function setAnalogStreamingFlag(trg, enable)
    ccall((:setAnalogStreamingFlag, jllibm2k), Cvoid, (Ptr{Cint}, Cint), trg, enable)
end

function getAnalogStreamingFlag()
    ccall((:getAnalogStreamingFlag, jllibm2k), Cint, ())
end

function setDigitalStreamingFlag(trg, enable)
    ccall((:setDigitalStreamingFlag, jllibm2k), Cvoid, (Ptr{Cint}, Cint), trg, enable)
end

function getDigitalStreamingFlag()
    ccall((:getDigitalStreamingFlag, jllibm2k), Cint, ())
end

function setDigitalExternalCondition(trg, cond)
    ccall((:setDigitalExternalCondition, jllibm2k), Cvoid, (Ptr{Cint}, UInt32), trg, cond)
end

function setAnalogExternalOutSelect(trg, output_select)
    ccall((:setAnalogExternalOutSelect, jllibm2k), Cvoid, (Ptr{Cint}, UInt32), trg, output_select)
end

function setDigitalSource(trg, external_src)
    ccall((:setDigitalSource, jllibm2k), Cvoid, (Ptr{Cint}, UInt32), trg, external_src)
end
