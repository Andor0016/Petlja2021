# Feladat 
Egyszer a bölcs Ző VerSeny valamilyen szegmensekre lett figyelmes az c-tengelyen. Világos számára, hogy egy [l,r] szegmens akkor és csakis akkor tartalmaz egy c koordinátájú pontot, ha l ≤ c ≤ r, mert ez így van leírva a geometria könyvekben. Tudja azt is, hogy egy szegmens középpontja valójában az adott szegmens közepén található pont, mert ez nem lehet másképp. Valamint, ami mindennél fontosabb, megértette, hogy a két szegmens konjugált, ha egyik szegmens tartalmazza a másik középpontját, mert az esze úgy vág, mint a konyhakés.

Az x-tengelyen található N darab [ai,bi] szegmens esetében határozzátok meg, hogy közülük hány (rendezetlen) szegmenspár konjugált, mert másként nem tudjátok begyűjteni az értékes pontokat!

## Bemenet
A szabványos bemenet első sorában a szegmensek számát jelölő N természetes szám áll.

A következő N darab sor mindegyikében ai és bi egész számok találhatók, amelyek az i-dik szegmes végeit jelölik.

## Kimenet
A szabványos kimenet egyetlen sorában egy számot kell kiíratni, amely konjugált (rendezetlen) szegmenspárok számát jelöli, az adott szegmensek esetében.

## Korlátozások
- 1 ≤ N ≤ 150 000
- 0 ≤ ai ≤ bi ≤ 10^9
- Az tesztpéldák 5 diszjunkt csoportba vannak sorolva:
    - A 10 pontot érő tesztpéldákban: N ≤ 1000.
    - A 15 pontot érő tesztpéldákban: 0 ≤ ai,bi ≤ 100, 1 ≤ i ≤ N-re.
    - A 20 pontot érő tesztpéldákban: ai ≤ ai+1 és bi < bi+1, 1 ≤ i ≤ N-re.
    - A 25 pontot érő tesztpéldákban: N ≤ 50 000, 0 ≤ ai ≤ bi ≤ 10^6, 1 ≤ i ≤ N-re.
    - A 30 pontot érő tesztpéldákban: nincs külön korlátozás.
## Példák
### Példa 1
- Bemenet
    - 5

        7 12

        4 10

        1 21

        20 24

        22 26
- Kimenet
    - 3
- Magyarázat
    - A [7,12] szegmens középpontja 9.5, a [4,10]  szegmensé pedig 7. Mivel a [7,12] szegmens tartalmazza a 7-et, és a [4,10] szegmens a 9.5-öt,így ezen két szegmens konjugált. Ehhez hasonlóan a [7,12] és [1,21] szegmensek és a [20,24] és [22,26] szegmensek is konjugáltak. Mivel nincs több konjugált szegmenspár, így a megoldás 3.
### Példa 2
- Bemenet
    - 4

        3 8

        3 8

        3 8

        4 8
- Kimenet
    - 6
- Magyarázat
    - A bemeneten található minden szegmenspár konjugált.