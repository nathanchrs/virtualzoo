#ifndef ANIMALIA_H
#define ANIMALIA_H
#include <string>

class Animalia {
public:
    Animalia();
    Animalia(const Animalia&);
    virtual ~Animalia();
    Animalia& operator=(const Animalia&);
protected :
    std::string name;
    std::string reproduction;
    std::string penutupbadan;
};

#endif //ANIMALIA_H
