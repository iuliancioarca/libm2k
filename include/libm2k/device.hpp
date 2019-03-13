/*
 * Copyright 2016 Analog Devices, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GNU Radio; see the file LICENSE.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef DEVICE_HPP
#define DEVICE_HPP
#include <iio.h>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

namespace libm2k {
namespace utils {
class Channel;
class Buffer;

class Device
{
public:
	Device(struct iio_context* context, std::string dev_name = "");
	virtual ~Device();

	Channel *getChannel(unsigned int chnIdx);
	virtual void enableChannel(unsigned int chnIdx, bool enable);
	void push(std::vector<short> &data, unsigned int channel);
	void push(std::vector<double> &data, unsigned int channel);
	void stop();

	std::string getName();
	double getDoubleValue(std::string attr);
	double getDoubleValue(unsigned int, std::string attr, bool output=false);
	double setDoubleValue(double value, std::string attr);
	double setDoubleValue(unsigned int chn_idx, double value, std::string attr, bool output=false);

	bool getBoolValue(std::string attr);
	bool getBoolValue(unsigned int, std::string attr, bool output=false);
	bool setBoolValue(bool value, std::string attr);
	bool setBoolValue(unsigned int chn_idx, bool value, std::string attr, bool output=false);

	std::string setStringValue(std::string attr, std::string value);
	std::string getStringValue(std::string attr);

	std::vector<double> getAvailableSamplerates();
private:
	struct iio_context *m_context;
	struct iio_device *m_dev; //or a list of iio_Devices? in the case of m2k-dac-a and m2k-dac-b
	std::vector<Channel*> m_channel_list;
	Buffer* m_buffer;
};
}
}


#endif //DEVICE_HPP