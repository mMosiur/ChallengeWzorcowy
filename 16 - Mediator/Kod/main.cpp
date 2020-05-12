#include "IMediator.h"
#include "Termostat.h"

int main() {
    Termostat termostat;

    termostat.okno.otwórz();

    termostat.termometr.ustaw_temperaturê(20.0);

    return 0;
}