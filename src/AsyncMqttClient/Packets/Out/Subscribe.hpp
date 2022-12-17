/****************************************************************************************************************************
  Subscribe.hpp
  
  AsyncMqttClient_Generic is a library for ESP32, ESP8266, Protenta_H7, STM32F7, etc. with current AsyncTCP support
  
  Based on and modified from :
  
  1) async-mqtt-client (https://github.com/marvinroger/async-mqtt-client)
  
  Built by Khoi Hoang https://github.com/khoih-prog/AsyncMqttClient_Generic
 *****************************************************************************************************************************/

#pragma once

#ifndef SUBSCRIBE_HPP
#define SUBSCRIBE_HPP

#include <cstring>  // strlen
#include <vector>

#include "OutPacket.hpp"
#include "../../Flags.hpp"
#include "../../Helpers.hpp"
#include "../../Storage.hpp"

namespace AsyncMqttClientInternals 
{
  class SubscribeOutPacket : public OutPacket 
  {
    public:
      SubscribeOutPacket(const char* topic, uint8_t qos);
      const uint8_t* data(size_t index = 0) const;
      size_t size() const;

    private:
      std::vector<uint8_t> _data;
  };
}  // namespace AsyncMqttClientInternals

#endif    // SUBSCRIBE_HPP
