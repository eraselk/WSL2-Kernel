#!/usr/bin/env bash

yes n | make oldconfig KCONFIG_CONFIG=Microsoft/config-wsl

make KCONFIG_CONFIG=Microsoft/config-wsl -j"$(nproc --all)" \
LLVM=1 \
CC=clang \
LD=ld.lld \
AR=llvm-ar \
NM=llvm-nm \
AS=llvm-as \
OBJCOPY=llvm-objcopy \
OBJDUMP=llvm-objdump \
STRIP=llvm-strip \
READELF=llvm-readelf
