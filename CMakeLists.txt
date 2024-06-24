# DISTRHO Plugin Framework (DPF)
# Copyright (C) 2021 Jean Pierre Cimalando <jp-dev@inbox.ru>
# Copyright (C) 2021-2022 Filipe Coelho <falktx@falktx.com>
# SPDX-License-Identifier: ISC

cmake_minimum_required(VERSION 3.7)

set(CMAKE_CXX_STANDARD 17)

set(NAME ScaleSpace3D)
project(${NAME})

add_subdirectory(dpf)

dpf_add_plugin(${NAME}
  TARGETS clap lv2 vst2 vst3 jack
  FILES_DSP
      plugins/ScaleSpace3d/ScaleSpace3d.cpp
  FILES_UI
      plugins/ScaleSpace3d/ScaleSpace3dUI.cpp
      plugins/ScaleSpace3d/lib/DPFDearImGuiWidgets/opengl/DearImGui.cpp)

target_include_directories(${NAME} PUBLIC plugins/ScaleSpace3d)
target_include_directories(${NAME} PUBLIC plugins/ScaleSpace3d/lib/DearWidgetsApi)
target_include_directories(${NAME} PUBLIC plugins/ScaleSpace3d/lib/DPFDearImGuiWidgets/generic)
target_include_directories(${NAME} PUBLIC plugins/ScaleSpace3d/lib/DPFDearImGuiWidgets/opengl)
target_include_directories(${NAME} PUBLIC MTS-ESP/Master)
target_include_directories(${NAME} PUBLIC tuning-library/include)
