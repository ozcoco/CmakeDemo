#include "log.hpp"
#include <stdarg.h>
#include <string.h>

void test::test()
{

    ::test::print("safdsgsdfgsdgd");
}

namespace test::log
{

void i(const char *__restrict __format, ...)
{
    va_list args;

    va_start(args, __format);

    char format[] = "^_^ ----> \t";

    strcat(format, __format);

    printf(format, args);
}

void w(const char *__restrict __format, ...)
{
    va_list args;

    va_start(args, __format);

    char format[] = "*_^ ----> \t";

    strcat(format, __format);

    printf(format, args);
}

void e(const char *__restrict __format, ...)
{
    va_list args;

    va_start(args, __format);

    char format[] = "^_9 ----> \t";

    strcat(format, __format);

    printf(format, args);
}

} // namespace test::log
