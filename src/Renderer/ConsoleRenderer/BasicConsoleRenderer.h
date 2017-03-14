#ifndef VIRTUALZOO_BASICCONSOLERENDERER_H
#define VIRTUALZOO_BASICCONSOLERENDERER_H

#include "../../Zoo/Zoo.h"
#include "../Renderer.h"

class BasicConsoleRenderer : public Renderer {
public:

    void render(const Zoo &zoo, bool useColor = false);

    void displayMenu(bool useColor = false);
};

#endif //VIRTUALZOO_BASICCONSOLERENDERER_H
