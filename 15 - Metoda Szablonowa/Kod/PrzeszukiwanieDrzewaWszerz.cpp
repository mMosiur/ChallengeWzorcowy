#include "PrzeszukiwanieDrzewaWszerz.h"

W�ze�Drzewa* PrzeszukiwanieDrzewaWszerz::we�_nast�pny() {
    W�ze�Drzewa* w�ze� = przeszukiwane.front();
    przeszukiwane.pop_front();
    return w�ze�;
}
