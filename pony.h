#ifndef PONY_H
#define PONY_H

#include <string>

class Pony
{
protected:
    struct Position{
        float x;
        float y;
    };

    int geburtsJahr;
    std::string name;
    Position ort;
public:
    Pony();
    virtual ~Pony();

    //Getter&Setter
    std::string gibName() const;
    int gibGeburtsjahr() const;
    void setzePos(const Position &newOrt);

    //Funktionen
    virtual bool istReitbar(int wtf);
    virtual void zeigeInfo();
};

#endif // PONY_H
