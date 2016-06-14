#include "worker.h"

Worker::Worker()
{

}

void Worker::start()
{
    Instrument *instrument;
    Guitar guitar;
    Drum drum;
    Store store;

    instrument = &guitar;
    instrument->play();
    instrument->stop();

    instrument = &drum;
    instrument->play();
    instrument->stop();

    std::cout << "--------------------\n\n";
    std::cout << "Adding to container..\n\n";
    store.addToContainer();
    std::cout << "Added..\n";
    std::cout << "Trying to show content of vector Container\n\n";
    store.showContainerContent();
}
