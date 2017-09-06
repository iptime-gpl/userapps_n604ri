#ifndef _RTL8368S_REG_H_
#define _RTL8368S_REG_H_


/* switch global control */
#define RTL8368S_SWITCH_GLOBAL_CTRL_REG			0x0000
#define RTL8368S_MAX_LENGHT_OFF					4
#define RTL8368S_MAX_LENGHT_MSK					(0x3<<RTL8368S_MAX_LENGHT_OFF	)
#define RTL8368S_CAM_TBL_OFF						6
#define RTL8368S_JAM_MODE_OFF						9
#define RTL8368S_MAX_PAUSE_CNT_OFF				11
#define RTL8368S_EN_VLAN_OFF						13
#define RTL8368S_EN_VLAN_4KTB_OFF					14
#define RTL8368S_EN_QOS_OFF						15

#define RTL8368S_PORT_ENABLE_CTRL_REG			0x0001
#define RTL8368S_PORT_DISABLE_MSK					0x00ff
#define RTL8368S_PORT_ENABLE_EE_TYPE_OFF			14
#define RTL8368S_PORT_ENABLE_EE_TYPE_MSK		(0x3<<RTL8368S_PORT_ENABLE_EE_TYPE_OFF)

#define RTL8368S_PORT_LEARNDIS_CTRL_REG			0x0002
#define RTL8368S_PORT_LEARNDIS_MSK				0x00ff

#define RTL8368S_SECURITY_CTRL_REG				0x0003
#define RTL8368S_DISABLE_AGE_OFF					0
#define RTL8368S_DISABLE_BLKSPA_OFF				8

#define RTL8368S_SECURITY_CTRL2_REG				0x0004
#define RTL8368S_DROP_UNDA_OFF					0
#define RTL8368S_DROP_UNDA_MSK					(0x1<<RTL8368S_DROP_UNDA_OFF)
#define RTL8368S_DROP_UNSA_OFF					1
#define RTL8368S_DROP_UNSA_MSK					(0x1<<RTL8368S_DROP_UNSA_OFF)
#define RTL8368S_DROP_UNMATCHSA_OFF				2
#define RTL8368S_DROP_UNMATCHSA_MSK				(0x1<<RTL8368S_DROP_UNMATCHSA_OFF)
#define RTL8368S_AGE_TIMER_OFF					3
#define RTL8368S_AGE_TIMER_MSK					(0x7<<RTL8368S_AGE_TIMER_OFF)
#define RTL8368S_AGE_SPEED_OFF					7
#define RTL8368S_AGE_SPEED_MSK					(0x3<<RTL8368S_AGE_SPEED_OFF)

#define RTL8368S_MODE_CTRL_0_REG					0x0005
#define RTL8368S_SEL_SPI_OFF						0
#define RTL8368S_SEL_SPI_MSK						(0x1<<RTL8368S_SEL_SPI_OFF)
#define RTL8368S_ENAUTOLOAD_OFF					1
#define RTL8368S_ENAUTOLOAD_MSK					(0x1<<RTL8368S_ENAUTOLOAD_OFF)
#define RTL8368S_PROBE_OFF							2
#define RTL8368S_PROBE_MSK						(0x1<<RTL8368S_PROBE_OFF)
#define RTL8368S_DISBISR_OFF						3
#define RTL8368S_DISBISR_MSK						(0x1<<RTL8368S_DISBISR_OFF)
#define RTL8368S_ADCTEST_OFF						4
#define RTL8368S_ADCTEST_MSK						(0x1<<RTL8368S_ADCTEST_OFF)
#define RTL8368S_SRAM_DIAG_OFF					5
#define RTL8368S_SRAM_DIAD_MSK					(0x1<<RTL8368S_SRAM_DIAG_OFF)
#define RTL8368S_ENSCAN_OFF						6
#define RTL8368S_ENSCAN_MSK						(0x1<<RTL8368S_ENSCAN_OFF)
#define RTL8368S_P4IOMODE_OFF						7
#define RTL8368S_P4IOMODE_MSK						(0x7<<RTL8368S_P4IOMODE_OFF)
#define RTL8368S_P5IOMODE_OFF						10
#define RTL8368S_P5IOMODE_MSK						(0x7<<RTL8368S_P5IOMODE_OFF)
#define RTL8368S_SDSMODE_OFF						13
#define RTL8368S_SDSMODE_MSK						(0x7<<RTL8368S_SDSMODE_OFF)

/*Mode Control Regitser*/
#define RTL8368S_MODE_CTRL_1_REG					0x0006

/* Port mirror configuration */
#define RTL8368S_PORT_MIRROR_REG					0x0007
#define RTL8368S_PORT_MIRROR_SOURCE_OFF			0
#define RTL8368S_PORT_MIRROR_SOURCE_MSK		(0x7<<RTL8368S_PORT_MIRROR_SOURCE_OFF)
#define RTL8368S_PORT_MIRROR_MINITOR_OFF		4
#define RTL8368S_PORT_MIRROR_MINITOR_MSK		(0x7<<RTL8368S_PORT_MIRROR_MINITOR_OFF)
#define RTL8368S_PORT_MIRROR_RX_OFF				8
#define RTL8368S_PORT_MIRROR_RX_MSK				(0x1<<RTL8368S_PORT_MIRROR_RX_OFF)
#define RTL8368S_PORT_MIRROR_TX_OFF				9
#define RTL8368S_PORT_MIRROR_TX_MSK				(0x1<<RTL8368S_PORT_MIRROR_TX_OFF)
#define RTL8368S_PORT_MIRROR_ISO_OFF				11
#define RTL8368S_PORT_MIRROR_ISO_MSK			(0x1<<RTL8368S_PORT_MIRROR_ISO_OFF)

/* Port ability */
#define RTL8368S_PORT_ABILITY_BASE				0x0010

