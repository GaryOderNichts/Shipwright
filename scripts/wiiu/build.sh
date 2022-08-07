#!/bin/bash

cmake --no-warn-unused-cli -H. -Bbuild-linux -GNinja
cmake --build build-linux --target ExtractAssets

cmake -H. -Bbuild-wiiu -GNinja -DCMAKE_TOOLCHAIN_FILE=/opt/devkitpro/cmake/WiiU.cmake # -DCMAKE_BUILD_TYPE:STRING=Release
cmake --build build-wiiu --target soh
