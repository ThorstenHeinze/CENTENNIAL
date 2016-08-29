/*
 * runtime_callbacks.h
 *
 *  Created on: Aug 19, 2016
 *      Author: compila
 */

#ifndef RUNTIME_CALLBACKS_H_
#define RUNTIME_CALLBACKS_H_

#include "status.h"
#include "val.h"
#include "utils.h"

status_t cb_get_all_air_interface_current_problem_list_keys(char *air_interface_pac_key, char** current_problem_list_key_entries, int* num_of_keys);
status_t cb_get_all_air_interface_historical_performance_list_keys(char *air_interface_pac_key, char **historical_performance_data_list_keys_entries, int *num_of_keys);
status_t cb_set_runtime_airInterfaceStatus_element_value(val_value_t **element);
status_t cb_set_runtime_airInterfaceCurrentPerformance_element_value(val_value_t **element);
const char* cb_get_runtime_element_value(val_value_t *element);

#endif /* RUNTIME_CALLBACKS_H_ */
