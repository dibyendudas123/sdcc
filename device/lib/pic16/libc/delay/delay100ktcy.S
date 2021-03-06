;--------------------------------------------------------------------------
;  delay100ktcy.S
;
;  Copyright (C) 2005, Vangelis Rokas <vrokas at otenet.gr>
;
;  This library is free software; you can redistribute it and/or modify it
;  under the terms of the GNU General Public License as published by the
;  Free Software Foundation; either version 2.1, or (at your option) any
;  later version.
;
;  This library is distributed in the hope that it will be useful,
;  but WITHOUT ANY WARRANTY; without even the implied warranty of
;  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
;  GNU General Public License for more details.
;
;  You should have received a copy of the GNU General Public License 
;  along with this library; see the file COPYING. If not, write to the
;  Free Software Foundation, 51 Franklin Street, Fifth Floor, Boston,
;   MA 02110-1301, USA.
;
;  As a special exception, if you link this library with other files,
;  some of which are compiled with SDCC, to produce an executable,
;  this library does not by itself cause the resulting executable to
;  be covered by the GNU General Public License. This exception does
;  not however invalidate any other reasons why the executable file
;  might be covered by the GNU General Public License.
;--------------------------------------------------------------------------

        include <p18fxxx.inc>

        extern  _delay10tcy
        extern  _delay1ktcy

        global  _delay100ktcy
    
        code

_delay100ktcy:
        ; polynomial for 100ktcy delay is f(x) = 100000 * (x-1) + 100000
        decf    WREG, f
    
        movwf    POSTDEC1
        movlw    99
        call    _delay1ktcy

        movlw       99
        call        _delay10tcy

        movf    PREINC1, w
 
        bz        @delay100k_end
        bra        $+2
    
@delay100k_loop:
        movwf    POSTDEC1

        movlw    99
        call    _delay1ktcy

        movlw       99
        call        _delay10tcy

        bra        $+2
        bra        $+2
        nop                         
        movf    PREINC1, w
        decfsz    WREG, f
        bra        @delay100k_loop

@delay100k_end:
        return

        end
