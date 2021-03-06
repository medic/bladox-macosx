/* Copyright (c) 2004 Eric B. Weddington
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id: iotn26.h,v 1.7 2004/11/19 00:35:07 arcanum Exp $ */

/* avr/iotn26.h - definitions for ATtiny26 */

/* This file should only be included from <avr/io.h>, never directly. */

#ifndef _AVR_IO_H_
#  error "Include <avr/io.h> instead of this file."
#endif

#ifndef _AVR_IOXXX_H_
#  define _AVR_IOXXX_H_ "iotn26.h"
#else
#  error "Attempt to include more than one <avr/ioXXX.h> file."
#endif 

#ifndef _AVR_IOTN26_H_
#define _AVR_IOTN26_H_ 1

/* Registers and associated bit numbers */

/* Reserved [0x00..0x03] */

#define ADCW    _SFR_IO16(0x04)
#ifndef __ASSEMBLER__
#define ADC     _SFR_IO16(0x04)
#endif

#define ADCL    _SFR_IO8(0x04)
#define ADCH    _SFR_IO8(0x05)

#define ADCSR   _SFR_IO8(0x06)
#define ADPS0   0
#define ADPS1   1
#define ADPS2   2
#define ADIE    3
#define ADIF    4
#define ADFR    5
#define ADSC    6
#define ADEN    7

#define ADMUX   _SFR_IO8(0x07)
#define MUX0    0
#define MUX1    1
#define MUX2    2
#define MUX3    3
#define MUX4    4
#define ADLAR   5
#define REFS0   6
#define REFS1   7

#define ACSR    _SFR_IO8(0x08)
#define ACIS0   0
#define ACIS1   1
#define ACME    2
#define ACIE    3
#define ACI     4
#define ACO     5
#define ACBG    6
#define ACD     7

/* Reserved [0x09..0x0C] */

#define USICR   _SFR_IO8(0x0D)
#define USITC   0
#define USICLK  1
#define USICS0  2
#define USICS1  3
#define USIWM0  4
#define USIWM1  5
#define USIOIE  6
#define USISIE  7

#define USISR   _SFR_IO8(0x0E)
#define USICNT0 0
#define USICNT1 1
#define USICNT2 2
#define USICNT3 3
#define USIDC   4
#define USIPF   5
#define USIOIF  6
#define USISIF  7

#define USIDR   _SFR_IO8(0x0F)

/* Reserved [0x10..0x15] */

/* The bit numbers for the Port A-B registers are defined in <avr/portpins.h> */
#define PINB    _SFR_IO8(0x16)
#define DDRB    _SFR_IO8(0x17)
#define PORTB   _SFR_IO8(0x18)
#define PINA    _SFR_IO8(0x19)
#define DDRA    _SFR_IO8(0x1A)
#define PORTA   _SFR_IO8(0x1B)

/* EEPROM [0x1C..0X1E] The bit numbers are defined in <avr/io.h> */

/* Reserved [0x1F..0x20] */

#define WDTCR   _SFR_IO8(0x21)
#define WDP0    0
#define WDP1    1
#define WDP2    2
#define WDE     3
#define WDCE    4

/* Reserved [0x22..0x28] */

#define PLLCSR  _SFR_IO8(0x29)
#define PLOCK   0
#define PLLE    1
#define PCKE    2

/* Reserved [0x2A] */

#define OCR1C   _SFR_IO8(0x2B)

#define OCR1B   _SFR_IO8(0x2C)

#define OCR1A   _SFR_IO8(0x2D)

#define TCNT1   _SFR_IO8(0x2E)

#define TCCR1B  _SFR_IO8(0x2F)
#define CS10    0
#define CS11    1
#define CS12    2
#define CS13    3
#define PSR1    6
#define CTC1    7

#define TCCR1A  _SFR_IO8(0x30)
#define PWM1B   0
#define PWM1A   1
#define FOC1B   2
#define FOC1A   3
#define COM1B0  4
#define COM1B1  5
#define COM1A0  6
#define COM1A1  7

#define OSCCAL  _SFR_IO8(0x31)

#define TCNT0   _SFR_IO8(0x32)

#define TCCR0   _SFR_IO8(0x33)
#define CS00    0
#define CS01    1
#define CS02    2
#define PSR0    3

#define MCUSR   _SFR_IO8(0x34)
#define PORF    0
#define EXTRF   1
#define BORF    2
#define WDRF    3

#define MCUCR   _SFR_IO8(0x35)
#define ISC00   0
#define ISC01   1
#define SM0     3
#define SM1     4
#define SE      5
#define PUD     6

/* Reserved [0x36..0x37] */

#define TIFR    _SFR_IO8(0x38)
#define TOV0    1
#define TOV1    2
#define OCF1B   5
#define OCF1A   6

#define TIMSK   _SFR_IO8(0x39)
#define TOIE0   1
#define TOIE1   2
#define OCIE1B  5
#define OCIE1A  6

#define GIFR    _SFR_IO8(0x3A)
#define PCIF    5
#define INTF0   6

#define GIMSK   _SFR_IO8(0x3B)
#define PCIE0   4
#define PCIE1   5
#define INT0    6

/* Reserved [0x3C] */

/* SP [0x3D] */

/* Reserved [0x3E] */

/* SREG [0x3F] */


/* Interrupt vectors */
/* Interrupt vector 0 is the reset vector. */
#define SIG_INTERRUPT0          _VECTOR(1)
#define SIG_PIN_CHANGE          _VECTOR(2)
#define SIG_OUTPUT_COMPARE1A    _VECTOR(3)
#define SIG_OUTPUT_COMPARE1B    _VECTOR(4)
#define SIG_OVERFLOW1           _VECTOR(5)
#define SIG_OVERFLOW0           _VECTOR(6)
#define SIG_USI_START           _VECTOR(7)
#define SIG_USI_OVERFLOW        _VECTOR(8)
#define SIG_EPROM_READY         _VECTOR(9)
#define SIG_ANA_COMP            _VECTOR(10)
#define SIG_ADC                 _VECTOR(11)

#define _VECTORS_SIZE 24


/* Constants */
#define RAMEND      0xDF
#define XRAMEND     0xDF
#define E2END       0x7F
#define FLASHEND    0x07FF

#endif  /* _AVR_IOTN26_H_ */
