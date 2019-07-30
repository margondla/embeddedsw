/******************************************************************************
*
* Copyright (C) 2018 – 2019 Xilinx, Inc.  All rights reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* THE AUTHORS OR COPYRIGHT HOLDERS  BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
* FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
* IN THE SOFTWARE.
*
******************************************************************************/

#include "xparameters.h"
#include "xv_hdmitxss1.h"

/*
* List of Sub-cores included in the Subsystem for Device ID 0
* Sub-core device id will be set by its driver in xparameters.h
*/

#define XPAR_V_HDMI_TXSS1_V_HDMI_TX_PRESENT	 1
#define XPAR_V_HDMI_TXSS1_V_HDMI_TX_ABSOLUTE_BASEADDR	 (XPAR_V_HDMI_TXSS1_BASEADDR + XPAR_V_HDMI_TXSS1_V_HDMI_TX_BASEADDR)

#define XPAR_V_HDMI_TXSS1_V_TC_PRESENT	 1
#define XPAR_V_HDMI_TXSS1_V_TC_ABSOLUTE_BASEADDR	 (XPAR_V_HDMI_TXSS1_BASEADDR + XPAR_V_HDMI_TXSS1_V_TC_BASEADDR)


/*
* List of Sub-cores excluded from the subsystem for Device ID 0
*   - Excluded sub-core device id is set to 255
*   - Excluded sub-core baseaddr is set to 0
*/

#define XPAR_V_HDMI_TXSS1_AXI_TIMER_PRESENT 0
#define XPAR_V_HDMI_TXSS1_AXI_TIMER_DEVICE_ID 255
#define XPAR_V_HDMI_TXSS1_AXI_TIMER_ABSOLUTE_BASEADDR 0

#define XPAR_V_HDMI_TXSS1_HDCP_1_4_PRESENT 0
#define XPAR_V_HDMI_TXSS1_HDCP_1_4_DEVICE_ID 255
#define XPAR_V_HDMI_TXSS1_HDCP_1_4_ABSOLUTE_BASEADDR 0

#define XPAR_V_HDMI_TXSS1_HDCP22_TX_SS_PRESENT 0
#define XPAR_V_HDMI_TXSS1_HDCP22_TX_SS_DEVICE_ID 255
#define XPAR_V_HDMI_TXSS1_HDCP22_TX_SS_ABSOLUTE_BASEADDR 0



XV_HdmiTxSs1_Config XV_HdmiTxSs1_ConfigTable[XPAR_XV_HDMITXSS1_NUM_INSTANCES] =
{
	{
		XPAR_V_HDMI_TXSS1_DEVICE_ID,
		XPAR_V_HDMI_TXSS1_BASEADDR,
		XPAR_V_HDMI_TXSS1_HIGHADDR,
		(XVidC_PixelsPerClock) XPAR_V_HDMI_TXSS1_INPUT_PIXELS_PER_CLOCK,
		XPAR_V_HDMI_TXSS1_MAX_BITS_PER_COMPONENT,
		XPAR_V_HDMI_TXSS1_INCLUDE_LOW_RESO_VID,
		XPAR_V_HDMI_TXSS1_INCLUDE_YUV420_SUP,
		XPAR_V_HDMI_TXSS1_AXI_LITE_FREQ_HZ,

		{
			XPAR_V_HDMI_TXSS1_AXI_TIMER_PRESENT,
			XPAR_V_HDMI_TXSS1_AXI_TIMER_DEVICE_ID,
			XPAR_V_HDMI_TXSS1_AXI_TIMER_ABSOLUTE_BASEADDR
		},
		{
			XPAR_V_HDMI_TXSS1_HDCP_1_4_PRESENT,
			XPAR_V_HDMI_TXSS1_HDCP_1_4_DEVICE_ID,
			XPAR_V_HDMI_TXSS1_HDCP_1_4_ABSOLUTE_BASEADDR
		},
		{
			XPAR_V_HDMI_TXSS1_HDCP22_TX_SS_PRESENT,
			XPAR_V_HDMI_TXSS1_HDCP22_TX_SS_DEVICE_ID,
			XPAR_V_HDMI_TXSS1_HDCP22_TX_SS_ABSOLUTE_BASEADDR
		},
		{
			XPAR_V_HDMI_TXSS1_V_HDMI_TX_PRESENT,
			XPAR_V_HDMI_TXSS1_V_HDMI_TX_DEVICE_ID,
			XPAR_V_HDMI_TXSS1_V_HDMI_TX_ABSOLUTE_BASEADDR
		},
		{
			XPAR_V_HDMI_TXSS1_V_TC_PRESENT,
			XPAR_V_HDMI_TXSS1_V_TC_DEVICE_ID,
			XPAR_V_HDMI_TXSS1_V_TC_ABSOLUTE_BASEADDR
		},
	}
};