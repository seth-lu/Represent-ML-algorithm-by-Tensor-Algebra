# set itensor configuration
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DNDEBUG") 

# if you want to develop the neural network c++ code using tensorflow
# add include/lib/links for tensorflow here

find_package(TensorFlow REQUIRED)

include_directories(/usr/local/include) # add header directories here

link_directories(/usr/local/lib) # add lib directories here

link_libraries(/usr/local/lib/libtensorflow.so) # add lib flag here
link_libraries(/usr/local/lib/libtensorflow.so2)
link_libraries(/usr/local/lib/libtensorflow.so.2.4.0)
link_libraries(/usr/local/lib/libtensorflow_framework.so)
link_libraries(/usr/local/lib/libtensorflow_framework.so2)
link_libraries(/usr/local/lib/libtensorflow_framework.so.2.4.0)

#add subdirectory
add_subdirectory(networks)
