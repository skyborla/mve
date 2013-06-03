
# get all source files
FILE( GLOB mve_SOURCE "*.cc" )
# exclude tests
FILE( GLOB mve_TESTS "_test_*.cc" "_gtest_*.cc" )
LIST( REMOVE_ITEM mve_SOURCE ${mve_TESTS} )

# get all headers
FILE( GLOB util_HEADER "*.h" )


include_directories(../)

add_library(mve ${mve_HEADER} ${mve_SOURCE})

target_link_libraries(mve util)

# PNG SUPPORT
FIND_PACKAGE(PNG REQUIRED)
include_directories (./ ${PNG_INCLUDE_DIRS}) 
target_link_libraries(mve ${PNG_LIBRARIES}) 

