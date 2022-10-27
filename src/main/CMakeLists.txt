
set(MAIN_SRC
  main.cpp
  writer.h
  filewriter.h
  filewriter.cpp
  consolewriter.h
  consolewriter.cpp
)

add_executable(
  ${PROJECT_NAME}
  ${MAIN_SRC}
)

