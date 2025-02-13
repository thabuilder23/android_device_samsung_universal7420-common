/*
 * Copyright (C) 2017 The Haxynox Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "CameraParameters.h"
#include <string>
#include <ui/GraphicBuffer.h>

namespace android
{
	
    const char CameraParameters::PIXEL_FORMAT_YUV420SP_NV21[] = "nv21"; \
    const char CameraParameters::EFFECT_CARTOONIZE[] = "cartoonize"; \
    const char CameraParameters::EFFECT_POINT_RED_YELLOW[] = "point-red-yellow"; \
    const char CameraParameters::EFFECT_POINT_GREEN[] = "point-green"; \
    const char CameraParameters::EFFECT_POINT_BLUE[] = "point-blue"; \
    const char CameraParameters::EFFECT_VINTAGE_COLD[] = "vintage-cold"; \
    const char CameraParameters::EFFECT_VINTAGE_WARM[] = "vintage-warm"; \
    const char CameraParameters::EFFECT_WASHED[] = "washed"; \
    const char CameraParameters::ISO_AUTO[] = "auto"; \
    const char CameraParameters::ISO_NIGHT[] = "night"; \
    const char CameraParameters::ISO_SPORTS[] = "sports"; \
    const char CameraParameters::ISO_6400[] = "6400"; \
    const char CameraParameters::ISO_3200[] = "3200"; \
    const char CameraParameters::ISO_1600[] = "1600"; \
    const char CameraParameters::ISO_800[] = "800"; \
    const char CameraParameters::ISO_400[] = "400"; \
    const char CameraParameters::ISO_200[] = "200"; \
    const char CameraParameters::ISO_100[] = "100"; \
    const char CameraParameters::ISO_80[] = "80"; \
    const char CameraParameters::ISO_50[] = "50"; \
    const char CameraParameters::KEY_SUPPORTED_METERING_MODE[] = "metering-values"; \
    const char CameraParameters::METERING_CENTER[] = "center"; \
    const char CameraParameters::METERING_MATRIX[] = "matrix"; \
    const char CameraParameters::METERING_SPOT[] = "spot"; \
    const char CameraParameters::METERING_OFF[] = "off"; \
    const char CameraParameters::KEY_DYNAMIC_RANGE_CONTROL[] = "dynamic-range-control"; \
    const char CameraParameters::KEY_SUPPORTED_PHASE_AF[] = "phase-af-values"; \
    const char CameraParameters::KEY_PHASE_AF[] = "phase-af"; \
    const char CameraParameters::KEY_SUPPORTED_RT_HDR[] = "rt-hdr-values"; \
    const char CameraParameters::KEY_RT_HDR[] = "rt-hdr";
};

/* status_t android::Fence::wait(int timeout); */
extern "C" int _ZN7android5Fence4waitEi(int timeout);

/* status_t android::Fence::wait(unsigned int timeout); */
extern "C" int _ZN7android5Fence4waitEj(unsigned int timeout)
{
    return _ZN7android5Fence4waitEi(static_cast<int>(timeout));
}

extern "C" void _ZN7android5FenceD1Ev() { }

extern "C" void _ZN7android13GraphicBufferC1EjjijjjP13native_handleb(
        const native_handle_t* handle,
        android::GraphicBuffer::HandleWrapMethod method,
        uint32_t width,
        uint32_t height,
        int format,
        uint32_t layerCount,
        uint64_t usage,
        uint32_t stride);

extern "C" void _ZN7android13GraphicBufferC1EjjijjP13native_handleb(
        uint32_t inWidth,
        uint32_t inHeight,
        int inFormat,
        uint32_t inUsage,
        uint32_t inStride,
        native_handle_t* inHandle,
        bool keepOwnership)
{
    android::GraphicBuffer::HandleWrapMethod inMethod =
        (keepOwnership ? android::GraphicBuffer::TAKE_HANDLE : android::GraphicBuffer::WRAP_HANDLE);
    _ZN7android13GraphicBufferC1EjjijjjP13native_handleb(inHandle, inMethod, inWidth, inHeight,
        inFormat, static_cast<uint32_t>(1), static_cast<uint64_t>(inUsage), inStride);
}

