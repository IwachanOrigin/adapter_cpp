
project(pattern2 CXX)

set(MAIN_SRC
  main.cpp
  writer.h
  filewriter.h
  filewriter.cpp
  consolewriter.h
  consolewriter.cpp
  htmlwriter.h
  htmlwriter.cpp
  htmlwriterclassadapter.h
  htmlwriterclassadapter.cpp
)

add_executable(
  ${PROJECT_NAME}
  ${MAIN_SRC}
)

