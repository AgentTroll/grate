# Grate

Basically a toy project using an arithmetic library to demonstrate C/C++ mixing.

Divided into two projects: `c_grate` for C implementation and `cpp_grate` for "pure" C++ implementation.

# Building

You may download the executables from the releases page, or build it yourself.

``` shell
git clone https://github.com/AgentTroll/grate.git
cd grate
mkdir build
cd build
cmake ..
make
```

# Demo

``` shell
Agents-MBP:build admin$ ./c_grate
3 + 5 = Executed C: 8
3 - 5 = Executed C: -2
3 * 5 = Executed C: 15
354 / 3 = Executed C: 118
Agents-MBP:build admin$ ./cpp_grate
3 + 5 = Executed C++: 8
3 - 5 = Executed C++: -2
3 * 5 = Executed C++: 15
354 / 3 = Executed C++: 118
```

# Credits

Built with [CLion](https://www.jetbrains.com/clion/)
