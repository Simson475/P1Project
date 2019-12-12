add_library(source Faculty.c Study.c Utility.c Faculty.h Study.h Utility.h)

target_include_directories(source PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/study/src")
