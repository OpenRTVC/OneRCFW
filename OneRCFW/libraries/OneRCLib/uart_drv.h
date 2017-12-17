/**
 *******************************************************************************
 *      ______  _   __  ______  ____     ______        ___    ______   ____
 *     / __  / / \ / / / ____/ / __ \   /  ___/       /  /   /_   _/  / __ \
 *    / /_/ / /   \ / / ____/ /  -- /  /  /__   __   /  /__  _/  /_  / __ <
 *   /_____/ /_/ \_/ /_____/ /__/ \_\ /_____/  /_/  /_____/ /_____/ /_____/
 *
 *      A amateur remote control software library. Use at your own risk.
 *
 * @file    uart_drv.h
 * @brief   AVR UART driver functions.
 * @author  Y.S.Kuo in Hsinchu
 *******************************************************************************
 */

#ifndef UART_DRV_H_
#define UART_DRV_H_

#include <stdint.h>


/*
 *******************************************************************************
 * Constant value definition
 *******************************************************************************
 */


/*
 *******************************************************************************
 * Data type definition
 *******************************************************************************
 */


/*
 *******************************************************************************
 * Global variables
 *******************************************************************************
 */


/*
 *******************************************************************************
 * Public functions declaration
 *******************************************************************************
 */

int8_t Uart0_Init(uint32_t baud_rate);
uint8_t Uart0_WriteBytes(uint8_t *p_data, uint8_t bytes);
uint8_t Uart0_WriteBytesNB(uint8_t *p_data, uint8_t bytes);
uint8_t Uart0_WriteByte(uint8_t data);
uint8_t Uart0_WriteByteNB(uint8_t data);
uint8_t Uart0_ReadBytes(uint8_t *p_data, uint8_t bytes);
uint8_t Uart0_ReadByte(uint8_t *p_data);
uint8_t Uart0_ReadAvailable();


/*
 *******************************************************************************
 * Private functions
 *******************************************************************************
 */


#endif // UART_DRV_H_
