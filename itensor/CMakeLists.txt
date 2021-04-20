# set itensor configuration
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DNDEBUG") 

include_directories("XXXX") # add header directories here

link_directories("XXXX") # add lib directories here

link_libraries("-litensor") # add lib flag here

#add subdirectory
add_subdirectory(MTTKRP)
add_subdirectory(elementwise)
add_subdirectory(khatri_rao)
add_subdirectory(kronecker)
add_subdirectory(scalar)
add_subdirectory(mul)
