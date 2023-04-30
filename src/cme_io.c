#include "cme_io.h"

bool print(const char* str)
{
#if defined(SYSTEM_WINDOWS)
    return true;
#endif
#if defined(SYSTEM_POSIX)
    return true;
#endif
    return false;
}