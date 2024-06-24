# Feladat 
Programozó Péternek van egy kedvenc betűje, mégpedig a c1 (egy kisbetű az angol ábécéből), és a1 darab ilyen betűvel rendelkezik. Programozó Petrának ugyancsak van egy kedvenc betűje, ez pedig a c2 (egy kisbetű az angol ábécéből, amely nem egyezik meg Péter betűjével), és a2 ilyen betűvel rendelkezik.

Péter és Petra eldöntötték, hogy egy karaktersorozatot hoznak létre, amely mind az a1 + a2 betűjüket tartalmazza úgy, hogy két szomszédos betű sosem egyezik meg. Határozzatok meg bármely olyan karaktersorozatot, amely kielégíti ezeket a feltételeket, vagy állapítsátok meg, hogy nem létezik ilyen karaktersorozat.

## Bemenet
A szabványos bemenet első sorában Péter és Petra c1 és c2 betűi találhatók egymás után, vessző nélkül. A következő sorban két természetes szám, az a1 és az a2 található vesszővel elválasztva, amelyek sorra azt jelölik, hogy Péter és Petra hány betűvel rendelkeznek.

## Kimenet
Az első sorban ki kell íratni azt a karaktersorozatot, amely a feladatban felsorolt minden feltételt kielégít. Amennyiben több megoldás is létezik, bármelyiket ki lehet íratni közülük. Amennyiben nincs megoldás, az alábbi szöveget kell megjeleníteni: 'nemoguce' (a félidézőjelek nélkül).

## Korlátozások
- c1 és c2 az angol ábécé egymástól különböző kisbetűi
- 1 ≤ a1,a2 ≤ 50 000 
- Az tesztpéldák 3 diszjunkt csoportba vannak sorolva:
    - Tesztpéldák, melyek 20 pontot érnek: c1 = 'a' és c2 = 'b' és 1 ≤ a1,a2 ≤ 3.
    - Tesztpéldák, melyek 40 pontot érnek: 1 ≤ a1,a2 ≤ 1000.
    - Tesztpéldák, melyek 40 pontot érnek: nincs külön korlátozás.
## Példák
### Példa 1
- Bemenet
    - ab

        2 2
- Kimenet
    - baba
### Példa 2
- Bemenet
    - nm

        4 10
- Kimenet
    - nemoguce
## A példa magyarázata
Az első példában fel van használva mindkét 'a' betű és mindkét 'b' betű és nincsenek egyforma szomszédos betűk ‒ tehát a karaktersorozat érvényes. Az 'abab' karaktersorozat is érvényes megoldása a feladatnak. A második feladatban akárhogy is osztjuk el a 4 'n' betűt és a 10 'm' betűt, mindig lesz két olyan szomszédos betű, amely megegyezik, és így a keresett karaktersorozat nem létezik.