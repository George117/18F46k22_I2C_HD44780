/*
 * File:   main.c
 * Author: georg
 *
 * Created on October 27, 2018, 10:59 AM
 */

#define _XTAL_FREQ 64000000
#include <xc.h>
#include "bit_settings.h"
#include "config.h"


void main(void) {
    config();
    
    while(1)
    {
        LATDbits.LATD0=1;
        __delay_ms(1);
        LATDbits.LATD0=0;
        __delay_ms(1);
    }
    
    return;
}
