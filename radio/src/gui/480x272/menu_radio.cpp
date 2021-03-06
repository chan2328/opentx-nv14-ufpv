/*
 * Copyright (C) OpenTX
 *
 * Based on code named
 *   th9x - http://code.google.com/p/th9x 
 *   er9x - http://code.google.com/p/er9x
 *   gruvin9x - http://code.google.com/p/gruvin9x
 *
 * License GPLv2: http://www.gnu.org/licenses/gpl-2.0.html
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include "menu_radio.h"
#include "radio_setup.h"
#include "radio_sdmanager.h"
#include "special_functions.h"
#include "radio_calibration.h"
#include "radio_version.h"
#include "radio_hardware.h"
#include "myeeprom.h"

RadioMenu::RadioMenu():
  TabsGroup()
{
  addTab(new RadioSetupPage());
  addTab(new RadioSdManagerPage());
  addTab(new SpecialFunctionsPage(g_eeGeneral.customFn));
  // TODO trainer
  addTab(new RadioHardwarePage());
  addTab(new RadioCalibrationPage());
  addTab(new RadioVersionPage());
}
