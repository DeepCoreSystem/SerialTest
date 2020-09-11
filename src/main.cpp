/*
 * Project: SerialTest
 * File:    \src\main.cpp
 *
 * Created: 2020-09-11 15:33 Philippe Devaux
 * -----
 * Last Modified:
 * Modified by:
 * -----
 * Copyright (c) 2020 DeepCore Systems
 * -----
 *
 * HISTORY:
 * Date      	By	Comments
 * ----------	---	----------------------------------------------------------
 */


#include <Arduino.h>
#include "wiring_private.h"


Uart MyPrinter (&sercom2, PIN_PA15, PIN_PA14, SERCOM_RX_PAD_3, UART_TX_PAD_2);

void SERCOM2_Handler() {
  MyPrinter.IrqHandler();
}

// put your setup code here, to run once:
void setup() {

  // Assign pin 14 and 15 SERCOM function
  pinPeripheral(PIN_PA14, PIO_SERCOM);
  pinPeripheral(PIN_PA15, PIO_SERCOM);

  MyPrinter.begin(9600);


}

// put your main code here, to run repeatedly:
void loop() {
}