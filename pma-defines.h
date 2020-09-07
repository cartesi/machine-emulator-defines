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

#ifndef PMA_DEFINES_H
#define PMA_DEFINES_H

#define PMA_SHADOW_START_DEF        0x0        ///< Shadow start address
#define PMA_SHADOW_LENGTH_DEF       0x1000     ///< Shadow length in bytes
#define PMA_START_DEF               0x800      ///< PMA array start address
#define PMA_ROM_LENGTH_DEF          0xF000     ///< ROM length in bytes
#define PMA_ROM_START_DEF           0x1000     ///< ROM start address
#define PMA_CLINT_START_DEF         0x2000000  ///< CLINT start address
#define PMA_CLINT_LENGTH_DEF        0xC0000    ///< CLINT length in bytes
#define PMA_HTIF_START_DEF          0x40008000 ///< HTIF base address (to_host)
#define PMA_HTIF_LENGTH_DEF         0x1000     ///< HTIF length in bytes
#define PMA_FIRST_VIRTIO_START_DEF  0x40010000 ///< Start of first VIRTIO range (RESERVED)
#define PMA_VIRTIO_LENGTH_DEF       0x1000     ///< Length of each VIRTIO range (RESERVED)
#define PMA_LAST_VIRTIO_END_DEF     0x40020000 ///< End of last VIRTIO range (RESERVED)
#define PMA_DHD_START_DEF           0x40030000 ///< Start of DEHASH range
#define PMA_DHD_LENGTH_DEF          0x1000     ///< Length of in bytes
#define PMA_PLIC_START_DEF          0x40100000 ///< Start of PLIC range (RESERVED)
#define PMA_PLIC_LENGTH_DEF         0x00400000 ///< Length of PLIC range (RESERVED)
#define PMA_RAM_START_DEF           0x80000000 ///< RAM start address
#define PMA_ROM_EXTRASPACE_LENGTH_DEF 0x1000   ///< PMA Extension max length in bytes
#define PMA_ROM_EXTRASPACE_START_DEF  (PMA_ROM_START_DEF + PMA_ROM_LENGTH_DEF - PMA_ROM_EXTRASPACE_LENGTH_DEF) ///< PMA extension start address

#define PMA_BOOTARGS_LENGTH_DEF 0x800 ///< Size reserved on ROM extra space for boot arguments

#define PMA_PAGE_SIZE_LOG2_DEF 12    ///< log<sub>2</sub> of physical memory page size.
#define PMA_WORD_SIZE_DEF      8     ///< Physical memory word size.
#define PMA_MAX_DEF            32    ///< Maximum number of PMAs

#define PMA_MEMORY_DID_DEF 0 ///< Device ID for memory
#define PMA_SHADOW_DID_DEF 1 ///< Device ID for shadow device
#define PMA_DRIVE_DID_DEF  2 ///< Device ID for drive device
#define PMA_CLINT_DID_DEF  3 ///< Device ID for CLINT device
#define PMA_HTIF_DID_DEF   4 ///< Device ID for HTIF device
#define PMA_DHD_DID_DEF    5 ///< Device ID for DHD

// helper for using UINT64_C with defines
#ifndef EXPAND_UINT64_C
#define EXPAND_UINT64_C(a) UINT64_C(a)
#endif

#endif /* end of include guard: PMA_DEFINES_H */
