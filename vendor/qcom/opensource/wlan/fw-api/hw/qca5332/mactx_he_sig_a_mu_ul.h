
/* Copyright (c) 2022, Qualcomm Innovation Center, Inc. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

 
 
 
 
 
 
 


#ifndef _MACTX_HE_SIG_A_MU_UL_H_
#define _MACTX_HE_SIG_A_MU_UL_H_
#if !defined(__ASSEMBLER__)
#endif

#include "he_sig_a_mu_ul_info.h"
#define NUM_OF_DWORDS_MACTX_HE_SIG_A_MU_UL 2

#define NUM_OF_QWORDS_MACTX_HE_SIG_A_MU_UL 1


struct mactx_he_sig_a_mu_ul {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             struct   he_sig_a_mu_ul_info                                       mactx_he_sig_a_mu_ul_info_details;
#else
             struct   he_sig_a_mu_ul_info                                       mactx_he_sig_a_mu_ul_info_details;
#endif
};


/* Description		MACTX_HE_SIG_A_MU_UL_INFO_DETAILS

			See detailed description of the STRUCT
*/


/* Description		FORMAT_INDICATION

			Indicates whether the transmission is SU PPDU or a trigger
			 based UL MU PDDU
			<enum 0 HE_SIGA_FORMAT_HE_TRIG>
			<enum 1 HE_SIGA_FORMAT_SU_OR_EXT_SU>
			<legal all>
*/

#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_FORMAT_INDICATION_OFFSET 0x0000000000000000
#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_FORMAT_INDICATION_LSB 0
#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_FORMAT_INDICATION_MSB 0
#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_FORMAT_INDICATION_MASK 0x0000000000000001


/* Description		BSS_COLOR_ID

			BSS color ID 
			<legal all>
*/

#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_BSS_COLOR_ID_OFFSET  0x0000000000000000
#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_BSS_COLOR_ID_LSB     1
#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_BSS_COLOR_ID_MSB     6
#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_BSS_COLOR_ID_MASK    0x000000000000007e


/* Description		SPATIAL_REUSE

			Spatial reuse
			
			<legal all>
*/

#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_SPATIAL_REUSE_OFFSET 0x0000000000000000
#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_SPATIAL_REUSE_LSB    7
#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_SPATIAL_REUSE_MSB    22
#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_SPATIAL_REUSE_MASK   0x00000000007fff80


/* Description		RESERVED_0A

			Note: spec indicates this shall be set to 1
			<legal 1>
*/

#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_RESERVED_0A_OFFSET   0x0000000000000000
#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_RESERVED_0A_LSB      23
#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_RESERVED_0A_MSB      23
#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_RESERVED_0A_MASK     0x0000000000800000


/* Description		TRANSMIT_BW

			Bandwidth of the PPDU.
			
			<enum 0 HE_SIG_A_MU_UL_BW20> 20 Mhz 
			<enum 1 HE_SIG_A_MU_UL_BW40> 40 Mhz 
			<enum 2 HE_SIG_A_MU_UL_BW80> 80 Mhz 
			<enum 3 HE_SIG_A_MU_UL_BW160> 160 MHz or 80+80 MHz
			
			On RX side, Field Used by MAC HW
			<legal 0-3>
*/

#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_TRANSMIT_BW_OFFSET   0x0000000000000000
#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_TRANSMIT_BW_LSB      24
#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_TRANSMIT_BW_MSB      25
#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_TRANSMIT_BW_MASK     0x0000000003000000


/* Description		RESERVED_0B

			<legal 0>
*/

#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_RESERVED_0B_OFFSET   0x0000000000000000
#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_RESERVED_0B_LSB      26
#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_RESERVED_0B_MSB      31
#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_RESERVED_0B_MASK     0x00000000fc000000


/* Description		TXOP_DURATION

			Indicates the remaining time in the current TXOP <legal 
			all>
*/

#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_TXOP_DURATION_OFFSET 0x0000000000000000
#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_TXOP_DURATION_LSB    32
#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_TXOP_DURATION_MSB    38
#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_TXOP_DURATION_MASK   0x0000007f00000000


/* Description		RESERVED_1A

			Set to value indicated in the trigger frame
			<legal 255>
*/

#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_RESERVED_1A_OFFSET   0x0000000000000000
#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_RESERVED_1A_LSB      39
#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_RESERVED_1A_MSB      47
#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_RESERVED_1A_MASK     0x0000ff8000000000


/* Description		CRC

			CRC for HE-SIG-A contents.
			This CRC may also cover some fields of L-SIG (TBD)
			<legal all>
*/

#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_CRC_OFFSET           0x0000000000000000
#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_CRC_LSB              48
#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_CRC_MSB              51
#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_CRC_MASK             0x000f000000000000


/* Description		TAIL

			BCC encoding (similar to VHT-SIG-A) with 6 tail bits is 
			used
			<legal 0>
*/

#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_TAIL_OFFSET          0x0000000000000000
#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_TAIL_LSB             52
#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_TAIL_MSB             57
#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_TAIL_MASK            0x03f0000000000000


/* Description		RESERVED_1B

			<legal 0>
*/

#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_RESERVED_1B_OFFSET   0x0000000000000000
#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_RESERVED_1B_LSB      58
#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_RESERVED_1B_MSB      62
#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_RESERVED_1B_MASK     0x7c00000000000000


/* Description		RX_INTEGRITY_CHECK_PASSED

			TX side: Set to 0
			RX side: Set to 1 if PHY determines the HE-SIG-A CRC check
			 has passed, else set to 0
			
			<legal all>
*/

#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_OFFSET 0x0000000000000000
#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_LSB 63
#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_MSB 63
#define MACTX_HE_SIG_A_MU_UL_MACTX_HE_SIG_A_MU_UL_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_MASK 0x8000000000000000



#endif   // MACTX_HE_SIG_A_MU_UL
