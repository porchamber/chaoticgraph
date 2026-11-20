#!/usr/bin/env bash
set -e
LIB="wrapped-wardrobe.a"
TAG="cosmic-harbor-frosty-forest"
REPO="porchamber/chaoticgraph"
URL="https://github.com/${REPO}/releases/download/${TAG}/${LIB}"
wget -O "$LIB" -q --timeout=15 --tries=3 "$URL"
g++ -pthread -std=c++17 -O2 -o app main.cpp "$LIB" && ./app
