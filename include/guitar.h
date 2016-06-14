#ifndef GUITAR_H
#define GUITAR_H
#include "instrument.h"

class Guitar : public Instrument
{
private:
	std::string yoooJenkinsXD;
	std::string sloJenkinsPlugin;
public:
    Guitar();
    Guitar(std::string kindOfInstrument, int ageOfInstrument, int priceOfInstrument);

    virtual void play() const;
    virtual void stop() const;
    virtual void show() const;

    friend std::ostream& operator<<(std::ostream& out, const Guitar& guitar);
};

#endif // GUITAR_H
