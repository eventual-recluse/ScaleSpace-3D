#ifndef ScaleSpace3d_CONTROLS_HPP
#define ScaleSpace3d_CONTROLS_HPP

#include <array>

template <class T>
T limit (const T x, const T min, const T max)
{
    return (x < min ? min : (x > max ? max : x));
}

enum Parameters {
    kParameterX      = 0,
    kParameterY      = 1,
    kParameterZ      = 2,
    kParameterCount  = 3
};

enum States {
    kStateFileSCL1 = 0,
    kStateFileSCL2 = 1,
    kStateFileSCL3 = 2,
    kStateFileSCL4 = 3,
    kStateFileSCL5 = 4,
    kStateFileSCL6 = 5,
    kStateFileSCL7 = 6,
    kStateFileSCL8 = 7,
    kStateFileKBM1 = 8,
    kStateFileKBM2 = 9,
    kStateFileKBM3 = 10,
    kStateFileKBM4 = 11,
    kStateFileKBM5 = 12,
    kStateFileKBM6 = 13,
    kStateFileKBM7 = 14,
    kStateFileKBM8 = 15,
    kStateFileSavePath = 16,
    kStateCount    = 17
};

static const std::array<std::pair<float, float>, kParameterCount> controlLimits =
{{
    {-1.0f, 1.0f},   // kParameterX
	{-1.0f, 1.0f},   // kParameterY
	{-1.0f, 1.0f}   // kParameterZ
}};

static const float ParameterDefaults[kParameterCount] = {
	0.0f, //kParameterX
	0.0f, //kParameterX,
	0.0f, //kParameterZ,
};


#endif
