	NOLIST
	IFDEF	__HAVE_REGS__
	IF	__HAVE_REGS__!=0xE167
	LIST
	message	"Conflicting include of REG_XE167xM.INC!"
	NOLIST
	ENDIF
	ELSE			
__HAVE_REGS__	EQU	0xE167		;; magic number for this file	
	ENDIF

; XE167xM/XE164xM/XE162xM Derivatives
; This file contains the generic peripherials
;

;; NOTE: Some registers share bit-names and you need to use the format
;;	REGISTERNAME.BITNAME


SYSTEM	EQU     0xC000			;; start of page 3 holding SFRs etc
NOTHING	EQU     -1			;; used by ASSUME



CPUCON1	EQU	0xFE18
ZCJ	LIT		CPUCON1.0
BP	LIT		CPUCON1.1
INTSCXT	LIT		CPUCON1.2
SGTDIS	LIT		CPUCON1.3
WDTCTL	LIT		CPUCON1.4

CPUCON2	EQU	0xFE1A
SL	LIT		CPUCON2.0
FASTBL	LIT		CPUCON2.2
RETST	LIT		CPUCON2.3
OVRUN	LIT		CPUCON2.4
LFIC	LIT		CPUCON2.5
STEN	LIT		CPUCON2.6
//EIOIAEN	LIT		CPUCON2.7
BYPF	LIT		CPUCON2.8
BYPPF	LIT		CPUCON2.9


CP	EQU	0xFE10	
CSP	EQU	0xFE08	
DPP0	EQU	0xFE00	
DPP1	EQU	0xFE02	
DPP2	EQU	0xFE04	
DPP3	EQU	0xFE06	
MDC	EQU	0xFF0E
MDRIU	LIT		MDC.4	
MDH	EQU	0xFE0C	
MDL	EQU	0xFE0E
MCW	EQU	0xFFDC
MS	LIT		MCW.9	
MP	LIT		MCW.10
MSW	EQU	0xFFDE
MN	LIT		MSW.8	
MZ	LIT		MSW.9	
;MC	LIT		MSW.10		; Conflict	
MSV	LIT		MSW.11
ME	LIT		MSW.12	
MSL	LIT		MSW.13
MV	LIT		MSW.14
PSW	EQU	0xFF10	
N	LIT		PSW.0
C	LIT		PSW.1
V	LIT		PSW.2
Z	LIT		PSW.3
E	LIT		PSW.4
PL0	LIT		PSW.5
USR0	LIT		PSW.6
USR1	LIT		PSW.7
HLDEN_PL1	LIT		PSW.10
IEN	LIT		PSW.11
SP	EQU	0xFE12	
STKOV	EQU	0xFE14	
STKUN	EQU	0xFE16	
//SYSCON	EQU	0xFF12		// NOT in XE167xM ??
TFR	EQU	0xFFAC
ILLOPA	LIT		TFR.2
PRTFLT	LIT		TFR.3
ACER	LIT		TFR.4
UNDOPC	LIT		TFR.7
MPX	LIT		TFR.8
MPW	LIT		TFR.9
MPR	LIT		TFR.10
SR1	LIT		TFR.11
SOFTBRK	LIT		TFR.12
STKUF	LIT		TFR.13
STKOF	LIT		TFR.14
SR0	LIT		TFR.15
	
ZEROS	EQU	0xFF1C	
ONES	EQU	0xFF1E	

BUSCON0	EQU	0xFF0C	
BUSCON1	EQU	0xFF14	
BUSCON2	EQU	0xFF16	
BUSCON3	EQU	0xFF18	
BUSCON4	EQU	0xFF1A	
SYSCON0	EQU	0xFF4A
EMCLKSELEN	LIT	SYSCON0.6
EMSOSC		LIT	SYSCON0.12
EMSVCO		LIT	SYSCON0.13
SELSTAT		LIT	SYSCON0.15

STATCLR0	EQU	0xF0E0
EMCOSC		LIT		STATCLR0.12
EMCVCO		LIT		STATCLR0.13

RTCCLKCON	EQU	0xFF4E
RTCCM		LIT		RTCCLKCON.2

EXTCON		EQU	0xFF5E
EN		LIT		EXTCON.0
FOTL		LIT		EXTCON.6
FOSS		LIT		EXTCON.14
FOEN		LIT		EXTCON.15

ADDRSEL1	EQU	0xFE18	
ADDRSEL2	EQU	0xFE1A	
ADDRSEL3	EQU	0xFE1C	
ADDRSEL4	EQU	0xFE1E	
ADDRSEL7	EQU	0xE04E


PRA	EQU	0xFFC4
WWA	LIT		PRA.6
WMOD	LIT		PRA.7
RWA	LIT		PRA.14
RMOD	LIT		PRA.15
PM0	EQU	0xFFC8
PM1	EQU	0xFFCA
PM2	EQU	0xFFCC
PM3	EQU	0xFFCE
PM4	EQU	0xFFD0
PM5	EQU	0xFFD2
PROTEN	LIT		0
XEA	LIT		1
REA	LIT		2
WEA	LIT		3
L0EA	LIT		4
L1EA	LIT		5
L2EA	LIT		6
L3EA	LIT		7
XEB	LIT		9
REB	LIT		10
WEB	LIT		11
L0EB	LIT		12
L1EB	LIT		13
L2EB	LIT		14
L3EB	LIT		15


;; xxIC General bit definitions
;; These should be put together with the corresponding registers
;; using their full names
;IE	LIT		6
;IR	LIT		7
;GPX	LIT		8
;EN	LIT		15

FINT0CSP	EQU	0xEC00
FINT1CSP	EQU	0xEC04
FINT0ADDR	EQU	0xEC02
FINT1ADDR	EQU	0xEC06

BANKSEL0	EQU	0xEC20
BANKSEL1	EQU	0xEC22
BANKSEL2	EQU	0xEC24
BANKSEL3	EQU	0xEC26
			
ADCIC	EQU	0xFF98	
ADCON	EQU	0xFFA0	
ADDAT	EQU	0xFEA0	
ADEIC	EQU	0xFF9A	
ADDAT2	EQU	0xF0A0	
ADST	LIT		ADCON.7
ADBSY	LIT		ADCON.8
ADWR	LIT		ADCON.9
ADCIN	LIT		ADCON.10
ADCRQ	LIT		ADCON.11
ADCIE	LIT		ADCON.12
ADCIR	LIT		ADCON.13
ADEIE	LIT		ADCON.14
ADEIR	LIT		ADCON.15
			
