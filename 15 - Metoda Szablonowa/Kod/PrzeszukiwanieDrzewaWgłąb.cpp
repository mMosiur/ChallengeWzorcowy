#include "PrzeszukiwanieDrzewaWg��b.h"

W�ze�Drzewa* PrzeszukiwanieDrzewaWg��b::we�_nast�pny() {
    W�ze�Drzewa* w�ze� = przeszukiwane.back();
    przeszukiwane.pop_back();
    return w�ze�;
}
