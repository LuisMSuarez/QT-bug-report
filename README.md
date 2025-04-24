Repository containing code for bug report I raised on QT Creator: [QTCREATORBUG-32768](https://bugreports.qt.io/browse/QTCREATORBUG-32768)

Note: in a Windows box, the tools are typically found in: c:\Qt\Tools\CMake_64\bin

- Configure build:
cmake -S . -B build/Debug -DCMAKE_BUILD_TYPE=Debug

- Build: 
cmake --build build/Debug --config Debug 

- Test:
cd build\Debug
ctest -V -O test.log --timeout 5 -C Debug