CC0	EQU	0xFE80	
CC0IC	EQU	0xFF78	
CC1	EQU	0xFE82	
CC1IC	EQU	0xFF7A	
CC2	EQU	0xFE84	
CC2IC	EQU	0xFF7C	
CC3	EQU	0xFE86	
CC3IC	EQU	0xFF7E	
CC4	EQU	0xFE88	
CC4IC	EQU	0xFF80	
CC5	EQU	0xFE8A	
CC5IC	EQU	0xFF82	
CC6	EQU	0xFE8C	
CC6IC	EQU	0xFF84	
CC7	EQU	0xFE8E	
CC7IC	EQU	0xFF86	
CC8	EQU	0xFE90	
CC8IC	EQU	0xFF88	
CC9	EQU	0xFE92	
CC9IC	EQU	0xFF8A	
CC10	EQU	0xFE94	
CC10IC	EQU	0xFF8C	
CC11	EQU	0xFE96	
CC11IC	EQU	0xFF8E	
CC12	EQU	0xFE98	
CC12IC	EQU	0xFF90	
CC13	EQU	0xFE9A	
CC13IC	EQU	0xFF92	
CC14	EQU	0xFE9C	
CC14IC	EQU	0xFF94	
CC15	EQU	0xFE9E	
CC15IC	EQU	0xFF96	
CC16	EQU	0xFE60	
CC16IC	EQU	0xF160	
CC17	EQU	0xFE62	
CC17IC	EQU	0xF162	
CC18	EQU	0xFE64	
CC18IC	EQU	0xF164	
CC19	EQU	0xFE66	
CC19IC	EQU	0xF166	
CC20	EQU	0xFE68	
CC20IC	EQU	0xF168	
CC21	EQU	0xFE6A	
CC21IC	EQU	0xF16A	
CC22	EQU	0xFE6C	
CC22IC	EQU	0xF16C	
CC23	EQU	0xFE6E	
CC23IC	EQU	0xF16E	
CC24	EQU	0xFE70	
CC24IC	EQU	0xF170	
CC25	EQU	0xFE72	
CC25IC	EQU	0xF172	
CC26	EQU	0xFE74	
CC26IC	EQU	0xF174	
CC27	EQU	0xFE76	
CC27IC	EQU	0xF176	
CC28	EQU	0xFE78	
CC28IC	EQU	0xF178	
CC29	EQU	0xFE7A	
CC29IC	EQU	0xF184	
CC30	EQU	0xFE7C	
CC30IC	EQU	0xF18C	
CC31	EQU	0xFE7E	
CC31IC	EQU	0xF194	
CCM0	EQU	0xFF52	
CCM1	EQU	0xFF54	
CCM2	EQU	0xFF56	
CCM3	EQU	0xFF58	
CCM4	EQU	0xFF22	
CCM5	EQU	0xFF24	
CCM6	EQU	0xFF26	
CCM7	EQU	0xFF28	
T0	EQU	0xFE50	
T01CON	EQU	0xFF50	
T0IC	EQU	0xFF9C	
T0REL	EQU	0xFE54	
T1	EQU	0xFE52	
T1IC	EQU	0xFF9E	
T1REL	EQU	0xFE56	
T7	EQU	0xF050	
T78CON	EQU	0xFF20	
T7IC	EQU	0xF17A	
T7REL	EQU	0xF054	
T8	EQU	0xF052	
T8IC	EQU	0xF17C	
T8REL	EQU	0xF056	
CC0IR	LIT		CC0IC.7
CC0IE	LIT		CC0IC.6
CC1IR	LIT		CC1IC.7
CC1IE	LIT		CC1IC.6
CC2IR	LIT		CC2IC.7
CC2IE	LIT		CC2IC.6
CC3IR	LIT		CC3IC.7
CC3IE	LIT		CC3IC.6
CC4IR	LIT		CC4IC.7
CC4IE	LIT		CC4IC.6
CC5IR	LIT		CC5IC.7
CC5IE	LIT		CC5IC.6
CC6IR	LIT		CC6IC.7
CC6IE	LIT		CC6IC.6
CC7IR	LIT		CC7IC.7
CC7IE	LIT		CC7IC.6
CC8IR	LIT		CC8IC.7
CC8IE	LIT		CC8IC.6
CC9IR	LIT		CC9IC.7
CC9IE	LIT		CC9IC.6
CC10IR	LIT		CC10IC.7
CC10IE	LIT		CC10IC.6
CC11IR	LIT		CC11IC.7
CC11IE	LIT		CC11IC.6
CC12IR	LIT		CC12IC.7
CC12IE	LIT		CC12IC.6
CC13IR	LIT		CC13IC.7
CC13IE	LIT		CC13IC.6
CC14IR	LIT		CC14IC.7
CC14IE	LIT		CC14IC.6
CC15IR	LIT		CC15IC.7
CC15IE	LIT		CC15IC.6
CC16IR	LIT		CC16IC.7
CC16IE	LIT		CC16IC.6
CC17IR	LIT		CC17IC.7
CC17IE	LIT		CC17IC.6
CC18IR	LIT		CC18IC.7
CC18IE	LIT		CC18IC.6
CC19IR	LIT		CC19IC.7
CC19IE	LIT		CC19IC.6
CC20IR	LIT		CC20IC.7
CC20IE	LIT		CC20IC.6
CC21IR	LIT		CC21IC.7
CC21IE	LIT		CC21IC.6
CC22IR	LIT		CC22IC.7
CC22IE	LIT		CC22IC.6
CC23IR	LIT		CC23IC.7
CC23IE	LIT		CC23IC.6
CC24IR	LIT		CC24IC.7
CC24IE	LIT		CC24IC.6
CC25IR	LIT		CC25IC.7
CC25IE	LIT		CC25IC.6
CC26IR	LIT		CC26IC.7
CC26IE	LIT		CC26IC.6
CC27IR	LIT		CC27IC.7
CC27IE	LIT		CC27IC.6
CC28IR	LIT		CC28IC.7
CC28IE	LIT		CC28IC.6
CC29IR	LIT		CC29IC.7
CC29IE	LIT		CC29IC.6
CC30IR	LIT		CC30IC.7
CC30IE	LIT		CC30IC.6
CC31IR	LIT		CC31IC.7
CC31IE	LIT		CC31IC.6
ACC0	LIT		CCM0.3
ACC1	LIT		CCM0.7
ACC2	LIT		CCM0.11
ACC3	LIT		CCM0.15
ACC4	LIT		CCM1.3
ACC5	LIT		CCM1.7
ACC6	LIT		CCM1.11
ACC7	LIT		CCM1.15
ACC8	LIT		CCM2.3
ACC9	LIT		CCM2.7
ACC10	LIT		CCM2.11
ACC11	LIT		CCM2.15
ACC12	LIT		CCM3.3
ACC13	LIT		CCM3.7
ACC14	LIT		CCM3.11
ACC15	LIT		CCM3.15
ACC16	LIT		CCM4.3
ACC17	LIT		CCM4.7
ACC18	LIT		CCM4.11
ACC19	LIT		CCM4.15
ACC20	LIT		CCM5.3
ACC21	LIT		CCM5.7
ACC22	LIT		CCM5.11
ACC23	LIT		CCM5.15
ACC24	LIT		CCM6.3
ACC25	LIT		CCM6.7
ACC26	LIT		CCM6.11
ACC27	LIT		CCM6.15
ACC28	LIT		CCM7.3
ACC29	LIT		CCM7.7
ACC30	LIT		CCM7.11
ACC31	LIT		CCM7.15
T0IE	LIT		T0IC.6
T0IR	LIT		T0IC.7
T0M	LIT		T01CON.3
T0R	LIT		T01CON.6
T1IE	LIT		T1IC.6
T1IR	LIT		T1IC.7
T1M	LIT		T01CON.11
T1R	LIT		T01CON.14
T7IE	LIT		T7IC.6
T7IR	LIT		T7IC.7
T7M	LIT		T78CON.3
T7R	LIT		T78CON.6
T8IE	LIT		T8IC.6
T8IR	LIT		T8IC.7
T8M	LIT		T78CON.11
T8R	LIT		T78CON.14
			
	if	0
