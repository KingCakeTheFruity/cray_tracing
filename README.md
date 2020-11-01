# CPP RAY TRACING
<img src="https://github.com/KingCakeTheFruity/cray_tracing/blob/master/showcase/showcase.jpg" alt="alt text" width="600" height="600">
(check out more pictures below)

### How to use
1. Build ray_tracer by calling ```gcc main.c -lm``` or any other compiler
2. Place resulting binary in the same folder with 'scene.txt' file (check examples and readme below)
3. Run binary file
4. Find a way to open .ppm files
5. Have fun experementing with different scenes and models

### Scenes examples
1. open https://github.com/MaximusTG/cray_tracing/tree/master/codeblocks_project/bin/Debug
2. find some examples there
3. edit scene.txt
4. add some models!

### Particular scene explanation
```

--- must be in scene! ---

width 50 height 50
screen_distance 100
resolution_coef 10

depth 5

cam_pos (-40, 20, 0)
cam_dir (1, -0.1, 0)

-------------------------

// Vectors must be writen with brackets and comas! //

// Light point position color light_power //

Light point (240, 130, -20) (1, 1, 1) 800000

// Properties are (color, reflective, refractive, refractive_ceof, type, scale, rotation, is_constant_color) //

// Primitive Sphere center radius Propetriest //

Primitive Sphere (300, 100, -100) 50 ((0.2, 0.5, 0.7) 0.5 0 0 0 0 (0, 0, 0) 0)

Primitive Plane  point normal Properties


Primitive Plane  (0, -20, 0) (0, 1, 0) ((0.75, 0.35, 0.15) 0 0 1.3 0 0 (0, 0, 0) 0)

// Model model.txt center scale Properties //

Model model.txt (200, 0, -10) 100 ((0.2, 0.8, 0.2) 0 0 1.3 0 0 (0, 0, 0) 0)
```
# Some results
(More in showcase folder)

<img src="https://github.com/KingCakeTheFruity/cray_tracing/blob/master/showcase/green_lens.png" alt="alt text" width="600" height="600">
<img src="https://github.com/KingCakeTheFruity/cray_tracing/blob/master/showcase/crystal_1.jpg" alt="alt text" width="600" height="600">
<img src="https://github.com/KingCakeTheFruity/cray_tracing/blob/master/showcase/ship.jpg" alt="alt text" width="600" height="600">
<img src="https://github.com/KingCakeTheFruity/cray_tracing/blob/master/showcase/ufo.jpg" alt="alt text" width="600" height="600">
