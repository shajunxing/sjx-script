/*
Copyright 2024-2026 ShaJunXing <shajunxing@hotmail.com>

This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with this program. If not, see <https://www.gnu.org/licenses/>.
*/

#include "parser.h"
#include "c.h"

int main(int argc, char *argv[]) {
    default_locale();
    struct parser ps = {0};
    default_parse(&ps, argc, argv);
    struct vm vm = {.bc = ps.bc};
    default_decl(&vm, argc, argv);
    return default_run(&vm, &(ps.dbg));
}
