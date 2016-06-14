#ifndef INSTRUMENT_H
#define INSTRUMENT_H
#include <string>
#include <iostream>

class Instrument
{
protected:
    std::string m_kindOfInstrument;
    int m_ageOfInstrument;
    int m_priceOfInstrument;

public:
    Instrument();
    Instrument(std::string kindOfInstrument, int ageOfInstrument, int priceOfInstrument);

    virtual void play() const = 0;
    virtual void stop() const = 0;
    virtual void show() const = 0;
};

#endif // INSTRUMENT_H