XPERSHARE	LIT		SYSCON.0
VISIBLE	LIT		SYSCON.1
XPEN	LIT		SYSCON.2
BDRSTEN	LIT		SYSCON.3
OWDDIS	LIT		SYSCON.4
CSCFG	LIT		SYSCON.6
WRCFG	LIT		SYSCON.7
CLKEN	LIT		SYSCON.8
BYTDIS	LIT		SYSCON.9
ROMEN	LIT		SYSCON.10
SGTEN	LIT		SYSCON.11
ROMS1	LIT		SYSCON.12
	endif

RWDC0	LIT		BUSCON0.4
MTTC0	LIT		BUSCON0.5
ALECTL0	LIT		BUSCON0.9
BUSACT0	LIT		BUSCON0.10
RDYEN0	LIT		BUSCON0.12
RWDC1	LIT		BUSCON1.4
MTTC1	LIT		BUSCON1.5
ALECTL1	LIT		BUSCON1.9
BUSACT1	LIT		BUSCON1.10
RDYEN1	LIT		BUSCON1.12
CSREN1	LIT		BUSCON1.14
CSWEN1	LIT		BUSCON1.15
RWDC2	LIT		BUSCON2.4
MTTC2	LIT		BUSCON2.5
ALECTL2	LIT		BUSCON2.9
BUSACT2	LIT		BUSCON2.10
RDYEN2	LIT		BUSCON2.12
CSREN2	LIT		BUSCON2.14
CSWEN2	LIT		BUSCON2.15
RWDC3	LIT		BUSCON3.4
MTTC3	LIT		BUSCON3.5
ALECTL3	LIT		BUSCON3.9
BUSACT3	LIT		BUSCON3.10
RDYEN3	LIT		BUSCON3.12
CSREN3	LIT		BUSCON3.14
CSWEN3	LIT		BUSCON3.15
RWDC4	LIT		BUSCON4.4
MTTC4	LIT		BUSCON4.5
ALECTL4	LIT		BUSCON4.9
BUSACT4	LIT		BUSCON4.10
RDYEN4	LIT		BUSCON4.12
CSREN4	LIT		BUSCON4.14
CSWEN4	LIT		BUSCON4.15

ISNC	EQU	0xF1DE	
RTCIR	LIT		ISNC.0
RTCIE	LIT		ISNC.1
PLLIR	LIT		ISNC.2
PLLIE	LIT		ISNC.3
			
			
PECC0	EQU	0xFEC0	
PECC1	EQU	0xFEC2	
PECC2	EQU	0xFEC4	
PECC3	EQU	0xFEC6	
PECC4	EQU	0xFEC8	
PECC5	EQU	0xFECA	
PECC6	EQU	0xFECC	
PECC7	EQU	0xFECE
BWT	LIT		8	
CL	LIT		11
EOPINT	LIT		14
EOPIC	EQU	0xF19E
PECISNC	EQU	0xFFD8
C0IE	LIT	PECISNC.0
C0IR	LIT	PECISNC.1			
C1IE	LIT	PECISNC.2
C1IR	LIT	PECISNC.3			
C2IE	LIT	PECISNC.4
C2IR	LIT	PECISNC.5			
C3IE	LIT	PECISNC.6
C3IR	LIT	PECISNC.7			
C4IE	LIT	PECISNC.8
C4IR	LIT	PECISNC.9			
C5IE	LIT	PECISNC.10
C5IR	LIT	PECISNC.11		
C6IE	LIT	PECISNC.12
C6IR	LIT	PECISNC.13			
C7IE	LIT	PECISNC.14
C7IR	LIT	PECISNC.15
SCU_ISSR	EQU	0xFF2E
ISS0	LIT	SCU_ISSR.0			
ISS1	LIT	SCU_ISSR.1			
ISS2	LIT	SCU_ISSR.2			
ISS3	LIT	SCU_ISSR.3			
ISS4	LIT	SCU_ISSR.4			
ISS5	LIT	SCU_ISSR.5			
ISS6	LIT	SCU_ISSR.6			
ISS7	LIT	SCU_ISSR.7			
ISS8	LIT	SCU_ISSR.8			
ISS9	LIT	SCU_ISSR.9			
ISS10	LIT	SCU_ISSR.10			
ISS11	LIT	SCU_ISSR.11		
ISS12	LIT	SCU_ISSR.12			
ISS13	LIT	SCU_ISSR.13		
ISS14	LIT	SCU_ISSR.14		
ISS15	LIT	SCU_ISSR.15			
SRCP0	EQU	0xFCE0	
DSTP0	EQU	0xFCE2	
SRCP1	EQU	0xFCE4	
DSTP1	EQU	0xFCE6	
SRCP2	EQU	0xFCE8	
DSTP2	EQU	0xFCEA	
SRCP3	EQU	0xFCEC	
DSTP3	EQU	0xFCEE	
SRCP4	EQU	0xFCF0	
DSTP4	EQU	0xFCF2	
SRCP5	EQU	0xFCF4	
DSTP5	EQU	0xFCF6	
SRCP6	EQU	0xFCF8	
DSTP6	EQU	0xFCFA	
SRCP7	EQU	0xFCFC	
DSTP7	EQU	0xFCFE

