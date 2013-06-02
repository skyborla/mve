
SET( SOURCE
mve/bundlefile.cc
mve/camera.cc
mve/depthmap.cc
mve/imageexif.cc
mve/imagefile.cc
mve/imagetools.cc
mve/marching.cc
mve/meshtools.cc
mve/offfile.cc
mve/pbrtfile.cc
mve/plyfile.cc
mve/scene.cc
mve/sift.cc
mve/trianglemesh.cc
mve/vertexinfo.cc
mve/view.cc
mve/volume.cc
util/arguments.cc
util/filesystem.cc
util/system.cc
)

SET( HEADER
math/accum.h
math/algo.h
math/beziercurve.h
math/bspline.h
math/defines.h
math/geometry.h
math/jacobisolver.h
math/line.h
math/matrix.h
math/matrixtools.h
math/octreetools.h
math/permute.h
math/plane.h
math/quaternion.h
math/vector.h
mve/bilateral.h
mve/bundlefile.h
mve/camera.h
mve/defines.h
mve/depthmap.h
mve/image.h
mve/imagebase.h
mve/imagecolor.h
mve/imagedrawing.h
mve/imageexif.h
mve/imagefile.h
mve/imagetools.h
mve/marchingcubes.h
mve/marchingtets.h
mve/meshtools.h
mve/offfile.h
mve/pbrtfile.h
mve/plyfile.h
mve/scene.h
mve/sift.h
mve/trianglemesh.h
mve/vertexinfo.h
mve/view.h
mve/volume.h
util/alignedmemory.h
util/arguments.h
util/atomic.h
util/defines.h
util/endian.h
util/exception.h
util/filesystem.h
util/frametimer.h
util/refptr.h
util/string.h
util/system.h
util/thread.h
util/threadlocks.h
util/timer.h
util/tokenizer.h
)

IF(WIN32)
	# dirent.h replacement for visual c++
	include_directories(${DIRENT_INCLUDE})
	
	SET( HEADER ${HEADER} ${DIRENT_INCLUDE}/dirent.h)
	
ENDIF(WIN32)

# PNG SUPPORT
FIND_PACKAGE(PNG REQUIRED)
include_directories (./ ${PNG_INCLUDE_DIRS}) 
link_directories (${PNG_LIBRARIES}) 

add_library(mve ${HEADER} ${SOURCE})


#C:/workspace-tud/pmpp_math/libs/
