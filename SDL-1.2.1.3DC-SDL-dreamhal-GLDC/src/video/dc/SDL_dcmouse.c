/*
    SDL - Simple DirectMedia Layer
    Copyright (C) 1997-2012 Sam Lantinga

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

    BERO
    bero@geocities.co.jp

    based on SDL_nullvideo.h by

    Sam Lantinga
    slouken@libsdl.org
*/
#include "SDL_config.h"

#include <stdio.h>

#include "SDL_error.h"
#include "SDL_mouse.h"
#include "SDL_events_c.h"

#include "SDL_dcmouse_c.h"


/* The implementation dependent data for the window manager cursor */
struct WMcursor {
	int unused;
};