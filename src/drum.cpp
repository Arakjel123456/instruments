#include "drum.h"

Drum::Drum()
{

}

Drum::Drum(std::string kindOfInstrument, int ageOfInstrument, int priceOfInstrument)
    : Instrument (kindOfInstrument, ageOfInstrument, priceOfInstrument)
{

}

void Drum::play() const
{
    std::cout << "Drum's playin badum\n";
}

void Drum::stop() const
{
    std::cout << "Drum has just stopped...tsss\n";
}

void Drum::show() const
{
    std::cout << "Kind: " << m_kindOfInstrument
              << " Age: " << m_ageOfInstrument
              << " Price: " << m_priceOfInstrument << "\n";
}


std::ostream& operator<<(std::ostream& out, const Drum& drum)
{
    out << drum.m_kindOfInstrument << ", " << drum.m_ageOfInstrument
        << ", " << drum.m_priceOfInstrument << "\n";
    return out;
}
