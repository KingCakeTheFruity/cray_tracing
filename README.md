# cray_tracing
(I'm really sorry for this readme)

Instruction:
1. Download .exe file from https://github.com/MaximusTG/cray_tracing/tree/master/codeblocks_project/bin/Debug
2. Place him in the same folder with 'scene.txt' file (check examples and readme below)
3. Run .exe file
4. Find a way to open .ppm files
5. Have fun experementing with different scenes and models

How to use:
1. open https://github.com/MaximusTG/cray_tracing/tree/master/codeblocks_project/bin/Debug
1.1 find some examples there
2. edit scene.txt
2.1 add some models!

--- must be in scene! ---
width 50 height 50
screen_distance 100
resolution_coef 10

depth 5

cam_pos (-40, 20, 0)
cam_dir (1, -0.1, 0)

-------------------------

// Vectors must be writen with brackets and comas! //

Light point position color light_power

Light point (240, 130, -20) (1, 1, 1) 800000

// Properties are (color, reflective, refractive, refractive_ceof, type, scale, rotation, is_constant_color) //

Primitive Sphere center radius Propetriest

Primitive Sphere (300, 100, -100) 50 ((0.2, 0.5, 0.7) 0.5 0 0 0 0 (0, 0, 0) 0)

Primitive Plane  point normal Properties

Primitive Plane  (0, -20, 0) (0, 1, 0) ((0.75, 0.35, 0.15) 0 0 1.3 0 0 (0, 0, 0) 0)

Model model.txt center scale Properties

Model model.txt (200, 0, -10) 100 ((0.2, 0.8, 0.2) 0 0 1.3 0 0 (0, 0, 0) 0)
