#!/usr/bin/env bash
zig c++ -x c++ -std=c++20 -fsyntax-only "$1"
