/*
 * Definitions.h
 *
 * Created: 12/01/2018 12:55:02
 *  Author: DAVID
 */ 

#ifndef DEFINITIONS_H_
#define DEFINITIONS_H
//-----------------------------------------------------
#define F_CPU 16000000		//FREQUENCIA DO OSCILADOR
#define BAUD 9600			//VELOCIDADE DE COMUNICACAO SERIAL
#include <avr/io.h>
#include <avr/pgmspace.h>	//PARA GRAVACAO E LEITURA EM MEMORIA FLASH
#include <avr/interrupt.h>	//INTERRUPCOES
#include <util/delay.h>		//ROTINAS DE DELAY
#include "Cosmos_USART.h"
#include "Cosmos_EEPROM.h"
#include "_595_Control.h"
//-----------------------------------------------------

//MACROS DE SETAGEM INDIVIDUAL
#define set_bit(reg,bit) (reg |= (1<<bit))			//Coloca Bit em 1
#define reset_bit(reg,bit) (reg &= ~(1<<bit))		//Coloca Bit em 0
#define invert_bit(reg,bit) (reg ^= (1<<bit))		//Inverte o Bit
#define test_bit(reg,bit) (reg & (1<<bit))			//Testa um unico Bit
//-----------------------------------------------------

//DIMENSOES DO DISPLAY

#define  DISP_ROWS_QTY		8	//MAXIMO POSSIVEL: 8
#define  DISP_COLUMNS_QTY	88
//-----------------------------------------------------

//PINOS DO ATMEGA (PORTD)

#define  QUERY		3
#define  SHIFT		4
#define  DATA		5
//-----------------------------------------------------

//DEFINICOES DE FLAGS

// #define  TMR1_OVER		0
// #define  STARTUP_FLAG	1
// #define  SLEEP_FLAG		2
// #define  ANIM_2			3
// #define  IMG3_CHANGED	4
// #define  IMG4_CHANGED	5

//-----------------------------------------------------

//CONSTANTES
			
#define  BUFFER_SIZE		0xFF
#define  KEYBOARD_LF        0x0A    //CHAR  |LF|
#define  KEYBOARD_ENTER		0x0D	//TECLA |ENTER|
#define  KEYBOARD_UNDERLINE	0x5F	//TECLA |_| (UNDERLINE)
#define  KEYBOARD_I			0X49	//TECLA |I| 
#define  KEYBOARD_S			0X53	//TECLA |S| 
#define  KEYBOARD_0			0X30	//TECLA |0| 
#define  KEYBOARD_1			0X31	//TECLA |1| 
//#define  animation1_speed	60
#define  CALL_EEPROM		0x00
#define  BUFF_DATA_LIMIT    998

//-----------------------------------------------------

//MACROS

//#define TURN_OFF_DISP() PORTC = 0b00000000;


//-----------------------------------------------------
#endif /* DEFINITIONS_H_ */