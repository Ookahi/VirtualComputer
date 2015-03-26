#ifndef BUILDER_H
#define BUILDER_H

#include <iostream>
#include <string>

class Builder {
public:
    Builder();
    ~Builder();
    void selectParts(void);
    void comparePrices(void);
    void createUser(void);
    void login(void);
    void predictPeformance(void);
    void checkPartCompatibility(void);
    void checkGameCompatibility(void);
    void saveComputerToProfile(void);

private:

};

#endif
