/*
 * File:   main.c
 * Author: Mateus
 *
 * Created on 26 de Fevereiro de 2018, 22:19
 */

#include "config_bits.h"
#include "lcd.h"

void main(){
 
    init_LCD();
    write_LCD("Hello");
    while(1){
    }
    
}