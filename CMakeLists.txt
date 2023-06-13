cmake_minimum_required(VERSION 3.25)
project(zzenc C)

set(CMAKE_C_STANDARD 11)

add_library(zzenc SHARED zzenc.c)
