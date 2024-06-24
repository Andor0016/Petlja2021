# Feladat 
A helyi kórház megkért titeket, hogy segítsetek a vérátömlesztések megtervezésében. Jelenleg N beteg várja a vérátömlesztést, és mindegyikük vércsoportja, valamint a számukra szükséges vérmennyiség is ismert. Arra kíváncsiak, hogy a rendelkezésre álló készletek alapján lehetséges-e, hogy mindegyik páciens számára a megfelelő mennyiségű, és a sajátjával kompatibilis vércsoportú vér jusson.

Ebben a feladatban négy vércsoportot különböztetünk meg: O, А, B és АB (a valóságban a besorolás sokkal
bonyolultabb).

A vérátömlesztés során az alábbi szabályok érvényesek:
- Az O vércsoportú beteg, csak O vércsoportú személytől kaphat vért.
- Az A vagy B vércsoporttal rendelkező beteg olyan személyektől kaphat vért, akiknek a vércsoportja szintén A vagy B, vagy pedig O.
- Az AB vércsoportú páciens bárkitől kaphat vért.
- A páciens többféle vércsoportú vért is kaphat. Például, ha egy B vércsoportú beteg két egységet kell hogy kapjon, akkor fogadhat egy egységet az O és egy egységet a B csoporttól.
- Az egységek nem bonthatók fel, tehát a beteg által befogadható vér mennyiségének egész számnak kell lennie.

Tőletek azt kérik, hogy határozzátok meg, az egységek listáját minden páciens esetében úgy, hogy a felsorolt feltételek teljesüljenek. Minden beteg annyi egységet kapjon, amennyire szüksége van, és a felhasznált egységek száma kisebb vagy egyenlő kell hogy legyen, mint a raktárkészlet. Amennyiben ez nem lehetséges, a programotok csak annyit kell, hogy kiírjon, hogy 'nemoguce'.

## Bemenet
Az első sorban egy N egész szám található, amelyik a kórházban lévő betegek számát jelöli.

A második sorban négy szám áll: O, A, B, AB: a kórház készletén lévő vérmennyiség mind a négy vércsoport esetében. Ezek a számok sorra az O, A, B és AB csoportok raktárkészletét jelölik.

A következő N sorban a páciensek leírása található egyenként. Ezt a karaktersorozatot a beteg vércsoportja (egy az O , A , B , AB közül) és a szükséges vérmennyiség alkotja helyközzel elválasztva.

## Kimenet
Amennyiben beosztható úgy a raktárkészlet, hogy a szabályok betartása mellett mindegyik páciensnek megfelelő vérmennyiség jusson, akkor az első sorba azt kell kiírni, hogy 'moguce' . Azután a következő N sorban a pácienseknek kiosztott egységek számát kell megjeleníteni, ugyanabban a sorrendben, mint ahogyan a bemeneten fel voltak sorolva a páciensek. Ezt minden sorban négy egész számmal kell kiírni, jelölve mindegyik csoport esetében, hogy hány egységet kapott belőle a beteg. Ezt ugyanabban a sorrendben kell megtenni, mint ahogyan a raktárkészleten meg volt adva (O, A, B, AB).

Amennyiben a készletek nem oszthatók ki megfelelően, akkor a kimenet egyetlen sorában az kell kiírni, hogy 'nemoguce'.

Amennyiben több olyan beosztás is van, amely eleget tesz a feltételeknek, azok közül bármely kiíratható.

## Korlátozások
- 0 ≤ N ≤ 10^4
- A készleten lévő véregységek száma legtöbb 10^6 lehet. 
- Az összes beteg számára szükséges vérmennyiség legtöbb 10^6 lehet.
- Az tesztpéldák 3 diszjunkt csoportba vannak sorolva:
    - A pontot érő tesztpéldákban: a betegek vércsoportja csak A vagy O lehet, és a készleten is csak ezek az egységek vannak.
    - A pontot érő tesztpéldákban: a betegek vércsoportja csak O, A vagy B lehet, és a készleten is csak ezek az egységek vannak.
    - Az pontot érő tesztpéldákban nincsenek további korlátozások.
   
## Példák
### Példa 1
- Bemenet
    - 3

        2 0 2 2

        A 1

        B 1

        AB 3
- Kimenet
    - moguce

        1 0 0 0

        0 0 1 0

        1 0 0 2
- Magyarázat
    - A kórház raktárkészletén két egység O, B és AB vér található. Egy lehetséges megoldás, az hogy az A vércsoportú beteg, akinek egy egységre van szüksége, Ot kap, a B vércsoportú páciens Bt, majd a három egységet igénylő AB vércsoportú páciens egy egység Ot, és két egység ABt kap.
### Példa 2
- Bemenet
    - 3

        1 0 4 0

        A 1

        AB 2
    
        O 1
- Kimenet
    - nemoguce
- Magyarázata
    - A kórház raktárkészletén egy egység O és négy egység B vér található. Mivel van A és O vércsoportú betegünk is, akik ezen kettő csoport közül csak az O vércsoportú vért kaphatják, amelyből nincs elég, így nem elégíthető ki minden igény.