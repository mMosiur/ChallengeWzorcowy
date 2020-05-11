#pragma once
class IPolecenie {
public:
    virtual void wykonaj() = 0;
    virtual void wycofaj() = 0;
};