/*port linking status*/
#define RTL8368S_PORT_LINK_STATUS_BASE			0x0014
#define RTL8368S_PORT_STATUS_SPEED_OFF			0
#define RTL8368S_PORT_STATUS_SPEED_MSK			(0x3<<RTL8368S_PORT_STATUS_SPEED_OFF)
#define RTL8368S_PORT_STATUS_DUPLEX_OFF			2
#define RTL8368S_PORT_STATUS_DUPLEX_MSK			(0x1<<RTL8368S_PORT_STATUS_DUPLEX_OFF)
#define RTL8368S_PORT_STATUS_LINK_OFF			4
#define RTL8368S_PORT_STATUS_LINK_MSK				(0x1<<RTL8368S_PORT_STATUS_LINK_OFF)
#define RTL8368S_PORT_STATUS_TXPAUSE_OFF		5
#define RTL8368S_PORT_STATUS_TXPAUSE_MSK			(0x1<<RTL8368S_PORT_STATUS_TXPAUSE_OFF)
#define RTL8368S_PORT_STATUS_RXPAUSE_OFF		6
#define RTL8368S_PORT_STATUS_RXPAUSE_MSK			(0x1<<RTL8368S_PORT_STATUS_RXPAUSE_OFF)
#define RTL8368S_PORT_STATUS_AN_OFF				7
#define RTL8368S_PORT_STATUS_AN_MSK				(0x1<<RTL8368S_PORT_STATUS_AN_OFF)


/* V-LAN member configuration */
#define RTL8368S_VLAN_MEMCONF_BASE				0x0020

#define RTL8368S_SPT_STATE_BASE					0x0050
#define RTL8368S_SPT_STATE_BITS					2
#define RTL8368S_SPT_STATE_MSK					0x3

/*CHIP ID*/
#define RTL8368S_CHIP_ID_REG						0x0509
#define RTL8368S_REVISION_ID_REG					0x050A

/* cpu port control reg */
#define RTL8368S_CPU_CTRL_REG						0x0061
#define RTL8368S_CPU_PORTS_OFF					0
#define RTL8368S_CPU_PORTS_MSK					(0xff<<RTL8368S_CPU_PORTS_OFF)
#define RTL8368S_CPU_INSTAG_OFF					15
#define RTL8368S_CPU_INSTAG_MSK					(0x1<<RTL8368S_CPU_INSTAG_OFF)

/* Port VLAN Control Register */
#define RTL8368S_PORT_VLAN_CTRL_BASE				0x0063

/*SWITCH MAC*/
#define RTL8368S_SWITCH_MAC_BASE					0x0070

/*Internal Control Register*/
#define RTL8368S_RESET_CONTROL_REG				0x0100
#define RTL8368S_RESET_QUEUE_OFF					2

#define RTL8368S_SPEED_CONTROL_REG              0x0102
#define RTL8368S_SPEED_CONTROL_OFF              1

/* Table Acess Control */
#define RTL8368S_TABLE_ACCESS_CTRL_REG			0x0180
#define RTL8368S_TABLE_ACCESS_CMD_MSK			0x0001

#define RTL8368S_TABLE_WRITE_BASE					0x0182
#define RTL8368S_TABLE_READ_BASE					0x0189
#define RTL8368S_VLAN_TABLE_WRITE_BASE			0x0185
#define RTL8368S_VLAN_TABLE_READ_BASE			0x018C

#define RTL8368S_TABLE_VLAN_WRITE_CTRL			0x0f01	
#define RTL8368S_TABLE_VLAN_READ_CTRL			0x0e01	
#define RTL8368S_TABLE_L2TB_WRITE_CTRL			0x0101	
#define RTL8368S_TABLE_L2TB_READ_CTRL			0x0001	
#define RTL8368S_TABLE_CAMTB_WRITE_CTRL			0x0301
#define RTL8368S_TABLE_CAMTB_READ_CTRL			0x0201

#define RTL8368S_TABLE_ACLDATA0_WRITE_CTRL 		0x0901
#define RTL8368S_TABLE_ACLDATA1_WRITE_CTRL 		0x0b01
#define RTL8368S_TABLE_ACLDATA2_WRITE_CTRL 		0x0d01
#define RTL8368S_TABLE_ACLDATA0_READ_CTRL 		0x0801
#define RTL8368S_TABLE_ACLDATA1_READ_CTRL 		0x0a01
#define RTL8368S_TABLE_ACLDATA2_READ_CTRL 		0x0c01
#define RTL8368S_TABLE_SELECT_ENTRY_OFF 			3
#define RTL8368S_TABLE_ACL_ENTRY_MAK 			(0x1f<<RTL8368S_TABLE_SELECT_ENTRY_OFF)

/* Bandwdith Control Register */
#define RTL8368S_IB_BASE							0x0200
#define RTL8368S_IB_REG(port)						(RTL8368S_IB_BASE+port)
#define RTL8368S_IB_BDTH_OFFSET		  			(0)
#define RTL8368S_IB_BDTH_MSK						(0x3fff<<RTL8368S_IB_BDTH_OFFSET)
#define RTL8368S_IB_PREIFP_OFFSET					(14)
#define RTL8368S_IB_PREIFP_MSK						(0x1<<RTL8368S_IB_PREIFP_OFFSET)

/*Port priority*/
#define RTL8368S_PBP_BASE							0x020C
#define RTL8368S_PBP_PRIORITY_BITS				3
#define RTL8368S_PBP_PRIORITY_MSK					0x7

