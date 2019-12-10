add_library(source fakultet.c Humaniora.c Naturvidenskab.c Samfund.c Sundhed.c Teknisk.c utility.c fakultet.h Humaniora.h Naturvidenskab.h Samfund.h Sundhed.h Teknisk.h utility.h)

target_include_directories(source PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/study/src")
