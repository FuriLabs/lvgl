/**
 * Copyright 2021 Johannes Marbach
 * Copyright 2024 David Badiei
 *
 * This file is part of furios-terminal, hereafter referred to as the program.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <https://www.gnu.org/licenses/>.
 */


#ifndef LV_KEYBOARD_GLOBAL_H
#define LV_KEYBOARD_GLOBAL_H

#include <stdbool.h>
#include <stdint.h>

#include "lvgl/lvgl.h"
#include "lv_drv_conf.h"
#include "squeek2lvgl/sq2lv.h"

#define BUFFER_SIZE 4096

extern char commandBuffer[BUFFER_SIZE];
extern bool commandReadyToSend;
extern int commandBufferPos;
extern int commandBufferLength;
extern int startingBufferPos;
extern int endingBufferPos;

#endif /* LV_KEYBOARD_GLOBAL_H */
