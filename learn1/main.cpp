#include <iostream>

std::string greet(std::string* name);
float sum(float x, float y);

int main() {
    std::string name = "brunacido";

    std::cout << "Hello World, mijo" << std::endl;
    std::cout << greet(&name) << std::endl;
    std::cout << name << std::endl;

    float x = 0;
    float y = 0;

    std::cout << "Set x value" << std::endl;
    std::cin >> x;
    std::cout << "Set y value" << std::endl;
    std::cin >> y;

    std::cout << sum(x, y);

    return 0;
}

std::string greet(std::string* name) {
    std::string temp = "Victor Reznov";

    *name = temp;
    temp = "Elver";

    return "que pedorro " + *name;
}

float sum(float x, float y) {
    return x + y;
}
