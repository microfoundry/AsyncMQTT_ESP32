/****************************************************************************************************************************
  MessageProperties.hpp
  
  AsyncMqttClient_Generic is a library for ESP32, ESP8266, Protenta_H7, STM32F7, etc. with current AsyncTCP support
  
  Based on and modified from :
  
  1) async-mqtt-client (https://github.com/marvinroger/async-mqtt-client)
  
  Built by Khoi Hoang https://github.com/khoih-prog/AsyncMqttClient_Generic
 *****************************************************************************************************************************/

#pragma once

#ifndef MESSAGE_PROPERTIES_HPP
#define MESSAGE_PROPERTIES_HPP

struct AsyncMqttClientMessageProperties 
{
  uint8_t qos;
  bool dup;
  bool retain;
};

#endif    // MESSAGE_PROPERTIES_HPP
