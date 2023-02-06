#cmake_minimum_required(VERSION 3.12)

# Pull in SDK (must be before project)
#include(/home/ruslanas/git/pico-sdk/pico_sdk_import.cmake)

cmake_minimum_required(VERSION 3.13)

# initialize the SDK based on PICO_SDK_PATH
# note: this must happen before project()
# include(pico_sdk_import.cmake)
include(/home/ruslanas/git/pico-sdk/pico_sdk_init.cmake)

project(blink2)

# initialize the Raspberry Pi Pico SDK
pico_sdk_init()

# rest of your project

add_executable(blink2
    blink2.c
)

# Add pico_stdlib library which aggregates commonly used features
target_link_libraries(blink2 pico_stdlib)

# create map/bin/hex/uf2 file in addition to ELF.
pico_add_extra_outputs(blink2)
