
# get all source files
FILE( GLOB util_SOURCE "*.cc" )
# exclude tests
FILE( GLOB util_TESTS "_gtest_*.cc" )
LIST( REMOVE_ITEM util_SOURCE ${util_TESTS} )

# get all headers (also the math headers)
FILE( GLOB util_HEADER "*.h" "../math/*.h" )


IF(WIN32)
	# dirent.h replacement for visual c++
	include_directories(${DIRENT_INCLUDE})
	
	SET( util_HEADER ${util_HEADER} ${DIRENT_INCLUDE}/dirent.h)
ENDIF(WIN32)


include_directories(../)

add_library(util ${util_HEADER} ${util_SOURCE})

