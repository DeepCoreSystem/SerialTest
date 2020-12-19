/*
 * Project: SerialTest
 * File:    \lib\SureMark\src\SureMark.cpp
 *
 * Created: 2020-12-19 10:48 by Philippe Devaux
 * -----
 * Last Modified: 2020-12-19 12:01
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

void SureMark::sendCommand()
{
  _serial.write()
}

void SureMark::begin(unsigned long baudRate)
{
  _serial.begin(baudRate);
}

void SureMark::selectFont(PrintFont font)
{
}
