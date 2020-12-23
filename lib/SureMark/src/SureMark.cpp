/*
 * Project: SerialTest
 * File:    \lib\SureMark\src\SureMark.cpp
 *
 * Created: 2020-12-19 10:48 by Philippe Devaux
 * -----
 * Last Modified: 2020-12-23 09:04
 * Modified by:   Philippe Devaux
 * -----
 * Copyright (c) 2020 DeepCore Systems
 * -----
 *
 * HISTORY:
 * Date      	By	Comments
 * ----------	---	----------------------------------------------------------
 */

#include "SureMark.hpp"

/**
 * @brief Sets sensible defaults for the printer
 *
 */
void SureMark::setDefault()
{
  selectFont(Font_A);
}

void SureMark::begin(unsigned long baudRate)
{
  //_serial->begin(baudRate);
}

void SureMark::selectFont(PrintFont font)
{
  unsigned char myCMD[] = {0x1B, 0x21, font};
  _serial->write(myCMD, 3);
}

SureMark::SureMark(HardwareSerial *port)
{
  _serial = port;
}

SureMark::~SureMark()
{
}
