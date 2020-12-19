/*
 * Project: SerialTest
 * File:    \lib\SureMark\src\SureMark.hpp
 *
 * Created: 2020-12-19 10:47 by Philippe Devaux
 * -----
 * Last Modified: 2020-12-19 11:52
 * Modified by:   Philippe Devaux
 * -----
 * Copyright (c) 2020 DeepCore Systems
 * -----
 *
 * HISTORY:
 * Date      	By	Comments
 * ----------	---	----------------------------------------------------------
 */

#pragma once
#include <Arduino.h>

// 4610 Printer Commands
const unsigned char cut[1] = {0x0C};                    // Form feed and cut paper
const unsigned char lf[1] = {0x0A};                     // Advance line (CR and LF)
const unsigned char CR[4] = {0x1B, 0x63, 0x30, 0x02};   // Select thermal receipt station
const unsigned char DI[4] = {0x1B, 0x63, 0x30, 0x04};   // Select document imprint portrait
const unsigned char DI_l[4] = {0x1B, 0x63, 0x30, 0x08}; // Select document imprint landscape

#define CMD_SET_PRINT_MODE 0x21

enum PrintFont
{
  Font_A = 0x00,
  Font_B = 0x01,
  Font_C = 0x02
};

class SureMark
{
private:
  Uart _serial;
  void sendCommand();

public:
  void begin(unsigned long baudRate);
  void setDefault();
  void selectFont(PrintFont font);
  SureMark(Uart &serial);
  ~SureMark();
};

SureMark::SureMark(Uart &serial)
{
  _serial = serial;
}

SureMark::~SureMark()
{
}
