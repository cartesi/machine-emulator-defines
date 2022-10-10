// Copyright 2019 Cartesi Pte. Ltd.
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

#ifndef UARCH_DEFINES_H
#define UARCH_DEFINES_H

#define UARCH_MMIO_START_DEF   0x7ffff000  ///< Start of uarch's memory mapped IO addresses

#define UARCH_MMIO_PUTCHAR_ADDR_DEF     (UARCH_MMIO_START_DEF + 0x8)   // NOLINT(cppcoreguidelines-macro-usage)
#define UARCH_MMIO_ABORT_ADDR_DEF       (UARCH_MMIO_START_DEF + 0x10)  // NOLINT(cppcoreguidelines-macro-usage)
#define UARCH_MMIO_MARK_PAGE_DIRTY_DEF  (UARCH_MMIO_START_DEF + 0x18)  // NOLINT(cppcoreguidelines-macro-usage)

#endif /* end of include guard: UARCH_DEFINES_H */
