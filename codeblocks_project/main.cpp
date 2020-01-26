#include <string>
#include "ray_tracer.hpp"

int main() {
    std::string filename = "scene.txt";
    Scene scene(filename);

    auto image = scene.render();
    save_image(image, "image.ppm");
    return 0;
}
