// You will write all your code for this tutorial here!
#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>

int main() {

    bn::core::init();

    bn::backdrop::set_color(bn::color(11, 5, 1));

    int red = 0;
    int green = 0;
    int blue = 0;

    while(true) {

        if (bn::keypad::a_held()) {
            green = (green + 1) % 31;
        }

        if (bn::keypad::b_held()) {
            blue = (blue + 1) % 31;
        }

        if (bn::keypad::down_held()) {
            red = (red + 1) % 31;
        }

        bn::backdrop::set_color(bn::color(red, green, blue));


        bn::core::update();
    }
}