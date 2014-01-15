//*****************************************************************************
//
// osram96x16x1.h - Prototypes for the driver for the 96x16 monochrome
//                  graphical OLED displays found on the ek-lm3s811 board.
//
// Copyright (c) 2006-2009 Luminary Micro, Inc.  All rights reserved.
// Software License Agreement
// 
// Luminary Micro, Inc. (LMI) is supplying this software for use solely and
// exclusively on LMI's microcontroller products.
// 
// The software is owned by LMI and/or its suppliers, and is protected under
// applicable copyright laws.  All rights are reserved.  You may not combine
// this software with "viral" open-source software in order to form a larger
// program.  Any use in violation of the foregoing restrictions may subject
// the user to criminal sanctions under applicable laws, as well as to civil
// liability for the breach of the terms and conditions of this license.
// 
// THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
// OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
// LMI SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR
// CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 5125 of the EK-LM3S811 Firmware Package.
//
//*****************************************************************************

#ifndef __DISPLAY96X16X1_H__
#define __DISPLAY96X16X1_H__

//*****************************************************************************
//
// Prototypes for the driver APIs.
//
//*****************************************************************************
extern void Display96x16x1Clear(void);
extern void Display96x16x1StringDraw(const char *pcStr, unsigned long ulX,
                                   unsigned long ulY);
extern void Display96x16x1ImageDraw(const unsigned char *pucImage,
                                  unsigned long ulX, unsigned long ulY,
                                  unsigned long ulWidth,
                                  unsigned long ulHeight);
extern void Display96x16x1Init(tBoolean bFast);
extern void Display96x16x1DisplayOn(void);
extern void Display96x16x1DisplayOff(void);

//*****************************************************************************
//
// The following macros map the old names for the display driver functions to
// the new names.  In new code, the new names should be used in favor of the
// old names.
//
//*****************************************************************************
#ifndef DEPRECATED
#define OSRAMClear              Display96x16x1Clear
#define OSRAMStringDraw         Display96x16x1StringDraw
#define OSRAMImageDraw          Display96x16x1ImageDraw
#define OSRAMInit               Display96x16x1Init
#define OSRAMDisplayOn          Display96x16x1DisplayOn
#define OSRAMDisplayOff         Display96x16x1DisplayOff
#define OSRAMClear              Display96x16x1Clear
#define OSRAM96x16x1StringDraw  Display96x16x1StringDraw
#define OSRAM96x16x1ImageDraw   Display96x16x1ImageDraw
#define OSRAM96x16x1Init        Display96x16x1Init
#define OSRAM96x16x1DisplayOn   Display96x16x1DisplayOn
#define OSRAM96x16x1DisplayOff  Display96x16x1DisplayOff
#endif

#endif // __DISPLAY96X16X1_H__
