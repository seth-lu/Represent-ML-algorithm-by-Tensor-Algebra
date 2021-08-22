rm -rf build
mkdir build
cd build
cmake -DCMAKE_PREFIX_PATH=/home/ps/th/py-1/pytorch-install ..
cmake --build . --config Release
./mul
