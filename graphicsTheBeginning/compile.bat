@echo off
set GLSLC="C:\VulkanSDK\1.3.296.0\Bin\glslc.exe"

%GLSLC% shaders\simp_shader.vert -o shaders\simp_shader.vert.spv
%GLSLC% shaders\simp_shader.frag -o shaders\simp_shader.frag.spv

echo Shaders compiled successfully.
pause
