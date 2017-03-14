#ifndef VIRTUALZOO_RENDERER_H_H
#define VIRTUALZOO_RENDERER_H_H

#include "../Zoo/Zoo.h"

class Renderer {
public:
    virtual void render(const Zoo &zoo, bool useColor = false) = 0;
};

#endif //VIRTUALZOO_RENDERER_H_H