/*DSCP mapping Control Register*/
#define RTL8368S_DSCPPR_BASE						0x020E
#define RTL8368S_DSCPPR_0_4_REG(dscp)				(RTL8368S_DSCPPR_BASE + ((dscp>>4)*0x3))
#define RTL8368S_DSCPPR_5_PRE_REG(dscp)			(RTL8368S_DSCPPR_BASE + ((dscp>>4)*0x3))
#define RTL8368S_DSCPPR_5_END_REG(dscp)			(RTL8368S_DSCPPR_BASE + ((dscp>>4)*0x3) + 1)
#define RTL8368S_DSCPPR_6_9_REG(dscp)				(RTL8368S_DSCPPR_BASE + ((dscp>>4)*0x3) + 1)
#define RTL8368S_DSCPPR_10_PRE_REG(dscp)			(RTL8368S_DSCPPR_BASE + ((dscp>>4)*0x3) + 1)
#define RTL8368S_DSCPPR_10_END_REG(dscp)			(RTL8368S_DSCPPR_BASE + ((dscp>>4)*0x3) + 2)
#define RTL8368S_DSCPPR_11_15_REG(dscp)			(RTL8368S_DSCPPR_BASE + ((dscp>>4)*0x3) + 2)
#define RTL8368S_DSCPPR_0_4_OFFSET(dscp)			((dscp%16)*0x3)
#define RTL8368S_DSCPPR_0_4_MSK(dscp)				(0x7<<RTL8368S_DSCPPR_0_4_OFFSET(dscp))
#define RTL8368S_DSCPPR_5_PRE_OFFSET				(15)
#define RTL8368S_DSCPPR_5_PRE_MSK				(0x1<<RTL8368S_DSCPPR_5_PRE_OFFSET)
#define RTL8368S_DSCPPR_5_END_OFFSET				(0)
#define RTL8368S_DSCPPR_5_END_MSK				(0x3<<RTL8368S_DSCPPR_5_END_OFFSET)
#define RTL8368S_DSCPPR_5_PRE_BIT_OFFSET			(0)
#define RTL8368S_DSCPPR_5_PRE_BIT_MSK			(0x1<<RTL8368S_DSCPPR_5_PRE_BIT_OFFSET)
#define RTL8368S_DSCPPR_5_END_BIT_OFFSET			(1)
#define RTL8368S_DSCPPR_5_END_BIT_MSK			(0x3<<RTL8368S_DSCPPR_5_END_BIT_OFFSET)
#define RTL8368S_DSCPPR_6_9_OFFSET(dscp)			((dscp%16)*0x3 - 16)
#define RTL8368S_DSCPPR_6_9_MSK(dscp)				(0x7<<RTL8368S_DSCPPR_6_9_OFFSET(dscp))
#define RTL8368S_DSCPPR_10_PRE_OFFSET(dscp)		((dscp%16)*0x3 - 16)
#define RTL8368S_DSCPPR_10_PRE_MSK(dscp)			(0x3<<RTL8368S_DSCPPR_10_PRE_OFFSET(dscp))
#define RTL8368S_DSCPPR_10_END_OFFSET(dscp)		((dscp%16)*0x0)
#define RTL8368S_DSCPPR_10_END_MSK(dscp)			(0x1<<RTL8368S_DSCPPR_10_END_OFFSET(dscp))
#define RTL8368S_DSCPPR_10_PRE_BIT_OFFSET 		(0)
#define RTL8368S_DSCPPR_10_PRE_BIT_MSK			(0x3<<RTL8368S_DSCPPR_10_PRE_BIT_OFFSET)
#define RTL8368S_DSCPPR_10_END_BIT_OFFSET		(2)
#define RTL8368S_DSCPPR_10_END_BIT_MSK			(0x1<<RTL8368S_DSCPPR_10_END_BIT_OFFSET)
#define RTL8368S_DSCPPR_11_15_OFFSET(dscp)		((dscp%16)*0x3 - 32)
#define RTL8368S_DSCPPR_11_15_MSK(dscp)			(0x7<<RTL8368S_DSCPPR_11_15_OFFSET(dscp))

/*1Q remapping Control Register*/
#define RTL8368S_1QMCR_BASE						0x021A
#define RTL8368S_1QMCR_REG(pri)					(RTL8368S_1QMCR_BASE + ((pri>3)*0x1))
#define RTL8368S_1QMCR_OFFSET(pri)					(pri*3-((pri>3)*12))
#define RTL8368S_1QMCR_MSK(pri)					(0x7<<RTL8368S_1QMCR_OFFSET(pri))

/* Priority Decision Control Register */
#define RTL8368S_PDCR_REG							0x021C
#define RTL8368S_PDCR_ACL_OFFSET					(0)
#define RTL8368S_PDCR_ACL_MSK						(0xf<<RTL8368S_PDCR_ACL_OFFSET)
#define RTL8368S_PDCR_DSCP_OFFSET					(4)
#define RTL8368S_PDCR_DSCP_MSK					(0xf<<RTL8368S_PDCR_DSCP_OFFSET)
#define RTL8368S_PDCR_1Q_OFFSET					(8)
#define RTL8368S_PDCR_1Q_MSK						(0xf<<RTL8368S_PDCR_1Q_OFFSET)
#define RTL8368S_PDCR_PBP_OFFSET					(12)
#define RTL8368S_PDCR_PBP_MSK						(0xf<<RTL8368S_PDCR_PBP_OFFSET)
/* Output Queue Number Control Register */
#define RTL8368S_OQN_BASE							0x021D
#define RTL8368S_OQN_QNUM_BITS					3
#define RTL8368S_OQN_QNUM_MSK					0x7

/* Queue Number and Priority Mapping to Queue ID Control Register */
#define RTL8368S_QNPQID_BASE						0x0220
#define RTL8368S_QNPQID_MSK						0x7

/* Remarking Control Register */
#define RTL8368S_REM_REG							0x022A
#define RTL8368S_REM_1Q_OFFSET					(0)
#define RTL8368S_REM_1Q_MSK						(0x1<<RTL8368S_REM_1Q_OFFSET)
#define RTL8368S_REM_DSCP_OFFSET					(1)
#define RTL8368S_REM_DSCP_MSK						(0x1<<RTL8368S_REM_DSCP_OFFSET)

/* 1Q Remarking Mapping Control Register */
#define RTL8368S_D1Q_BASE							0x022B
#define RTL8368S_D1Q_REG(pri)						(RTL8368S_D1Q_BASE+ ((pri>3)*0x1))
#define RTL8368S_D1Q_OFFSET(pri)					(pri*3-((pri>3)*12))
#define RTL8368S_D1Q_MSK(pri)						(0x7<<RTL8368S_D1Q_OFFSET(pri))

/* DSCP Remarking Mapping Control Register */
#define RTL8368S_DSCP_BASE							0x022D
#define RTL8368S_DSCP_REG(pri)						(RTL8368S_DSCP_BASE+ ((pri>>1)*0x1))
#define RTL8368S_DSCP_OFFSET(pri)					((pri & 0x1)*6)
#define RTL8368S_DSCP_MSK(pri)						(0x3f<<RTL8368S_DSCP_OFFSET(pri))

/* Queue-descriptor-based */
#define RTL8368S_QDBFC_BASE						0x0231
#define RTL8368S_QDBFC_QG0_REG(port)				(RTL8368S_QDBFC_BASE+(port*0x3))
#define RTL8368S_QDBFC_QG1_REG(port)				(RTL8368S_QDBFC_BASE+(port*0x3)+1)
#define RTL8368S_QDBFC_QG2_REG(port)				(RTL8368S_QDBFC_BASE+(port*0x3)+2)
#define RTL8368S_QDBFC_FCON_OFFSET				0
#define RTL8368S_QDBFC_FCON_MSK					(0x1ff<<RTL8368S_QDBFC_FCON_OFFSET)
#define RTL8368S_QDBFC_FCOFF_OFFSET				9
#define RTL8368S_QDBFC_FCOFF_MSK					(0x7f<<RTL8368S_QDBFC_FCOFF_OFFSET)

