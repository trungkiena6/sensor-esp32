/*
 * cpanel.h
 *
 *  Created on: Oct 5, 2017
 *      Author: kris
 *
 *  This file is part of OpenAirProject-ESP32.
 *
 *  OpenAirProject-ESP32 is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  OpenAirProject-ESP32 is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with OpenAirProject-ESP32.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef COMPONENTS_BOOTWIFI_CPANEL_H_
#define COMPONENTS_BOOTWIFI_CPANEL_H_


#include "mongoose.h"

void cpanel_event_handler(struct mg_connection *nc, int ev, void *evData);


#endif /* COMPONENTS_BOOTWIFI_CPANEL_H_ */