WUOSCCON	EQU	0xF1AE
DIS	LIT		WUOSCCON.4
HPOSCCON	EQU	0xF1B4
PLLV		LIT		HPOSCCON.0		
OSCWDTRST	LIT		HPOSCCON.1		
X1D		LIT		HPOSCCON.6		
X1DEN		LIT		HPOSCCON.7		
SHBY		LIT		HPOSCCON.8		
;EMCLKEN		LIT		HPOSCCON.9	; Conflict		
;EMFINDISEN	LIT		HPOSCCON.10	; Conflict		
OSC2L1		LIT		HPOSCCON.11		
OSC2L0		LIT		HPOSCCON.12		
PLLOSCCON	EQU	0xF1B6
OSCPD		LIT		PLLOSCCON.0
PLLSTAT	EQU	0xF0BC
VCOBYST		LIT		PLLSTAT.0
PWDSTAT		LIT		PLLSTAT.1
OSCSELST	LIT		PLLSTAT.2
VCOLOCK		LIT		PLLSTAT.3
PRDY		LIT		PLLSTAT.5
NRDY		LIT		PLLSTAT.6
K1RDY		LIT		PLLSTAT.7
K2RDY		LIT		PLLSTAT.8
FINDIS		LIT		PLLSTAT.9
VCOL0		LIT		PLLSTAT.10
VCOL1		LIT		PLLSTAT.11
REGSTAT		LIT		PLLSTAT.12
OSCSTAB		LIT		PLLSTAT.14
OSCLOCK		LIT		PLLSTAT.15
STATCLR1	EQU	0xF0E2
VCOL0CLR	LIT		STATCLR1.0
VCOL1CLR	LIT		STATCLR1.1
OSC2L0CLR	LIT		STATCLR1.2
OSC2L1CLR	LIT		STATCLR1.3
SETFINDIS	LIT		STATCLR1.4
CLRFINDIS	LIT		STATCLR1.5

PLLCON0		EQU	0xF1B8
VCOBY		LIT		PLLCON0.0
VCOPWD		LIT		PLLCON0.1
REGENCLR	LIT		PLLCON0.4
REGENSET	LIT		PLLCON0.5
INSEL		LIT		PLLCON0.6
NACK		LIT		PLLCON0.15

PLLCON1		EQU	0xF1BA
PLLPWD		LIT		PLLCON1.0
OSCSEL		LIT		PLLCON1.1
RESLD		LIT		PLLCON1.2
AOSCSEL		LIT		PLLCON1.3
;EMCLKEN		LIT		PLLCON1.5	; Conflict
;EMFINDISEN	LIT		PLLCON1.6	; Conflict
PACK		LIT		PLLCON1.15

PLLCON2		EQU	0xF1BC
K1ACK		LIT		PLLCON2.15
PLLCON3		EQU	0xF1BE
K2ACK		LIT		PLLCON3.15

STMREL		EQU	0xF1A8
STMCON		EQU	0xF1AA
;RUN		LIT		STMCON.0	; Conflict

WUCR		EQU	0xF1B0
CLKTRG		LIT	WUCR.7			
;RUN		LIT	WUCR.8			; Conflict			
AON		LIT	WUCR.9			
ASP		LIT	WUCR.10
TTSTAT		LIT	WUCR.14			
WUTRG		LIT	WUCR.15		

RSTSTAT0	EQU	0xF0B2
RSTSTAT1	EQU	0xF0B4
RSTSTAT2	EQU	0xF0B6
RSTCON0		EQU	0xF0B8
RSTCON1		EQU	0xF0BA
RSTCNTCON	EQU	0xF1B2
SWRSTCON	EQU	0xF0AE
SWBOOT		LIT		SWRSTCON.0
SWRSTREQ	LIT		SWRSTCON.1
ESREXCON1	EQU	0xFF32
ESREXCON2	EQU	0xFF34
ESREXSTAT1	EQU	0xFF36
ESREXSTAT2	EQU	0xFF38
CLRESREXSTAT1	EQU	0xFF3A
CLRESREXSTAT2	EQU	0xFF3C
ESRCFG0		EQU	0xF100
ESRCFG1		EQU	0xF102
ESRCFG2		EQU	0xF104
ESRDAT		EQU	0xF106
SWDCON0		EQU	0xF080
L1OK		LIT		SWDCON0.4
;L1ALEV		LIT		SWDCON0.7	; Conflict	
L2OK		LIT		SWDCON0.12
;L2ALEV		LIT		SWDCON0.15	; Conflict
SWDCON1		EQU	0xF082
POWENCLR	LIT		SWDCON1.0
POWENSET	LIT		SWDCON1.1
POWEN		LIT		SWDCON1.2
PON		LIT		SWDCON1.3
CLRPON		LIT		SWDCON1.4
PVC1CON0	EQU	0xF014
LEV1OK		LIT		3
;L1ALEV		LIT		4		; Conflict
L1INTEN		LIT		5
L1RSTEN		LIT		6
L1ASEN		LIT		7
LEV2OK		LIT		11
;L2ALEV		LIT		12		; Conflict
L2INTEN		LIT		13
L2RSTEN		LIT		14
L2ASEN		LIT		15
PVCMCON0	EQU	0xF1E4


