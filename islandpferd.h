#ifndef ISLANDPFERD_H
#define ISLANDPFERD_H

#include "pony.h"

class Islandpferd : public Pony
{
    bool ekzemer;
public:
    Islandpferd();

    //Getter & Setter
    bool hatEkzem();

    //Funktionen
    bool istReitbar(int wtf) override;
    void zeigeInfo() override;
};

#endif // ISLANDPFERD_H