/* Queue-packet-based */
#define RTL8368S_QPBFC_BASE						0x0249
#define RTL8368S_QPBFC_QG0_REG(port)				(RTL8368S_QPBFC_BASE+(port*0x3))
#define RTL8368S_QPBFC_QG1_REG(port)				(RTL8368S_QPBFC_BASE+(port*0x3)+1)
#define RTL8368S_QPBFC_QG2_REG(port)				(RTL8368S_QPBFC_BASE+(port*0x3)+2)
#define RTL8368S_QPBFC_FCON_OFFSET				0
#define RTL8368S_QPBFC_FCON_MSK					(0x3f<<RTL8368S_QPBFC_FCON_OFFSET)
#define RTL8368S_QPBFC_FCOFF_OFFSET				6
#define RTL8368S_QPBFC_FCOFF_MSK					(0xf<<RTL8368S_QPBFC_FCOFF_OFFSET)

/* Port-based */
#define RTL8368S_PBFC_BASE							0x0261
#define RTL8368S_PBFC_ENQUE_REG(port)				(RTL8368S_PBFC_BASE+(port*0x2))
#define RTL8368S_PBFC_ENQUE_OFFSET(queue)			(queue)
#define RTL8368S_PBFC_ENQUE_MSK(queue)			(0x1<<queue)
#define RTL8368S_PBFC_FCOFF_REG(port)				(RTL8368S_PBFC_BASE+(port*0x2))
#define RTL8368S_PBFC_FCOFF_OFFSET				6
#define RTL8368S_PBFC_FCOFF_MSK					(0x3ff<<RTL8368S_PBFC_FCOFF_OFFSET)
#define RTL8368S_PBFC_FCON_REG(port)				(RTL8368S_PBFC_BASE+(port*0x2)+1)
#define RTL8368S_PBFC_FCON_OFFSET					0
#define RTL8368S_PBFC_FCON_MSK					(0x3ff<<RTL8368S_PBFC_FCON_OFFSET)

/* Leaky Bucket Parameters Register */
#define RTL8368S_LBR_APR_BASE						0x0271
#define RTL8368S_LBR_PPR_BASE						0x0272
#define RTL8368S_LBR_APR_REG(port, queue)			(RTL8368S_LBR_APR_BASE+(0xC*port)+(0x2*queue))
#define RTL8368S_LBR_PPR_REG(port, queue)			(RTL8368S_LBR_PPR_BASE+(0xC*port)+(0x2*queue))
#define RTL8368S_LBR_APR_OFFSET					(0)
#define RTL8368S_LBR_APR_MSK						(0x3fff<<RTL8368S_LBR_APR_OFFSET)
#define RTL8368S_LBR_SIZE_OFFSET					(0)
#define RTL8368S_LBR_SIZE_MSK						(0x3f<<RTL8368S_LBR_SIZE_OFFSET)
#define RTL8368S_LBR_PPR_OFFSET					(6)
#define RTL8368S_LBR_PPR_MSK						(0x7<<RTL8368S_LBR_PPR_OFFSET)

/*Per-Port Egress Bandwidth Control*/
#define RTL8368S_EB_BASE							0x02D1
#define RTL8368S_EB_REG(port)						(RTL8368S_EB_BASE+port)
#define RTL8368S_EB_BDTH_OFFSET					(0)
#define RTL8368S_EB_BDTH_MSK						(0x3fff<<RTL8368S_EB_BDTH_OFFSET)

/* Weighted Fair Queue Parameters Register */
#define RTL8368S_WFQ_EN_BASE						0x02D9
#define RTL8368S_WFQ_EN_REG(port)					(RTL8368S_WFQ_EN_BASE+(port>>1))
#define RTL8368S_WFQ_EN_OFFSET(queue,port)		(queue+6*(port%2))
#define RTL8368S_WFQ_EN_MSK(queue,port)			(0x1<<(queue+6*(port%2)))

#define RTL8368S_WFQ_WEIGHT_BASE					0x02DD
#define RTL8368S_WFQ_Q0_REG(port)					(RTL8368S_WFQ_WEIGHT_BASE+(0x3*port))
#define RTL8368S_WFQ_Q0_WEIGHT_OFFSET			(0)
#define RTL8368S_WFQ_Q0_WEIGHT_MSK				(0x7f<<RTL8368S_WFQ_Q0_WEIGHT_OFFSET)
#define RTL8368S_WFQ_Q1_REG(port)					(RTL8368S_WFQ_WEIGHT_BASE+(0x3*port))
#define RTL8368S_WFQ_Q1_WEIGHT_OFFSET			(7)
#define RTL8368S_WFQ_Q1_WEIGHT_MSK				(0x7f<<RTL8368S_WFQ_Q1_WEIGHT_OFFSET)
#define RTL8368S_WFQ_Q2_REG(port)					(RTL8368S_WFQ_WEIGHT_BASE+(0x3*port)+1)
#define RTL8368S_WFQ_Q2_WEIGHT_OFFSET			(0)
#define RTL8368S_WFQ_Q2_WEIGHT_MSK				(0x7f<<RTL8368S_WFQ_Q2_WEIGHT_OFFSET)
#define RTL8368S_WFQ_Q3_REG(port)					(RTL8368S_WFQ_WEIGHT_BASE+(0x3*port)+1)
#define RTL8368S_WFQ_Q3_WEIGHT_OFFSET			(7)
#define RTL8368S_WFQ_Q3_WEIGHT_MSK				(0x7f<<RTL8368S_WFQ_Q3_WEIGHT_OFFSET)
#define RTL8368S_WFQ_Q4_REG(port)					(RTL8368S_WFQ_WEIGHT_BASE+(0x3*port)+2)
#define RTL8368S_WFQ_Q4_WEIGHT_OFFSET			(0)
#define RTL8368S_WFQ_Q4_WEIGHT_MSK				(0x7f<<RTL8368S_WFQ_Q4_WEIGHT_OFFSET)
#define RTL8368S_WFQ_Q5_REG(port)					(RTL8368S_WFQ_WEIGHT_BASE+(0x3*port)+2)
#define RTL8368S_WFQ_Q5_WEIGHT_OFFSET			(7)
#define RTL8368S_WFQ_Q5_WEIGHT_MSK				(0x7f<<RTL8368S_WFQ_Q5_WEIGHT_OFFSET)
#define RTL8368S_WFQ_Q_WEIGHT_OFFSET			(0)
#define RTL8368S_WFQ_Q_WEIGHT_MSK				(0x7f<<RTL8368S_WFQ_Q_WEIGHT_OFFSET)