EVR1CON0	EQU	0xF088
CCDIS		EQU		12
EVRDIS		EQU		15
EVRMCON0	EQU	0xF084
EVRMCON1	EQU	0xF086

EVR1SET15VHP	EQU	0xF09E
EVRMSET15VHP	EQU	0xF096
GSCSWREQ	EQU	0xFF14
SWTRG1		LIT		GSCSWREQ.0
SWTRG2		LIT		GSCSWREQ.1
GSCEN		EQU	0xFF16
OCDSEXEN 	LIT		GSCEN.4
ESR0EN 		LIT		GSCEN.5
ESR1EN 		LIT	 	GSCEN.6
ESR2EN 		LIT	 	GSCEN.7
WUTEN  		LIT		GSCEN.8 
ITCEN  		LIT		GSCEN.9 
GPTEN  		LIT		GSCEN.10
SW1EN  		LIT		GSCEN.11
SW2EN  		LIT		GSCEN.12
OCDSENEN  	LIT		GSCEN.14
GSCSTAT		EQU	0xFF18
ERR 		LIT	GSCSTAT.8
PEN		LIT	GSCSTAT.9
GSCPERSTATEN	EQU	0xFF04
ADC		LIT 		0
GPT12E		LIT 		1
RES0		LIT 		2
CC2		LIT 		3
MCAN		LIT 		4
CCU60		LIT 		5
CCU61		LIT 		6
CCU62		LIT 		7
CCU63		LIT 		8
RTC		LIT 		9
MEM		LIT 		10
;FL		LIT 		11	; Conflict
USIC0		LIT 		12
USIC1		LIT 		13
USIC2		LIT 		14
USIC3		LIT 		15
GSCPERSTAT	EQU	0xFF1A
STSTAT		EQU	0xF1E0
EXISEL		EQU	0xF1A0
EXICON0		EQU	0xF030
PE		LIT		0
LD		LIT		1
RE		LIT		2
FE		LIT		3
;FL		LIT		7	; Conflict
NA		LIT		10
NB		LIT		11
EXICON1		EQU	0xF032
EXICON2		EQU	0xF034
EXICON3		EQU	0xF036
EXOCON0		EQU	0xFE30
GEEN		LIT		2
PDR		LIT		3
IPEN0		LIT		12
IPEN1		LIT		13
IPEN2		LIT		14
IPEN3		LIT		15
EXOCON1		EQU	0xFE32
EXOCON2		EQU	0xFE34
EXOCON3		EQU	0xFE36
INTSTAT		EQU	0xFF00
;SWDI1		LIT		0		; Conflict
;SWDI2		LIT		1		; Conflict
;PVCMI1		LIT		2		; Conflict
;PVCMI2		LIT		3		; Conflict
;PVC1I1		LIT		4		; Conflict
;PVC1I2		LIT		5		; Conflict
;WUTI		LIT		6		; Conflict
;WUI		LIT		7		; Conflict
WDTI		LIT		8
GSCI		LIT		9
STM0I		LIT		10
STM1I		LIT		11
MCHKI		LIT		12
PFI		LIT		13
INTCLR		EQU	0xFE82
INTSET		EQU	0xFE80
INTDIS		EQU	0xFE84

INTNP0		EQU	0xFE86
;SWDI1		LIT		0		; Conflict
;SWDI2		LIT		1		; Conflict
;PVCMI1		LIT		2		; Conflict
;PVCMI2		LIT		3		; Conflict
;PVC1I1		LIT		4		; Conflict
;PVC1I2		LIT		5		; Conflict
;WUTI		LIT		6		; Conflict
;WUI		LIT		7		; Conflict
GSC		LIT		8
STM0		LIT		9
STM1		LIT		10
;ESR0T		LIT		11			; Conflict
;ESR1T		LIT		12			; Conflict
;ESR2T		LIT		13			; Conflict
;RAT		LIT		15		; Conflict
INTNP1		EQU	0xFE88
DMPMIT		EQU	0xFE96
DMPMITCLR	EQU	0xFE98
TCCR		EQU	0xF1AC
TCE		LIT		TCCR.7
TCLR		EQU	0xF0AC
WDTREL		EQU	0xF0C8
WDTCS		EQU	0xF0C6
OE 		LIT		WDRCS.0
;DS		LIT		WDRCS.1		; Conflict
PR		LIT		WDRCS.2
CLRIRF		LIT		WDRCS.3
IR		LIT		WDRCS.8
WDTTIM		EQU	0xF0CA
TRAPSTAT	EQU	0xFF02
FAT		LIT	0
;ESR0T		LIT	1			; Conflict
;ESR1T		LIT	2			; Conflict
;ESR2T		LIT	3			; Conflict
OSCWDTT		LIT	4
;RAT		LIT	5			; Conflict
PET		LIT	6
VCOLCKT		LIT	7
ECCT		LIT	8
TRAPCLR		EQU	0xFE8E
TRAPSET		EQU	0xFE8C
TRAPDIS		EQU	0xFE90
TRAPNP		EQU	0xFE92
TRAPNP1		EQU	0xFE94
MCHKCON		EQU	0xF0DC
SELDP		LIT		MCHKCON.0
SELDS		LIT		MCHKCON.1
SELPS		LIT		MCHKCON.2
SELSB		LIT		MCHKCON.3
PEEN		EQU	0xF0C4
PEENDP		LIT		PEEN.0
PEENDS		LIT		PEEN.1
PEENPS		LIT		PEEN.2
PEENU0		LIT		PEEN.3
PEENU1		LIT		PEEN.4
PEENU2		LIT		PEEN.5
PEENU3		LIT		PEEN.6
PEENSB		LIT		PEEN.8

PECON		EQU	0xF0DA
PEFDP		LIT		PECON.0
PEFDS		LIT		PECON.1
PEFPS		LIT		PECON.2
PEFU0		LIT		PECON.3
PEFU1		LIT		PECON.4
PEFU2		LIT		PECON.5
PEFU3		LIT		PECON.6
PEFSB		LIT		PECON.8

