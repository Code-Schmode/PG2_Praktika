#ifndef SHETLANDPONY_H
#define SHETLANDPONY_H

#include "pony.h"

class Shetlandpony : public Pony
{
    bool kinderlieb;
public:
    Shetlandpony();

    //Getter & Setter
    bool istKinderlieb();

    //Funktionen
    bool istReitbar(int wtf) override;
    void zeigeInfo() override;
};

#endif // SHETLANDPONY_H
