# ScaleSpace 3D

ScaleSpace 3D is a prototype [MTS-ESP](https://github.com/ODDSound/MTS-ESP) master plugin, which allows the dynamic manipulation of the current scale by using an 3D slider to explore the 'scale space' between eight scales.

![ScaleSpace 3D](https://raw.githubusercontent.com/eventual-recluse/ScaleSpace-3D/main/plugins/ScaleSpace3d/ScaleSpace3D_screenshot.png "ScaleSpace")<br/>

# Settings

Each of the eight scales can be set by loading a either a Scala scale file (.scl), keymapping file (.kbm) file, or both. Click "Open SCL File" or "Open KBM File" to choose the file.

The eight corners of the 3D slider represent each of the eight scales, for example, moving the slider to the top left XY corner and moving the Z slider to the bottom left will set the current scale to Scale 1, and moving it to the bottom right XY corner while moving the Z axis to the top right will set the current scale to Scale 8. Different positions within the cube will set the current scale to a different weighted average of the eight scales.

# Notes

To use these plugins, you will need Scala scale files (.scl) and / or keymapping files (.kbm). You will also need to install [libMTS.](https://github.com/ODDSound/MTS-ESP)

There is a large collection of .scl files at the [Scala Scale Archive.](https://huygens-fokker.org/microtonality/scales.html)

A collection of .scl and .kbm files can be found in the [Sevish Tuning Pack.](https://sevish.com/music-resources/#tuning-files)

# Builds
Builds can be found at [Scale-Plugin-Builds.](https://github.com/eventual-recluse/Scale-Plugin-Builds)

# Credits
[DISTRHO Plugin Framework.](https://github.com/DISTRHO/DPF) ISC license.

[MTS-ESP.](https://github.com/ODDSound/MTS-ESP) 0BSD license.

[Surge Synthesizer Tuning Library.](https://github.com/surge-synthesizer/tuning-library) MIT license.

[Dear ImGui.](https://github.com/ocornut/imgui) MIT license.

[DearWidgets](https://github.com/soufianekhiat/DearWidgets) for the 3D slider widget. CC0-1.0 license.

[Bruno Ace Font](https://fonts.google.com/specimen/Bruno+Ace) designed by Astigmatic. [Open Font License.](https://scripts.sil.org/cms/scripts/page.php?site_id=nrsi&id=OFL)

[Bruno Ace SC Font](https://fonts.google.com/specimen/Bruno+Ace+SC) designed by Astigmatic. [Open Font License.](https://scripts.sil.org/cms/scripts/page.php?site_id=nrsi&id=OFL)

[Lekton Font](https://fonts.google.com/specimen/Lekton) designed by ISIA Urbino. [Open Font License.](https://scripts.sil.org/cms/scripts/page.php?site_id=nrsi&id=OFL)

[DPF-Widgets.](https://github.com/DISTRHO/DPF-Widgets) License: see plugins/ScaleSpace/lib/DPFDearImGuiWidgets/LICENSE
