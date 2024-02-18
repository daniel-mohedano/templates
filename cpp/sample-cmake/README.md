# CMake Project Example

Very simple CMake project example.

## Usage

```sh
$ mkdir build && cd build
$ cmake .. -DCMAKE_BUILD_TYPE=Release
$ cmake --build .
```

Don't forget to specify the build type on the second commands. By default the release version is created, but it is good practice to always specify it. If you want to change the build type, run the second command again (the build type is cached by CMake).
