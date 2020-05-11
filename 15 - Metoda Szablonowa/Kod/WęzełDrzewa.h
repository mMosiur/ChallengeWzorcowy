#pragma once
struct Wêze³Drzewa {
    Wêze³Drzewa* lewy_syn;
    Wêze³Drzewa* prawy_brat;
    int wartoœæ;

    Wêze³Drzewa(int wartoœæ) : wartoœæ(wartoœæ), lewy_syn(nullptr), prawy_brat(nullptr) {}
};

