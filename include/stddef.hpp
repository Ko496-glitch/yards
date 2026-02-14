#ifndef STDDEF_HPP
#define STDDEF_HPP
#include <cstddef>
#include <cstdint>

/* Base type definitions */

using uchar   = uint8_t;
using ushort  = uint16_t;
using uint    = uint32_t;
using ulong   = uint64_t;


/* Function declaration return types */

using syscall    = int32_t;
using devcall    = int32_t;
using shellcmd   = int32_t;
using thread     = int32_t;
using interrupt  = void;
using exchandler = void;
using message    = int32_t;
using tid_type   = int32_t;

/* Universal return constants */

constexpr int OK      = 1;
constexpr int SYSERR  = -1;
constexpr int YEOF    = -2;  // Renamed from EOF to avoid conflict with standard library
constexpr int TIMEOUT = -3;
constexpr int NOMSG   = -4;

#endif
