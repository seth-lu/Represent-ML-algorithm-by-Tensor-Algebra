rm -rf build
mkdir build
cd build
cmake -DCMAKE_PREFIX_PATH=/home/user/th/demo/libtorch ..
cmake --build . --config Release
./sub
