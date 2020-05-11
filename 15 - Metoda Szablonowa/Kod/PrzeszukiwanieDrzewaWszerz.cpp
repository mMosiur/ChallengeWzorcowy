#include "PrzeszukiwanieDrzewaWszerz.h"

Wêze³Drzewa* PrzeszukiwanieDrzewaWszerz::weŸ_nastêpny() {
    Wêze³Drzewa* wêze³ = przeszukiwane.front();
    przeszukiwane.pop_front();
    return wêze³;
}
