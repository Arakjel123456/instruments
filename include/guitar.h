#ifndef GUITAR_H
#define GUITAR_H
#include "instrument.h"

class Guitar : public Instrument
{
public:
    Guitar();
    Guitar(std::string kindOfInstrument, int ageOfInstrument, int priceOfInstrument);

    virtual void play() const;
    virtual void stop() const;
    virtual void show() const;

    friend std::ostream& operator<<(std::ostream& out, const Guitar& guitar);
};

#endif // GUITAR_H