/* System shared buffer based*/
#define RTL8368S_SBFC_FCOFF_REG					0x0081
#define RTL8368S_SBFC_FCOFF_OFFSET				0
#define RTL8368S_SBFC_FCOFF_MSK					(0x3FF<<RTL8368S_SBFC_FCOFF_OFFSET)
#define RTL8368S_SBFC_FCON_REG					0x0082
#define RTL8368S_SBFC_FCON_OFFSET					0
#define RTL8368S_SBFC_FCON_MSK					(0x3FF<<RTL8368S_SBFC_FCON_OFFSET)	
#define RTL8368S_SBFC_RUNOUT_REG					0x0080
#define RTL8368S_SBFC_RUNOUT_OFFSET				0
#define RTL8368S_SBFC_RUNOUT_MSK					(0x3FF<<RTL8368S_SBFC_RUNOUT_OFFSET)

/* Queue Gap */
#define RTL8368S_PQSOCR_GAP_REG					0x02F5
#define RTL8368S_PQSOCR_GAP_OFFSET				0
#define RTL8368S_PQSOCR_GAP_MSK					(0x1FF<<RTL8368S_PQSOCR_GAP_OFFSET)

/* Packet-Used-Pages Flow control */
#define RTL8368S_PUPFCR_REG						0x0087
#define RTL8368S_PUPFCR_FCON_OFFSET				0
#define RTL8368S_PUPFCR_FCON_MSK					(0x1FF<<RTL8368S_PUPFCR_FCON_OFFSET)
#define RTL8368S_PUPFCR_EN_OFFSET					15
#define RTL8368S_PUPFCR_EN_MSK					(0x1<<RTL8368S_PUPFCR_EN_OFFSET)

/* Packet Scheduling Control Register */
#define RTL8368S_SCH_TGCR_REG						0x02F6
#define RTL8368S_SCH_TICK_OFFSET					(0)                    
#define RTL8368S_SCH_TICK_MSK						(0xFF<<RTL8368S_SCH_TICK_OFFSET)              
#define RTL8368S_SCH_TOKEN_OFFSET					(8)                    
#define RTL8368S_SCH_TOKEN_MSK					(0xFF<<RTL8368S_SCH_TOKEN_OFFSET)              

/* Scheduler Control Register */
#define RTL8368S_SCHEDULER_CONTROL_BASE			0x02F7
#define RTL8368S_SCR_P4_P0_REG						0x02F7
#define RTL8368S_SCR_P5_P7_REG						0x02F8
#define RTL8368S_SCR_APR_OFFSET					(0)
#define RTL8368S_SCR_APR_MSK						(0x1<<RTL8368S_SCR_APR_OFFSET)
#define RTL8368S_SCR_PPR_OFFSET					(1)
#define RTL8368S_SCR_PPR_MSK						(0x1<<RTL8368S_SCR_PPR_OFFSET)
#define RTL8368S_SCR_WFQ_OFFSET					(2)
#define RTL8368S_SCR_WFQ_MSK						(0x1<<RTL8368S_SCR_WFQ_OFFSET)
#define RTL8368S_SCR_SCHDIS_BITS					3
#define RTL8368S_SCR_SCHDIS_MSK					0x7

/* Egress Bandwidth IFG control Register */
#define RTL8368S_EBC_INC_IFG_REG					0x02F8
#define RTL8368S_EBC_INC_IFG_OFFSET				(9)
#define RTL8368S_EBC_INC_IFG_MSK					(0x1<<9)

/*Type II Leaky Bucket Control Regitser*/
#define RTL8368S_SCH_T2LBCR_REG					0x02F9
#define RTL8368S_SCH_TYPE2LBTH_OFFSET			(0)                    
#define RTL8368S_SCH_TYPE2LBTH_MSK				(0xffff<<RTL8368S_SCH_TYPE2LBTH_OFFSET)              

/* System-based */
#define RTL8368S_SYSBFC_FCOFF_REG					0x0083
#define RTL8368S_SYSBFC_FCOFF_OFFSET				0
#define RTL8368S_SYSBFC_FCOFF_MSK					(0x3FF<<RTL8368S_SYSBFC_FCOFF_OFFSET)
#define RTL8368S_SYSBFC_FCON_REG					0x0084
#define RTL8368S_SYSBFC_FCON_OFFSET				0
#define RTL8368S_SYSBFC_FCON_MSK					(0x3FF<<RTL8368S_SYSBFC_FCON_OFFSET)	


/* ACL registers address */
#define RTL8368S_ACL_CONTROL_REG					0x0300
#define RTL8368S_ACL_UNMA_PERMIT_OFF				8
#define RTL8368S_ACL_CONTROL_1_REG				0x0301
#define RTL8368S_ACL_INC_ING_OFF					0

#define RTL8368S_ACL_RANGE_REG_BASE				0x0302
#define RTL8368S_ACL_RANGE_START_OFF				0
#define RTL8368S_ACL_RANGE_START_MSK				(0x1f<<RTL8368S_ACL_RANGE_START_OFF)
#define RTL8368S_ACL_RANGE_END_OFF				5
#define RTL8368S_ACL_RANGE_END_MSK				(0x1f<<RTL8368S_ACL_RANGE_END_OFF)

#define RTL8368S_ACL_METER_BASE					0x0310
#define RTL8368S_ACL_METER_RATE_MSK				0x3fff
#define RTL8368S_ACL_METER_TOLE_MSK				0x003f

/* 802.1x access control */
#define RTL8368S_1X_PORT_BASE_CRTL_0_REG		0x340
#define RTL8368S_1X_PORT_BASE_EN_OFF				0
#define RTL8368S_1X_PORT_BASE_AUTH_OFF			8
#define RTL8368S_1X_PORT_BASE_CRTL_1_REG		0x341
#define RTL8368S_1X_PORT_BASE_OP_OFF				0

#define RTL8368S_1X_MAC_BASE_CRTL_REG			0x342
#define RTL8368S_1X_MAC_BASE_EN_OFF				0
#define RTL8368S_1X_MAC_BASE_OP_OFF				9

