#pragma once
struct W�ze�Drzewa {
    W�ze�Drzewa* lewy_syn;
    W�ze�Drzewa* prawy_brat;
    int warto��;

    W�ze�Drzewa(int warto��) : warto��(warto��), lewy_syn(nullptr), prawy_brat(nullptr) {}
};

