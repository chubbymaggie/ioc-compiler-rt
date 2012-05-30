//===-- mini_libc.cc --------------------------------------------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file is shared between AddressSanitizer and ThreadSanitizer
// run-time libraries. See mini_libc.h for details.
//===----------------------------------------------------------------------===//
#include "mini_libc.h"

namespace __sanitizer {

void MiniLibcStub() {
}

}  // namespace __sanitizer