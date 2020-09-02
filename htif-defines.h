// Copyright 2020 Cartesi Pte. Ltd.
//
// This file is part of the machine-emulator. The machine-emulator is free
// software: you can redistribute it and/or modify it under the terms of the GNU
// Lesser General Public License as published by the Free Software Foundation,
// either version 3 of the License, or (at your option) any later version.
//
// The machine-emulator is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
// FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License
// for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with the machine-emulator. If not, see http://www.gnu.org/licenses/.
//

#ifndef HTIF_DEFINES_H
#define HTIF_DEFINES_H

#define HTIF_DEV_SHIFT_DEF  56
#define HTIF_CMD_SHIFT_DEF  48
#define HTIF_DATA_SHIFT_DEF  0

#define HTIF_DEV_MASK_DEF  0xFF00000000000000
#define HTIF_CMD_MASK_DEF  0x00FF000000000000
#define HTIF_DATA_MASK_DEF 0x0000FFFFFFFFFFFF

#define HTIF_DEVICE_HALT_DEF    0
#define HTIF_DEVICE_CONSOLE_DEF 1
#define HTIF_DEVICE_YIELD_DEF   2

#define HTIF_HALT_HALT_DEF       0
#define HTIF_CONSOLE_GETCHAR_DEF 0
#define HTIF_CONSOLE_PUTCHAR_DEF 1
#define HTIF_YIELD_PROGRESS_DEF  0
#define HTIF_YIELD_ROLLUP_DEF    1


#endif /* end of include guard: HTIF_DEFINES_H */
