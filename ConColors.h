#pragma once

#ifndef __CONSOLE_DRAW_COLORS__
#define __CONSOLE_DRAW_COLORS__

#define CONSOLE_COLOR(f, b)		((WORD)(f|(b<<4)))

enum COLORS_ {
	BLACK = 0,
	BLUE,
	GREEN,
	CYAN,
	RED,
	MAGENTA,
	BROWN,
	LIGHTGRAY,
	DARKGRAY,
	LIGHTBLUE,
	LIGHTGREEN,
	LIGHTCYAN,
	LIGHTRED,
	LIGHTMAGENTA,
	YELLOW,
	WHITE,

	COLOR_ALL
};

#endif /* __CONSOLE_DRAW_COLORS__ */
