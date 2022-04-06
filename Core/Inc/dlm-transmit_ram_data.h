/*
 * dlm-transmit_ram_data.h
 *
 *  Created on: Mar 20, 2022
 *      Author: jonathan
 */

#ifndef INC_DLM_TRANSMIT_RAM_DATA_H_
#define INC_DLM_TRANSMIT_RAM_DATA_H_

#include "base_types.h"
#include "dlm-storage_structs.h"
#include "main.h"

void transmit_ram_data_init(DATA_INFO_NODE* ram_ptr);
void transmit_data(UART_HandleTypeDef* uart);

#endif /* INC_DLM_TRANSMIT_RAM_DATA_H_ */
