# set itensor configuration
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DNDEBUG") 

# if you want to develop the neural network c++ code using caffe
# add include/lib/links for tensorflow here

include_directories("XXXX") # add header directories here

link_directories("XXXX") # add lib directories here

link_libraries("-litensor") # add lib flag here

#add subdirectory
add_subdirectory(networks)