#define RTL8368S_1X_QUEST_VLAN_CRTL_REG			0x343
#define RTL8368S_1X_QUEST_VLAN_PRO_OFF			0
#define RTL8368S_1X_QUEST_VLAN_PRO_MSK			(0x3<<RTL8368S_1X_QUEST_VLAN_PRO_OFF)
#define RTL8368S_1X_QUEST_VIDX_OFF				2
#define RTL8368S_1X_QUEST_VIDX_MSK				(0xF<<RTL8368S_1X_QUEST_VIDX_OFF)
#define RTL8368S_1X_QUEST_TALK_TO_AUTH_OFF		6
#define RTL8368S_1X_QUEST_TALK_TO_AUTH_MSK		(0x1<<RTL8368S_1X_QUEST_TALK_TO_AUTH_OFF)


/* Protocol and port based 802.1q */
#define RTL8368S_PROTOCOL_GDATA_BASE			0x0350
#define RTL8368S_PROTOCOL_VLAN_CTRL_BASE		0x0358

/* SVLAN registers address */
#define RTL8368S_SVLAN_CTRL_REG					0x0370
#define RTL8368S_SVLAN_EN_OFF						0
#define RTL8368S_SVLAN_EN_MSK						(0x1<<RTL8368S_SVLAN_EN_OFF)
#define RTL8368S_SVLAN_PRIO_OFF					1
#define RTL8368S_SVLAN_PRIO_MSK					(0x1<<RTL8368S_SVLAN_PRIO_OFF)
#define RTL8368S_SVLAN_STAG_OFF					2
#define RTL8368S_SVLAN_STAG_MSK					(0x1<<RTL8368S_SVLAN_STAG_OFF)
#define RTL8368S_SVLAN_ING_UNTAG_OFF				3
#define RTL8368S_SVLAN_ING_UNTAG_MSK				(0x1<<RTL8368S_SVLAN_ING_UNTAG_OFF)
#define RTL8368S_SVLAN_ING_UNMAT_OFF				4
#define RTL8368S_SVLAN_ING_UNMAT_MSK				(0x1<<RTL8368S_SVLAN_ING_UNMAT_OFF)
#define RTL8368S_SVLAN_CPUPRI_OFF					5
#define RTL8368S_SVLAN_CPUPRI_MSK					(0x7<<RTL8368S_SVLAN_CPUPRI_OFF)
#define RTL8368S_SVLAN_PORT_OFF					8
#define RTL8368S_SVLAN_PORT_MSK					(0xff<<RTL8368S_SVLAN_PORT_OFF)

#define RTL8368S_SVLAN_PROTOCOL_TYPE				0x0371

#define RTL8368S_SVLAN_SVIDX_BASE					0x0372
#define RTL8368S_SVLAN_SVIDX_VID_OFF				0
#define RTL8368S_SVLAN_SVIDX_VID_MSK				(0xfff<<RTL8368S_SVLAN_SVIDX_VID_OFF)
#define RTL8368S_SVLAN_SVIDX_SPRI_OFF				12
#define RTL8368S_SVLAN_SVIDX_SPRI_MSK			(0x7<<RTL8368S_SVLAN_SVIDX_SPRI_OFF)
#define RTL8368S_SVLAN_SVIDX_CRPL_OFF				15
#define RTL8368S_SVLAN_SVIDX_CRPL_MSK			(0x1<<RTL8368S_SVLAN_SVIDX_CRPL_OFF)

#define RTL8368S_SVLAN_PORT_CTRL_BASE			0x037A
#define RTL8368S_SVLAN_VSIDX_BITS					3
#define RTL8368S_SVLAN_VSIDX_MSK					0x7

#define RTL8368S_SVLAN_CVIDX_BASE					0x037C
#define RTL8368S_SVLAN_CVIDX_BITS					4
#define RTL8368S_SVLAN_CVIDX_MSK					0xf

#define RTL8368S_SVLAN_S2CSEL_REG				0x000b
#define RTL8368S_SVLAN_S2CSEL_OFF				10
#define RTL8368S_SVLAN_S2CSEL_MSK				(0x0001<<RTL8368S_SVLAN_S2CSEL_OFF)

/* VLAN Ingress Control Register */
#define RTL8368S_VLAN_INGRESS_CTRL_1_REG			0x037E
#define RTL8368S_VLAN_INGRESS_CTRL_2_REG			0x037F
#define RTL8368S_VLAN_IPMUEG_OFF					8
#define RTL8368S_VLAN_IPMUEG_MSK					(0xff<<RTL8368S_VLAN_IPMUEG_OFF)

#define RTL8368S_KEEP_FORMAT_BASE		0x0368
#define RTL8368S_KEEP_FORMAT_MSK		0x00FF
#define RTL8368S_KEEP_PORT_OFF			8



/* 802.3 ad Link aggragation Register */
#define RTL8368S_3AD_LINKAG_CTRL_REG				0x0380
#define RTL8368S_3AD_LINKAG_MODE_OFF				0
#define RTL8368S_3AD_LINKAG_MODE_MSK				(0x1<<RTL8368S_3AD_LINKAG_MODE_OFF)
#define RTL8368S_3AD_LINKAG_HASHSEL_OFF			1
#define RTL8368S_3AD_LINKAG_HASHSEL_MSK			(0x3<<RTL8368S_3AD_LINKAG_HASHSEL_OFF)
#define RTL8368S_3AD_LINKAG_PORTMASK_OFF		3
#define RTL8368S_3AD_LINKAG_PORTMASK_MSK		(0xff<<RTL8368S_3AD_LINKAG_PORTMASK_OFF)

#define RTL8368S_3AD_LINKAG_MAPPING_BASE			0x0381

#define RTL8368S_3AD_LINKAG_FC_CTRL_REG			0x0383
#define RTL8368S_3AD_LINKAG_FC_MSK				0x00ff

#define RTL8368S_3AD_LINKAG_QEMPTY_REG			0x0384
#define RTL8368S_3AD_LINKAG_QEMPTY_MSK			0x00ff



/* RMA register address */
#define RTL8368S_LUT_CONTROL_REG					0x0390
#define RTL8368S_RMA_IPMULTICAST_LUT_OFF			0
#define RTL8368S_RMA_IPMULTICAST_LUT_MSK		(0x1<<RTL8368S_RMA_IPMULTICAST_LUT_OFF)

#define RTL8368S_RMA_USER_DEFINED_BASE			0x0392

