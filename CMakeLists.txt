cmake_minimum_required(VERSION 3.26)

project(cme)

add_executable(cme
    src/cme_io.h
    src/cme_posix_io.h
    src/cme_system.h
    src/cme_windows_io.h
    src/main.c
)