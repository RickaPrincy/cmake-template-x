#! /bin/bash
cmake -DINSTALL_GTEST=OFF -S . -B build; cd build; make
