#ifndef CME_POSIX_IO_H
#define CME_POSIX_IO_H

#include "cme_system.h"

#if defined(SYSTEM_POSIX)
#include <unistd.h>
#include <termios.h>
#include <sys/ioctl.h>
bool posix_write_console(int output_handle, const char* buffer, int buffer_size);
#endif

#endif