#include "instrument.h"

Instrument::Instrument()
{

}

Instrument::Instrument(std::string kindOfInstrument, int ageOfInstrument, int priceOfInstrument)
    : m_kindOfInstrument (kindOfInstrument)
    , m_ageOfInstrument (ageOfInstrument)
    , m_priceOfInstrument (priceOfInstrument)
{

}
