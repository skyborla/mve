
add_subdirectory( util )
add_subdirectory( mve )

# PNG SUPPORT
FIND_PACKAGE(PNG REQUIRED)
include_directories (./ ${PNG_INCLUDE_DIRS}) 
link_directories (${PNG_LIBRARIES}) 

