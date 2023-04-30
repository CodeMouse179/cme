#include "cme_posix_io.h"

#if defined(SYSTEM_POSIX)
bool posix_write_console(int output_handle, const char* buffer, int buffer_size)
{
    int ret = write(STDOUT_FILENO, buffer, buffer_size);
    return ret != -1;
}
#endif