PMTPR		EQU	0xF0E4
PMTSR		EQU	0xF0E6
MTENDP		LIT		PMTSR.0
MTENDS		LIT		PMTSR.1
MTENPS		LIT		PMTSR.2
MTENSB		LIT		PMTSR.8
PESEN		LIT		PMTSR.15
ECCCON		EQU	0xF0A8
ECCSTAT		EQU	0xF0AA
DP		LIT		ECCSTAT.0
;DS		LIT		ECCSTAT.1	; Conflict
PS		LIT		ECCSTAT.2
;MC		LIT		ECCSTAT.4	; Conflict
SB		LIT		ECCSTAT.5
ECCCLRSTAT	EQU	0xF0DE
SLC		EQU	0xF0C0
SLS		EQU	0xF0C2
SYSCON1		EQU	0xFF4C
OCDSEN		LIT		SYSCON1.2
GLCCST		LIT		SYSCON1.3

IDMANUF		EQU	0xF07E
IDCHIP		EQU	0xF07C
IDMEM		EQU	0xF07A
IDPROG		EQU	0xF078
MKMEM0		EQU	0xFED0
MKMEM1		EQU	0xFED2

			
S0BG	EQU	0xFEB4	
S0CON	EQU	0xFFB0	
S0EIC	EQU	0xFF70	
S0RBUF	EQU	0xFEB2	
S0RIC	EQU	0xFF6E	
S0TBUF	EQU	0xFEB0	
S0TIC	EQU	0xFF6C	
S0TBIC	EQU	0xF19C	
S0STP	LIT		S0CON.3
S0REN	LIT		S0CON.4
S0PEN	LIT		S0CON.5
S0FEN	LIT		S0CON.6
S0OEN	LIT		S0CON.7
S0PE	LIT		S0CON.8
S0FE	LIT		S0CON.9
S0OE	LIT		S0CON.10
S0ODD	LIT		S0CON.12
S0BRS	LIT		S0CON.13
S0LB	LIT		S0CON.14
S0R	LIT		S0CON.15
S0TIE	LIT		S0TIC.6
S0TIR	LIT		S0TIC.7
S0TBIE	LIT		S0TBIC.6
S0TBIR	LIT		S0TBIC.7
S0RIE	LIT		S0RIC.6
S0RIR	LIT		S0RIC.7
S0EIE	LIT		S0EIC.6
S0EIR	LIT		S0EIC.7
			
SSCTIC	EQU	0xFF72	
SSCRIC	EQU	0xFF74	
SSCEIC	EQU	0xFF76	
SSCTB	EQU	0xF0B0	
SSCRB	EQU	0xF0B2	
SSCBR	EQU	0xF0B4	
SSCCON	EQU	0xFFB2	
SSCHB	LIT		SSCCON.4
SSCPH	LIT		SSCCON.5
SSCPO	LIT		SSCCON.6
SSCTE	LIT		SSCCON.8
SSCTEN	LIT		SSCCON.8
SSCRE	LIT		SSCCON.9
SSCREN	LIT		SSCCON.9
SSCPE	LIT		SSCCON.10
SSCPEN	LIT		SSCCON.10
SSCBE	LIT		SSCCON.11
SSCBEN	LIT		SSCCON.11
SSCBSY	LIT		SSCCON.12
SSCMS	LIT		SSCCON.14
SSCEN	LIT		SSCCON.15
SSCTIR	LIT		SSCTIC.7
SSCTIE	LIT		SSCTIC.6
SSCRIR	LIT		SSCRIC.7
SSCRIE	LIT		SSCRIC.6
SSCEIR	LIT		SSCEIC.7
SSCEIE	LIT		SSCEIC.6
			
CAPREL	EQU	0xFE4A	
CRIC	EQU	0xFF6A	
T2	EQU	0xFE40	
T2CON	EQU	0xFF40	
T2IC	EQU	0xFF60	
T3	EQU	0xFE42	
T3CON	EQU	0xFF42	
T3IC	EQU	0xFF62	
T4	EQU	0xFE44	
T4CON	EQU	0xFF44	
T4IC	EQU	0xFF64	
T5	EQU	0xFE46	
T5CON	EQU	0xFF46	
T5IC	EQU	0xFF66	
T6	EQU	0xFE48	
T6CON	EQU	0xFF48	
T6IC	EQU	0xFF68	
WDT	EQU	0xFEAE	
WDTCON	EQU	0xFFAE	
CRIE	LIT		CRIC.6
CRIR	LIT		CRIC.7
T2R	LIT		T2CON.6
T2UD	LIT		T2CON.7
T2UDE	LIT		T2CON.8
T2IE	LIT		T2IC.6
T2IR	LIT		T2IC.7
T3R	LIT		T3CON.6
T3UD	LIT		T3CON.7
T3UDE	LIT		T3CON.8
T3OE	LIT		T3CON.9
T3OTL	LIT		T3CON.10
T3IE	LIT		T3IC.6
T3IR	LIT		T3IC.7
T4R	LIT		T4CON.6
T4UD	LIT		T4CON.7
T4UDE	LIT		T4CON.8
T4IE	LIT		T4IC.6
T4IR	LIT		T4IC.7
T5R	LIT		T5CON.6
T5UD	LIT		T5CON.7
T5UDE	LIT		T5CON.8
T5CLR	LIT		T5CON.14
T5SC	LIT		T5CON.15
T5IE	LIT		T5IC.6
T5IR	LIT		T5IC.7
T6R	LIT		T6CON.6
T6UD	LIT		T6CON.7
T6UDE	LIT		T6CON.8
T6OE	LIT		T6CON.9
T6OTL	LIT		T6CON.10
T6SR	LIT		T6CON.15
T6IE	LIT		T6IC.6
T6IR	LIT		T6IC.7
T0IN	LIT		P3.0
T2IN	LIT		P3.7
T3IN	LIT		P3.6
T4IN	LIT		P3.5
T5IN	LIT		P5.13
T6IN	LIT		P5.12
T2EUD	LIT		P5.15
T3EUD	LIT		P3.4
T4EUD	LIT		P5.14
T5EUD	LIT		P5.11
T6EUD	LIT		P5.10
T3OUT	LIT		P3.3
CAPIN	LIT		P3.2
T6OUT	LIT		P3.1
WDTIN	LIT		WDTCON.0
WDTR	LIT		WDTCON.1
SWR	LIT		WDTCON.2
SHWR	LIT		WDTCON.3
LHWR	LIT		WDTCON.4
PONR	LIT		WDTCON.5
WDTPRE	LIT		WDTCON.7
			
