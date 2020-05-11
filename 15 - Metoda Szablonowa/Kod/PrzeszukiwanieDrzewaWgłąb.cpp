#include "PrzeszukiwanieDrzewaWg³¹b.h"

Wêze³Drzewa* PrzeszukiwanieDrzewaWg³¹b::weŸ_nastêpny() {
    Wêze³Drzewa* wêze³ = przeszukiwane.back();
    przeszukiwane.pop_back();
    return wêze³;
}
