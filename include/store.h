#ifndef STORE_H
#define STORE_H
#include "instrument.h"
#include "guitar.h"
#include "drum.h"
#include <vector>

class Store
{
private:
    std::vector<Instrument*> m_instruments;
public:
    Store();
    void addToContainer();
    void removeFromContainer();
    void showContainerContent() const;
    ~Store();
};

#endif // STORE_H
