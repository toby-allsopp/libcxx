#!/usr/bin/env bash

WS=$HOME/workspace

$WS/build-clang/bin/clang-tidy -p $WS/build-libcxx/ -checks=*-,libcxx-reserved-name-check "-header-filter=$WS/libcxx/include/*" $WS/libcxx/src/new.cpp $WS/libcxx/src/random.cpp