#define RTL8368S_RMA_CONTROL_BASE				0x03A6
#define RTL8368S_RMA_CONTROL_REG(rma)			(RTL8368S_RMA_CONTROL_BASE+(rma>>1))
#define RTL8368S_RMA_CONTROL_OFFSET(rma)			(8*(rma&0x01))
#define RTL8368S_RMA_CONTROL_MSK(rma)			(0xff<<RTL8368S_RMA_CONTROL_OFFSET(rma))
#define RTL8368S_RMA_OP_OFFSET(rma)				(0 + (8*(rma&0x01)))
#define RTL8368S_RMA_OP_MSK(rma)					(0x3<<(RTL8368S_RMA_OP_OFFSET(rma)))
#define RTL8368S_RMA_PRISEL_OFFSET(rma)			(2 + (8*(rma&0x01)))
#define RTL8368S_RMA_PRISEL_MSK(rma)				(0x1<<(RTL8368S_RMA_PRISEL_OFFSET(rma)))
#define RTL8368S_RMA_NEWPRI_OFFSET(rma)			(3 + (8*(rma&0x01)))
#define RTL8368S_RMA_NEWPRI_MSK(rma)				(0x7<<(RTL8368S_RMA_NEWPRI_OFFSET(rma)))
#define RTL8368S_RMA_KEEP_OFFSET(rma)				(6 + (8*(rma&0x01)))
#define RTL8368S_RMA_KEEP_MSK(rma)				(0x1<<(RTL8368S_RMA_KEEP_OFFSET(rma)))
#define RTL8368S_RMA_BPSTM_OFFSET(rma)			(7 + (8*(rma&0x01)))
#define RTL8368S_RMA_BPSTM_MSK(rma)				(0x1<<(RTL8368S_RMA_BPSTM_OFFSET(rma)))

/*CPU remapping priroity*/
#define RTL8368S_CPU_PRIORITY_BASE				0x03D0
#define RTL8368S_CPU_PRIORITY_BITS				3
#define RTL8368S_CPU_PRIORITY_MSK				0x7

/*Storm Control Register*/
#define RTL8368S_STORM_BC_CTRL_REG				0x03E0
#define RTL8368S_STORM_MC_CTRL_REG				0x03E1
#define RTL8368S_STORM_UNDA_CTRL_REG			0x03E2
#define RTL8368S_STORM_UNMC_CTRL_REG			0x03E3
#define RTL8368S_STORM_RATE_CTRL_BASE			0x03E4
#define RTL8368S_STORM_RATE_MSK					0x3FFF

#define RTL8368S_STORM_MISC_CTRL_REG				0x03EC
#define RTL8368S_STORM_MISC_IFG_OFF				0
#define RTL8368S_STORM_MISC_IFG_MSK				(0x1<<RTL8368S_STORM_MISC_IFG_OFF)

#define RTL8368S_STORM_LEAKY_STATUS_REG			0x03ED
#define RTL8368S_STORM_EXCEED_OFF				8
#define RTL8368S_STORM_EXCEED_MSK				(0xff<<RTL8368S_STORM_EXCEED_OFF)


/* Cable Testing register address */
#define RTL8368S_CABLE_TESTING_CTRL_REG			0x0402
#define RTL8368S_CABLE_TESTING_START_OFF		0x1
#define RTL8368S_CABLE_TESTING_ACT_REG          0x0403
#define RTL8368S_CABLE_TESTING_ACT_OFF		    0x1
#define RTL8368S_CABLE_TESTING_INFO_BASE        0x0404
#define RTL8368S_CABLE_TESTING_CH_MIS_MSK       0x00F0
#define RTL8368S_CABLE_TESTING_CH_OPEN_MSK      0x0F00
#define RTL8368S_CABLE_TESTING_CH_SHORT_MSK     0xF000

/* LED registers*/
#define RTL8368S_LED_BLINK_REG						0x0430
#define RTL8368S_LED_BLINKRATE_OFF				0
#define RTL8368S_LED_BLINKRATE_MSK				0x0007
#define RTL8368S_LED_INDICATED_CONF_REG			0x0431
#define RTL8368S_LED_0_1_FORCE_REG				0x0432
#define RTL8368S_LED_2_3_FORCE_REG				0x0433
#define RTL8368S_LED_0_FORCE_MASK					0x003F
#define RTL8368S_LED_1_FORCE_MASK					0x0FC0
#define RTL8368S_LED_2_FORCE_MASK					0x003F
#define RTL8368S_LED_3_FORCE_MASK					0x0FC0
#define RTL8368S_LED_1_FORCE_OFF						6
#define RTL8368S_LED_3_FORCE_OFF						6

/* Interrupt control address */
#define RTL8368S_INTERRUPT_CONTROL_REG			0x0440
#define RTL8368S_INTERRUPT_POLARITY_OFF			0
#define RTL8368S_INTERRUPT_POLARITY_MSK			0x0001
#define RTL8368S_INTERRUPT_P4_RGMII_LED_OFF		2
#define RTL8368S_INTERRUPT_P4_RGMII_LED_MSK		0x0004
#define RTL8368S_INTERRUPT_MASK_REG				0x0441
#define RTL8368S_INTERRUPT_LINKCHANGE_OFF		0
#define RTL8368S_INTERRUPT_LINKCHANGE_MSK		(0xff<<RTL8368S_INTERRUPT_LINKCHANGE_OFF)
#define RTL8368S_INTERRUPT_ACLEXCEED_OFF		8
#define RTL8368S_INTERRUPT_ACLEXCEED_MSK		(0x1<<RTL8368S_INTERRUPT_ACLEXCEED_OFF)
#define RTL8368S_INTERRUPT_STORMEXCEED_OFF		9
#define RTL8368S_INTERRUPT_STORMEXCEED_MSK		(0x1<<RTL8368S_INTERRUPT_STORMEXCEED_OFF)
#define RTL8368S_INTERRUPT_P4_FIBER_INT_OFF		12
#define RTL8368S_INTERRUPT_P4_FIBER_INT_MSK		(0x1<<RTL8368S_INTERRUPT_P4_FIBER_INT_OFF)
#define RTL8368S_INTERRUPT_P4_UTP_INT_OFF		13
#define RTL8368S_INTERRUPT_P4_UTP_INT_MSK		(0x1<<RTL8368S_INTERRUPT_P4_UTP_INT_OFF)
#define RTL8368S_INTERRUPT_STATUS_REG			0x0442
#define RTL8368S_INTERRUPT_STATUS_MSK			0xffff

