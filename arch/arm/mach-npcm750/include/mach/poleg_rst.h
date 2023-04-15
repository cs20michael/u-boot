#ifndef _POLEG_RST_H_
#define _POLEG_RST_H_

enum reset_type {
    PORST    = 0x01,
    CORST    = 0x02,
    WD0RST   = 0x03,
    SWR1ST   = 0x04,
    SWR2ST   = 0x05,
    SWR3ST   = 0x06,
    SWR4ST   = 0x07,
    WD1RST   = 0x08,
    WD2RST   = 0x09,
    UNKNOWN  = 0x10,
};

#define PORST		BIT(31)
#define CORST		BIT(30)
#define WD0RST		BIT(29)
#define SW1RST		BIT(28)
#define SW2RST		BIT(27)
#define SW3RST		BIT(26)
#define SW4RST		BIT(25)
#define WD1RST		BIT(24)
#define WD2RST		BIT(23)
#define RESSR_MASK 0xff800000

enum reset_type npcm7xx_reset_reason(void);

#endif

