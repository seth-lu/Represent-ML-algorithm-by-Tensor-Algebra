# Represent-ML-algorithm-by-Tensor-Algebra
Machine learning algorithm, Tensor, ITensor   
Represent Machine learning algorithm by Tensor Algebra.
# Installing ITensor (C++ version):

1. Make sure you have an up-to-date C++17 compiler and LAPACK installed. On UNIX systems, use your package manager; on Mac OS install the free Xcode app from the app store; for Windows install [cygwin](https://www.cygwin.com/).
2. Clone the latest version of ITensor:
*git clone https://github.com/ITensor/ITensor itensor*
(Or [download](https://github.com/ITensor/ITensor/archive/v3.zip) the zip file if you do not have git.)
Cloning with git allows you to track changes to ITensor and is the preferred method; for more see our [git quick start](http://itensor.org/docs.cgi?vers=cppv3&page=tutorials/git) guide.
3. Create the options.mk file: *cp options.mk.sample options.mk.* Follow the instructions in this file to customize for your machine.
4. Type make to build ITensor.
5. The compiled library files remain inside the ITensor source folder and are not put anywhere else on your machine. To create a program using ITensor, use the files in the "tutorial/project_template" folder as a starting point for making your own code.
