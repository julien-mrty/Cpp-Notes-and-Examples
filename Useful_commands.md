# Compile

g++ -Werror -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion -pedantic-errors -std=c++23 ....cpp -o ....o

## Debug flags
- -g/--debug: Produce debugging information in the operating system’s native format
- -ggdb: Produce debugging information for use by GDB. This means to use the most expressive format available, including GDB extensions if at all possible.
- -O2 -DNDEBUG: debug for relaese build

## Optimization options:
- -O0 is the recommended optimization level for debug builds, as it disables optimization. This is the default setting.
- -O2 is the recommended optimization level for release builds, as it applies optimizations that should be beneficial for all programs.
- -O3 adds additional optimizations that may or may not perform better than -O2 depending on the specific program. Once your program is written, you can try compiling your release build with -O3 instead of -O2 and measure to see which is faster.

## Compiler extesion
- -pedantic-errors: disable compiler extesions

## Compiler stricness
- -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion: Turn the warnings level up.
- -Werror: Treats warnings as errors
