/******************************************************************************
    Copyright (C) 2019 by Jason Francis <cycl0ps@tuta.io>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
******************************************************************************/

#pragma once

#include "util/c99defs.h"

#ifdef __cplusplus
extern "C" {
#endif

enum obs_platform_type { OBS_PLATFORM_DEFAULT, OBS_PLATFORM_WAYLAND };

/**
 * Sets the host platform. Currently this is only used on Unix-like platforms
 * to switch between XCB and Wayland. Defaults to XCB if both are compiled in.
 * @param platform The platform to select.
 */
EXPORT void obs_set_platform(enum obs_platform_type platform);
/**
 * Gets the host platform.
 */
EXPORT enum obs_platform_type obs_get_platform(void);
/**
 * Sets the host platform's display connection. Currently this is only used on
 * Wayland on Unix-like platforms.
 * @param display The host display connection.
 */
EXPORT void obs_set_platform_display(void *display);
/**
 * Gets the host platform's display connection.
 */
EXPORT void *obs_get_platform_display(void);

#ifdef __cplusplus
}
#endif
