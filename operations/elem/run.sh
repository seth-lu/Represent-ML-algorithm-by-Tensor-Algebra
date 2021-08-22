rm -rf build
mkdir build
cd build
cmake  -DCMAKE_BUILD_TYPE=Debug -DCMAKE_C_COMPILER=/bwfefs/opt/x86_64/gcc/7.2.0/bin/gcc  -DCMAKE_CXX_COMPILER=/bwfefs/opt/x86_64/gcc/7.2.0/bin/g++ -DCMAKE_PREFIX_PATH=/home/tanghao/py/pytorch-install ..
make
./add ../data.mtx ../data.mtx
#-DCMAKE_C_COMPILER=/bwfefs/opt/modulefiles/hokusai/compilers
#-DCMAKE_CXX_COMPILER=/bwfefs/opt/modulefiles/hokusai/compilers