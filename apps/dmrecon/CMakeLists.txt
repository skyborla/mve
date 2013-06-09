
include_directories(../../libs/)

add_executable(dmrecon dmrecon.cc)

target_link_libraries(dmrecon mve util libdmrecon)

