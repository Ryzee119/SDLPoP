/*
SDLPoP, a port/conversion of the DOS game Prince of Persia.
Copyright (C) 2013-2019  Dávid Nagy

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.

The authors of this program may be contacted at https://forum.princed.org
*/

#include <hal/xbox.h>
#include <hal/video.h>
#include "common.h"

int main(int argc, char *argv[])
{
	g_argc = argc;
	g_argv = argv;
	XVideoSetMode(640, 480, 32, REFRESH_DEFAULT);
	debugPrint("pop_main()\n");

	pop_main();
	XReboot();
	return 0;
}

