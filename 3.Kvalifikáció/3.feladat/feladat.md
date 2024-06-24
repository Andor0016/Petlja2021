# Feladat 
A neved Patrik Byteman. 27 éves vagy. Az egészséged kiegyensúlyozott diétával és szigorú edzésprogrammal óvod. Reggelente, ha feldagad az arcod, egy jégmaszkot veszel fel a programozás feladatok megoldásához, amelyekből jelenleg ezret tudsz megcsinálni...

Egy programozó cégben dolgozol, és szeretnél eljutni a legmagasabb pozícióig. A cég felépítése fa hierarchiájú, ahol minden személynek pontosan egy felettese van, kivéve a főnököt. A cégben N dolgozó darab személy 1-től N-ig van megszámozva. Minden dolgozónak ismert a felettese, kivéve az 1-es személyt, vagyis a főnököt.

A névjegykártyák megszállotja vagy, és követed, hogy azok hogyan vándorolnak a cégben. Megfigyelted, hogy azok mindig felfelé haladnak a hierarchiában (egy személy mindig a felettesének adja). Pontosan M darab névjegykártya kerül majd be a körforgásba, és mindegyikről tudni fogod, hogy ez hanyadik percben történik meg, valamint azt is, hogy ezt melyik személy fogja megtenni.

Minden személy, aki jelenleg egy másik dolgozó névjegykártyájával rendelkezik, a következő percben tovább fogja küldeni a felettesének. Pontosabban, ha egy névjegykártya a percben az személynél van, akkor t+1 percben az személy felettesénél lesz majd. Ha az adott névjegykártya a főnökhöz kerül, elteszi a gyűjteményébe, ahol biztonságban tudja. Ha egy személyhez (beleértve a főnököt is) egyszerre több névjegykártya érkezik, akkor az adott személy véletlenszerűen kiválaszt két névjegykártyát, összehasonlítja őket, és kidobja a szemetesbe. Ezt addig ismétli, amígy legtöbb egy névjegykártyája marad. Például ha t időpillanatban egy személyhez 5 névjegykártya fut be, akkor ő szemügyre vesz ezek közül kettőt, összehasonlítja őket, és eldobja azokat, majd az újabb két névjegykártya esetében hasonlóan jár el. A megmaradt névjegykártyát t+1 időpillanatban küldi tovább a felettesének. Abban az esetben, ha 4 névjegykártyát kapna, a folyamat elvégeztével egy névjegykártyája sem maradna, és nem lenne mit továbbküldenie sem.

Téged, Patrik Bytemant az érdekel, hogy hány névjegykártya kerül a szemetesbe. De miért is? Azért, mert te vagy a szerbiai pszicho.

## Bemenet
A szabványos bemenet első sorában az N és M, két egész szám található, amelyek a cég dolgozóinak számát, valamint a körforgásban résztvevő névjegykártyák számát jelölik.

A szabványos bemenet második sorában N-1 hosszúságú p2, p3, ..., pN egész számok sorozata áll, ahol pi jelöli az i-dik dolgozó felettesének azonosítóját.

A következő M darab sor mindegyike két egész számot, a ti-t és vi-t tartalmazza, vagyis azt a percet, amikor megjelent az i-dik névjegykártya, és azon személy azonosítóját, akinél megjelent. Ez a névjegykártya is beleszámít azok közé, amelyek a vi személyhez a ti időpillanatban érkeztek meg.

## Kimenet
A szabványos kimenet egyetlen sorában az szemetesbe eldobott kártyák száma kell hogy megjelenjen.

## Korlátozások
- 1 ≤ N,M ≤ 10^5
- 1 ≤ pi ≤ N, pi ≤ i, 2 ≤ i ≤ N-re 
- 1 ≤ ti ≤ 10^9, 1 ≤ i ≤ M-re
- 1 ≤ vi ≤ N, 1 ≤ i ≤ M-re
- Az tesztpéldák 4 diszjunkt csoportba vannak sorolva:
    - A 15 pontot érő tesztpéldákban: N,M ≤ 1000.
    - A 20 pontot érő tesztpéldákban: pi = i-1, 2 ≤ i ≤ N-re.
    - A 20 pontot érő tesztpéldákban: ti = 1, 1 ≤ i ≤ M-re.
    - A 40 pontot érő tesztpéldákban: nincs külön korlátozás.
## Példák
### Példa 1
- Bemenet
    - 6 6

        1 2 2 2 4

        3 6 

        7 3

        7 5

        8 5

        7 1

        4 4
- Kimenet
    - 4
- Magyarázat
    - Az első és a hatodik névjegykártya egyidőben lesz a 4-es személynél, és mindkettő ki lesz dobva. Ehhez hasonlóan a második és a harmadik kártya a 2-es személynél lesz, aki szintén eldobja azokat. A negyedik és az ötödik névjegykártya pedig sértetlenül el fog jutni a főnökhöz.
### Példa 2
- Bemenet
    - 5 10

        1 1 1 1

        4 4

        3 3

        3 4

        2 2

        2 3

        2 4

        1 2

        1 3

        1 4

        1 5
- Kimenet
    - 8
- Magyarázat
    - Az első névjegykártya gond nélkül megérkezik az főnökhöz. A második és a harmadik névjegykártyák a 4-dik időpillanatban érkeznek a főnökhöz, és ő mindkettőt eldobja. A negyedik, ötödik és hatodik névjegykártyák a 3-dik időpillanatban érkeznek a főnökhöz, aki ezek közül kettőt véletlenszerűen kivesz és megsemmisít, a harmadikat pedig a gyűjteményébe helyezi. A hetedik, nyolcadik, kilencedik és tizedik névjegykártyák sorra el lesznek dobva, a 2-dik időpillanatban érkeznek.