# set itensor configuration
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DNDEBUG") 

# if you want to develop the neural network c++ code using caffe
# add include/lib/links for tensorflow here

include_directories("ml_cafe/cnn.h") # add header directories here
include_directories("ml_cafe/conv_layer.h") # add header directories here
include_directories("ml_cafe/dropout_layer.h") # add header directories here
include_directories("ml_cafe/fc_layer.h") # add header directories here
include_directories("ml_cafe/gradient.h") # add header directories here
include_directories("ml_cafe/layer_t.h") # add header directories here
include_directories("ml_cafe/optimization_method.h") # add header directories here
include_directories("ml_cafe/point.h") # add header directories here
include_directories("ml_cafe/pool_layer_t.h") # add header directories here
include_directories("ml_cafe/relu_layer.h") # add header directories here
include_directories("ml_cafe/tensor.h") # add header directories here
include_directories("ml_cafe/types.h") # add header directories here



link_directories("XXXX") # add lib directories here

link_libraries("-litensor") # add lib flag here

#add subdirectory
add_subdirectory(networks)