/* Restirct Output Control Registers*/
#define RTL8368S_PORT_ISOLATION_BASE				0x0F08
#define RTL8368S_PORT_ISOLATION_ENABLE_OFF		0
#define RTL8368S_PORT_ISOLATION_ENABLE_MSK		(0x1<<RTL8368S_PORT_ISOLATION_ENABLE_OFF)
#define RTL8368S_PORT_ISOLATION_PORTS_OFF		1
#define RTL8368S_PORT_ISOLATION_PORTS_MSK		(0xFF<<RTL8368S_PORT_ISOLATION_PORTS_OFF)

/*MAC control*/
#define RTL8368S_MAC_FORCE_CTRL_REG				0x0F11
//#define RTL8368S_MAC_FORCE_CTRL1_REG				0x0F05


/*OAM control*/
#define RTL8368S_OAM_PARSER_REG					0x0F14
#define RTL8368S_OAM_MULTIPLEXER_REG				0x0F15

/*Special Congest Mode Control */
#define RTL8368S_CONGEST_MODE_CONTROL_BASE		0x080C
#define RTL8368S_CONGEST_MODE_CONTROL_OFF		0x0010
#define RTL8368S_CONGEST_MODE_SUSTAIN_OFF		0
#define RTL8368S_CONGEST_MODE_SUSTAIN_MSK		(0x000F<<RTL8368S_CONGEST_MODE_SUSTAIN_OFF)
#define RTL8368S_CONGEST_MODE_TIMER_OFF			4
#define RTL8368S_CONGEST_MODE_TIMER_MSK			(0x000F<<RTL8368S_CONGEST_MODE_TIMER_OFF)

/* MIBs control */
#define RTL8368S_MIB_COUTER_BASE					0x1000
#define RTL8368S_MIB_COUTER_PORT_OFFSET			0x50
#define RTL8368S_MIB_DOT1DTPLEARNDISCARD			0x1280
#define RTL8368S_MIB_CTRL_REG						0x13F0
#define RTL8368S_MIB_CTRL_USER_MSK				0x0FFC
#define RTL8368S_MIB_CTRL_BUSY_MSK				0x1
#define RTL8368S_MIB_CTRL_BUSY_OFF				0
#define RTL8368S_MIB_CTRL_RESET_MSK				0x1
#define RTL8368S_MIB_CTRL_RESET_OFF				1
#define RTL8368S_MIB_CTRL_GLOBAL_RESET_OFF		11
#define RTL8368S_MIB_CTRL_GLOBAL_RESET_MSK		(0x1<<RTL8368S_MIB_CTRL_GLOBAL_RESET_OFF)
#define RTL8368S_MIB_CTRL_PORT_RESET_OFF			2
#define RTL8368S_MIB_CTRL_PORT_RESET_MSK		(0xff<<RTL8368S_MIB_CTRL_PORT_RESET_OFF)
#define RTL8368S_MIB_CTRL_QM_RESET_OFF			10
#define RTL8368S_MIB_CTRL_QM_RESET_MSK			(0x1<<RTL8368S_MIB_CTRL_QM_RESET_OFF)

/* PHY registers control */
#define RTL8368S_PHY_ACCESS_CTRL_REG				0x8000
#define RTL8368S_PHY_ACCESS_BUSY_REG				0x8001
#define RTL8368S_PHY_INT_BUSY_OFFSET				0
#define RTL8368S_PHY_INT_BUSY_MASK				(1<<RTL8368S_PHY_INT_BUSY_OFFSET)
#define RTL8368S_PHY_EXT_BUSY_OFFSET				4
#define RTL8368S_PHY_EXT_BUSY_MASK				(1<<RTL8368S_PHY_EXT_BUSY_OFFSET)

#define RTL8368S_PHY_ACCESS_DATA_REG				0x8002
#define RTL8368S_PHY_CTRL_READ					1
#define RTL8368S_PHY_CTRL_WRITE					0
#define RTL8368S_PHY_REG_MASK						0x1f
#define RTL8368S_PHY_PAGE_OFFSET					5
#define RTL8368S_PHY_PAGE_MASK					(0xF<<RTL8368S_PHY_PAGE_OFFSET)
#define RTL8368S_PHY_NO_OFFSET					9
#define RTL8368S_PHY_NO_MASK						(0x1f<<RTL8368S_PHY_NO_OFFSET)

#define RTL8368S_PHY_EXT_CTRL_REG				0x8010
#define RTL8368S_PHY_EXT_REG_OFFSET				0
#define RTL8368S_PHY_EXT_REG_MASK				(0x1F<<RTL8368S_PHY_EXT_REG_OFFSET)
#define RTL8368S_PHY_EXT_ADDR_OFFSET				5
#define RTL8368S_PHY_EXT_ADDR_MASK				(0x1F<<RTL8368S_PHY_EXT_ADDR_OFFSET)
#define RTL8368S_PHY_EXT_RW_OFFSET				10
#define RTL8368S_PHY_EXT_RW_MASK					(1<<RTL8368S_PHY_EXT_RW_OFFSET)
#define RTL8368S_PHY_EXT_COMMAND_OFFSET			15
#define RTL8368S_PHY_EXT_COMMAND_MASK			(1<<RTL8368S_PHY_EXT_COMMAND_OFFSET)

#define RTL8368S_PHY_EXT_WRDATA_REG				0x8011
#define RTL8368S_PHY_EXT_RDDATA_REG				0x8012




/**************** Following setting need to be checked again*************************/
/*Green Feature*/
#define RTL8368S_GREEN_FEATURE_REG				0x0F51
#define RTL8368S_GREEN_FEATURE_MSK				0x0007
#define RTL8368S_GREEN_FEATURE_TX_OFF				0
#define RTL8368S_GREEN_FEATURE_TX_MSK			(0x1<<RTL8368S_GREEN_FEATURE_TX_OFF)
#define RTL8368S_GREEN_FEATURE_RX_OFF			2
#define RTL8368S_GREEN_FEATURE_RX_MSK			(0x1<<RTL8368S_GREEN_FEATURE_RX_OFF)

/*Power Saving*/
#define RTL8368S_POWER_SAVING_PAGE				0
#define RTL8368S_POWER_SAVING_REG					21
#define RTL8368S_POWER_SAVING_BIT_MSK			0x1000


#endif /*#ifndef _RTL8368S_REG_H_*/

