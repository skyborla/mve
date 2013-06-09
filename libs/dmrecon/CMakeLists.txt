
# get all source files
FILE( GLOB libdmrecon_SOURCE "*.cpp" )
# exclude tests
#FILE( GLOB libdmrecon_TESTS "_test_*.cc" "_gtest_*.cc" )
#LIST( REMOVE_ITEM libdmrecon_SOURCE  ${libdmrecon_TESTS} )

# get all headers
FILE( GLOB libdmrecon_HEADER "*.h" )


include_directories(../)

add_library(libdmrecon ${libdmrecon_HEADER} ${libdmrecon_SOURCE})

target_link_libraries(libdmrecon mve util)