PWMCON0	EQU	0xFF30	
PWMCON1	EQU	0xFF32	
PW0	EQU	0xFE30	
PW1	EQU	0xFE32	
PW2	EQU	0xFE34	
PW3	EQU	0xFE36	
PWMIC	EQU	0xF17E	
PT0	EQU	0xF030	
PT1	EQU	0xF032	
PT2	EQU	0xF034	
PT3	EQU	0xF036	
PP0	EQU	0xF038	
PP1	EQU	0xF03A	
PP2	EQU	0xF03C	
PP3	EQU	0xF03E	
PTR0	LIT		PWMCON0.0
PTR1	LIT		PWMCON0.1
PTR2	LIT		PWMCON0.2
PTR3	LIT		PWMCON0.3
PTI0	LIT		PWMCON0.4
PTI1	LIT		PWMCON0.5
PTI2	LIT		PWMCON0.6
PTI3	LIT		PWMCON0.7
PIE0	LIT		PWMCON0.8
PIE1	LIT		PWMCON0.9
PIE2	LIT		PWMCON0.10
PIE3	LIT		PWMCON0.11
PIR0	LIT		PWMCON0.12
PIR1	LIT		PWMCON0.13
PIR2	LIT		PWMCON0.14
PIR3	LIT		PWMCON0.15
PEN0	LIT		PWMCON1.0
PEN1	LIT		PWMCON1.1
PEN2	LIT		PWMCON1.2
PEN3	LIT		PWMCON1.3
PM0	LIT		PWMCON1.4
PM1	LIT		PWMCON1.5
PM2	LIT		PWMCON1.6
PM3	LIT		PWMCON1.7
PB01	LIT		PWMCON1.12
PS2	LIT		PWMCON1.14
PS3	LIT		PWMCON1.15
PWMIR	LIT		PWMIC.7
PWMIE	LIT		PWMIC.6
			
SYSCON2	EQU	0xF1D0	
RCS	LIT		SYSCON2.6
SCS	LIT		SYSCON2.7
CLKLOCK	LIT		SYSCON2.15
SYSCON3	EQU	0xF1D4	
ADCDIS	LIT		SYSCON3.0
ASC0DIS	LIT		SYSCON3.1
SSCDIS	LIT		SYSCON3.2
GPT1DIS	LIT		SYSCON3.3
GPT2DIS	LIT		SYSCON3.4
FMDIS	LIT		SYSCON3.5
CC1DIS	LIT		SYSCON3.6
CC2DIS	LIT		SYSCON3.7
PWMDIS	LIT		SYSCON3.9
ASC1DIS	LIT		SYSCON3.10
I2CDIS	LIT		SYSCON3.11
CAN1DIS	LIT		SYSCON3.13
CAN2DIS	LIT		SYSCON3.14
PCDDIS	LIT		SYSCON3.15
			
XP0IC	EQU	0xF186	
XP1IC	EQU	0xF18E	
XP2IC	EQU	0xF196	
XP3IC	EQU	0xF19E	
XP0IR	LIT		XP0IC.7
XP0IE	LIT		XP0IC.6
XP1IR	LIT		XP1IC.7
XP1IE	LIT		XP1IC.6
XP2IR	LIT		XP2IC.7
XP2IE	LIT		XP2IC.6
XP3IR	LIT		XP3IC.7
XP3IE	LIT		XP3IC.6
			
XBCON1	EQU	0xF114	
XBCON2	EQU	0xF116	
XBCON5	EQU	0xF11C	
XADRS5	EQU	0xF01C	
RSTCON	EQU	0xF1E0	


;;
;; POCON BITS

PPS0	LIT		3
PPS1	LIT		7
PPS2	LIT		11
PPS3	LIT		15

;; POCON FIELDS ( shift left count )
PDM0	LIT		0
PDM1	LIT		4
PDM2	LIT		8
PDM3	LIT		12


P0_OUT		EQU	0xFFA2
P0_IN		EQU	0xFF80
P0_OMRL		EQU	0xE9C0
P0_POCON	EQU	0xE8A0
P0_IOCR00	EQU	0xE800
P0_IOCR01	EQU	0xE802
P0_IOCR02	EQU	0xE804
P0_IOCR03	EQU	0xE806
P0_IOCR04	EQU	0xE808
P0_IOCR05	EQU	0xE80A
P0_IOCR06	EQU	0xE80C
P0_IOCR07	EQU	0xE80E
		
P1_OUT		EQU	0xFFA4
P1_IN		EQU	0xFF82
P1_OMRL		EQU	0xE9C4
P1_POCON	EQU	0xE8A2
P1_IOCR00	EQU	0xE820
P1_IOCR01	EQU	0xE822
P1_IOCR02	EQU	0xE824
P1_IOCR03	EQU	0xE826
P1_IOCR04	EQU	0xE828
P1_IOCR05	EQU	0xE82A
P1_IOCR06	EQU	0xE82C
P1_IOCR07	EQU	0xE82E
		
P2_OUT		EQU	0xFFA6
P2_IN		EQU	0xFF84
P2_OMRL		EQU	0xE9C8
P2_OMRH		EQU	0xE9CA
P2_POCON	EQU	0xE8A4
P2_IOCR00	EQU	0xE840
P2_IOCR01	EQU	0xE842
P2_IOCR02	EQU	0xE844
P2_IOCR03	EQU	0xE846
P2_IOCR04	EQU	0xE848
P2_IOCR05	EQU	0xE84A
P2_IOCR06	EQU	0xE84C
P2_IOCR07	EQU	0xE84E
P2_IOCR08	EQU	0xE850
P2_IOCR09	EQU	0xE852
P2_IOCR10	EQU	0xE854
P2_IOCR11	EQU	0xE856
P2_IOCR12	EQU	0xE858
P2_IOCR13	EQU	0xE85A
		
