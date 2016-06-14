#ifndef DRUM_H
#define DRUM_H
#include "instrument.h"

class Drum : public Instrument
{
public:
    Drum();
    Drum(std::string kindOfInstrument, int ageOfInstrument, int priceOfInstrument);

    virtual void play() const;
    virtual void stop() const;
    virtual void show() const;

    friend std::ostream& operator<<(std::ostream& out, const Drum& drum);
};

#endif // DRUM_H
