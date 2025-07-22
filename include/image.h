#pragma once

#include <cstdint>
#include <vector>
#include <iostream>

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <GL/gl.h>
#include <lz4.h>
#include <lodepng.h>

#include "buffer.h"
#include "hmg.h"

namespace Image {
    struct Texture {
        uint32_t Id;
        uint32_t Width;
        uint32_t Height;
    };

    Texture CreateTexture(const std::vector<uint8_t> &imageData);
    Texture CreateTextureFromHmg(const std::vector<uint8_t> &hmgData);
    Texture CreateTextureFromPng(const std::vector<uint8_t> &pngData);
}