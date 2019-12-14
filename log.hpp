#pragma once

namespace test
{

void test();

inline namespace log
{

#ifdef android

#include <android/log.h>
#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, "^_^", __VA_ARGS__))
#define LOGW(...) ((void)__android_log_print(ANDROID_LOG_WARN, "^_*", __VA_ARGS__))
#define LOGE(...) ((void)__android_log_print(ANDROID_LOG_ERROR, "*_*", __VA_ARGS__))

#else

#include <stdio.h>

#define LOGI(...) ((void)printf(__VA_ARGS__))
#define LOGW(...) ((void)printf(__VA_ARGS__))
#define LOGE(...) ((void)printf(__VA_ARGS__))

#endif

#ifdef __cplusplus

#include <iostream>

inline void print()
{
}

template <typename Tp, typename... Types>
inline void print(const Tp &tp, const Types... types)
{
    std::cout << tp << std::endl;

    print(types...);
}

#endif

void i(const char *__restrict __format, ...);

void w(const char *__restrict __format, ...);

void e(const char *__restrict __format, ...);

} // namespace log

} // namespace test