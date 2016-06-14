#include "guitar.h"
#include <vector> // just checking if jenkis will built it ;)

Guitar::Guitar()
{

}

Guitar::Guitar(std::string kindOfInstrument, int ageOfInstrument, int priceOfInstrument)
    : Instrument (kindOfInstrument, ageOfInstrument, priceOfInstrument)
{

}

void Guitar::play() const
{
    std::cout << "Guitar's playin...\n";
}

void Guitar::stop() const
{
    std::cout << "Guitar has just stopped.\n";
}

void Guitar::show() const
{
    std::cout << "Kind: " << m_kindOfInstrument
              << " Age: " << m_ageOfInstrument
              << " Price: " << m_priceOfInstrument << "\n";
}


std::ostream& operator<<(std::ostream& out, const Guitar& guitar)
{
    out << guitar.m_kindOfInstrument << ", " << guitar.m_ageOfInstrument
        << ", " << guitar.m_priceOfInstrument << "\n";
    return out;
}
