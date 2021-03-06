/**
 * Copyright (c) 2010-2012 Los Alamos National Security, LLC.
 *                         All rights reserved.
 *
 * This program was prepared by Los Alamos National Security, LLC at Los Alamos
 * National Laboratory (LANL) under contract No. DE-AC52-06NA25396 with the U.S.
 * Department of Energy (DOE). All rights in the program are reserved by the DOE
 * and Los Alamos National Security, LLC. Permission is granted to the public to
 * copy and use this software without charge, provided that this Notice and any
 * statement of authorship are reproduced on all copies. Neither the U.S.
 * Government nor LANS makes any warranty, express or implied, or assumes any
 * liability or responsibility for the use of this software.
 */

#ifndef MMU_UTIL_INCLUDED
#define MMU_UTIL_INCLUDED 

#include "mmu_constants.h"

const char *
mmu_util_rc2str(int rc);

int
mmu_util_str_to_ull(const char *str,
                    unsigned long long int *val_if_valid);

#endif /* ifndef MMU_UTIL_INCLUDED */
