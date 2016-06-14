#include "store.h"

Store::Store()
{

}

void Store::addToContainer()
{
    m_instruments.push_back(new Guitar("Guitar", 8, 299));
    m_instruments.push_back(new Drum("Drum", 3, 199));
    m_instruments.push_back(new Guitar("Fender", 2, 799));
}

void Store::removeFromContainer()
{

}

void Store::showContainerContent() const
{
    for (auto element : m_instruments)
        element->show();
}

Store::~Store()
{
    std::cout << "Destruktor of Store Class is cleaning ;)\n";
    for (auto element : m_instruments)
        delete[] element;
}
