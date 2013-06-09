
include_directories(../../libs/)

add_executable(scene2pset scene2pset.cc)

target_link_libraries(scene2pset mve util)

