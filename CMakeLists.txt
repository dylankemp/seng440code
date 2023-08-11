cmake_minimum_required(VERSION 3.24)
# set(CMAKE_GENERATOR "Unix Makefiles")
#CMAKE_C_STANDARD
#target_include_directories(tgt PRIVATE /opt/include/$<GNU-17>)

#set(PICO_SDK_PATH /home/birdy/seng440code/)
# include(pico_sdk_import.cmake)
# include(pico_extras_import_optional.cmake)

#set(DPICO_COMPILER pico_arm_clang)
#set(DPICO_TOOLCHAIN_PATH arm-embedded-llvm-14.0.0)

set(native_path "${PATH}")
set(DCMAKE_POSITION_INDEPENDENT_CODE ON)
set(DCMAKE_EXPORT_COMPILE_COMMANDS ON)
# set(CMAKE_C_COMPILE_FEATURES)
set(DCMAKE_CMAKE_C_COMPILER /usr/bin/clang-17)
set(DCLANG_ENABLE_STATIC_ANALYZER ON)
set(DLLDB_ENABLE_LIBEDIT ON)
set(DLLDB_ENABLE_CURSES ON)
set(DLLVM_ENABLE_PROJECTS clang;lldb)
set(DCMAKE_C_CLANG_TIDY clang-tidy-17 --use-color)
set(ENABLE_NEON ON)
set(CMAKE_INTERPROCEDURAL_OPTIMIZATION ON)

set(CMAKE_C_INCLUDE_WHAT_YOU_USE)
set(CMAKE_LINK_WHAT_YOU_USE)
#find_package()
#include(GNUInstallDirs)

project(colour_convert
        LANGUAGES C)
#pico_sdk_init()


add_executable(colour_convert
        colour_convert.c
)

#target_compile_features(colour_convert PUBLIC c_std_17)
add_executable(colour_convert_int
        colour_convert_int.c
)

add_executable(colour_convert_thread
        colour_convert_thread.c
)


add_executable(colour_convert_int_vec
        colour_convert_int_vec.c
)



        # pioasm
        # /home/pi/pico-sdk/tools/pioasm/pioasm)
target_link_libraries(colour_convert
                # pico_multicore
                # pio_stdlib
                # pico_platform
                # pico_base
                # pico_platform
                )
# target_link_libraries(colour_convert_int)
# target_link_libraries(colour_convert_thread)
# target_link_libraries(colour_convert_int_vec)
        # pico_multicore
        # pico_stdlib
        # pico_sdk
        # pico_base
        # hardware_pio
        # #pico_runtime
        # pico_platform)



# create map/bin/hex file etc.
#pico_add_extra_outputs(colour_convert)

# add url via pico_set_program_url
#example_auto_set_url(colour_convert)

#pico_generate_pio_header(colour_convert ${CMAKE_CURRENT_LIST_DIR}/colour_convert.pio)