P3_OUT		EQU	0xFFA8
P3_IN		EQU	0xFF86
P3_OMRL		EQU	0xE9CC
P3_POCON	EQU	0xE8A6
P3_IOCR00	EQU	0xE860
P3_IOCR01	EQU	0xE862
P3_IOCR02	EQU	0xE864
P3_IOCR03	EQU	0xE866
P3_IOCR04	EQU	0xE868
P3_IOCR05	EQU	0xE86A
P3_IOCR06	EQU	0xE86C
P3_IOCR07	EQU	0xE86E
		
		
		
P4_OUT		EQU	0xFFAA
P4_IN		EQU	0xFF88
P4_OMRL		EQU	0xE9D0
P4_POCON	EQU	0xE8A8
P4_IOCR00	EQU	0xE880
P4_IOCR01	EQU	0xE882
P4_IOCR02	EQU	0xE884
P4_IOCR03	EQU	0xE886
P4_IOCR04	EQU	0xE888
P4_IOCR05	EQU	0xE88A
P4_IOCR06	EQU	0xE88C
P4_IOCR07	EQU	0xE88E
		
		
P5_IN		EQU	0xFF8A
P5_DIDIS	EQU	0xFE8A
	
P6_OUT		EQU	0xFFAE
P6_IN		EQU	0xFF8C
P6_OMRL		EQU	0xE9D8
P6_POCON	EQU	0xE8AC
P6_IOCR00	EQU	0xE8C0
P6_IOCR01	EQU	0xE8C2
P6_IOCR02	EQU	0xE8C4
P6_IOCR03	EQU	0xE8C6
		
		
P7_OUT		EQU	0xFFB0
P7_IN		EQU	0xFF8E
P7_OMRL		EQU	0xE9DC
P7_POCON	EQU	0xE8AE
P7_IOCR00	EQU	0xE8E0
P7_IOCR01	EQU	0xE8E2
P7_IOCR02	EQU	0xE8E4
P7_IOCR03	EQU	0xE8E6
P7_IOCR04	EQU	0xE8E8
		
		
P8_OUT		EQU	0xFFB2
P8_IN		EQU	0xFF90
P8_OMRL		EQU	0xE9E0
P8_POCON	EQU	0xE8B0
P8_IOCR00	EQU	0xE900
P8_IOCR01	EQU	0xE902
P8_IOCR02	EQU	0xE904
P8_IOCR03	EQU	0xE906
P8_IOCR04	EQU	0xE908
P8_IOCR05	EQU	0xE90A
P8_IOCR06	EQU	0xE90C
		
		
P9_OUT		EQU	0xFFB4
P9_IN		EQU	0xFF92
P9_OMRL		EQU	0xE9E4
P9_POCON	EQU	0xE8B2
P9_IOCR00	EQU	0xE920
P9_IOCR01	EQU	0xE922
P9_IOCR02	EQU	0xE924
P9_IOCR03	EQU	0xE926
P9_IOCR04	EQU	0xE928
P9_IOCR05	EQU	0xE92A
P9_IOCR06	EQU	0xE92C
P9_IOCR07	EQU	0xE92E
		
		
P10_OUT		EQU	0xFFB6
P10_IN		EQU	0xFF94
P10_OMRL	EQU	0xE9E8
P10_OMRH	EQU	0xE9EA
P10_POCON	EQU	0xE8B4
P10_IOCR00	EQU	0xE940
P10_IOCR01	EQU	0xE942
P10_IOCR02	EQU	0xE944
P10_IOCR03	EQU	0xE946
P10_IOCR04	EQU	0xE948
P10_IOCR05	EQU	0xE94A
P10_IOCR06	EQU	0xE94C
P10_IOCR07	EQU	0xE94E
P10_IOCR08	EQU	0xE950
P10_IOCR09	EQU	0xE952
P10_IOCR10	EQU	0xE954
P10_IOCR11	EQU	0xE956
P10_IOCR12	EQU	0xE958
P10_IOCR13	EQU	0xE95A
P10_IOCR14	EQU	0xE95C
P10_IOCR15	EQU	0xE95E
		
P11_OUT		EQU	0xFFB8
P11_IN		EQU	0xFF96
P11_OMRL	EQU	0xE9EC
P11_POCON	EQU	0xE8B6
P11_IOCR00	EQU	0xE960
P11_IOCR01	EQU	0xE962
P11_IOCR02	EQU	0xE964
P11_IOCR03	EQU	0xE966
P11_IOCR04	EQU	0xE968
P11_IOCR05	EQU	0xE96A
		
		
P15_IN		EQU	0xFF9E
P15_DIDIS	EQU	0xFE9E


EBCMOD0		EQU	0xE000
ARBEN		LIT		EBCMOD0.8
SLAVE		LIT		EBCMOD0.9
EBCDIS		LIT		EBCMOD0.10
WRCFG		LIT		EBCMOD0.11
BYTDIS		LIT		EBCMOD0.12
ALEDIS		LIT		EBCMOD0.13
RDYDIS		LIT		EBCMOD0.14
RDYPOL		LIT		EBCMOD0.15

EBCMOD1		EQU	0xE002
A0PDIS		LIT		EBCMOD1.4
ALPDIS		LIT		EBCMOD1.5
DHPDIS		LIT		EBCMOD1.6
WRPDIS		LIT		EBCMOD1.7

TCONCS0		EQU	0xE010
PHB 		LIT		2
PHD 		LIT		5
TCONCS1		EQU	0xE018
TCONCS2		EQU	0xE020
TCONCS3		EQU	0xE028
TCONCS4		EQU	0xE030
TCONCS7		EQU	0xE048

FCONCS0		EQU	0xE012
ENCS		LIT		0
RDYEN		LIT		1
RDYMOD		LIT		2
FCONCS1		EQU	0xE01A
FCONCS2		EQU	0xE022
FCONCS3		EQU	0xE02A
FCONCS4		EQU	0xE032
FCONCS7		EQU	0xE04A

STMEM0		EQU	0xF0A0
RINPS	LIT		STMEM0.11
RINDS	LIT		STMEM0.12
RINDP	LIT		STMEM0.13
USSET	LIT		STMEM0.15

DBGPRR		EQU	0xF06E
DPRE		LIT		DBGPRR.10
JTAG_DAP	LIT		DBGPRR.11
DBGEN		LIT		DBGPRR.12
TRSTGT		LIT		DBGPRR.13
TRSTS		LIT		DBGPRR.14
TRSTL		LIT		DBGPRR.15



	LIST