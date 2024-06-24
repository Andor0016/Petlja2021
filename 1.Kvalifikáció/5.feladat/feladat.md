# Feladat 
Bájtországban N darab település található, amelyek különböző 1 és N közötti egész számokkal vannak jelölve. Létezik N-1 út az egyes települések között, úgy, hogy bármely településről el tudunk jutni bármelyik másikra ezeken az utakon (tehát Bájtország fa alakú). Két település közötti távolság az adott két település közötti legrövidebb út.

A Bájtország Útjai Kommunális Közvállalat adatbázisában minden település valamilyen sorrendben van rendezve (pi azt jelöli, hogy az i-edik sorozat a sorban a pi település ).

Egyszer csak fura dolgok történtek két formában is:
- 1 a b, az adatbázis rendszergazdái megcserélték a sorrendben a pa-t és a pb-t.
- 2 l r x, hackerek feltörték a rendszert, és zsarolják a rendszergazdákat. Az alábbi kérdésre keresik a
választ: milyen messze van az x település a legtávolabbi településtől a pl, pl+1, ..., pr közül.

A Bájtország Útjai Kommunális Közvállalat adatbázisának rendszergazdái arra kérnek titeket, hogy segítségképp válaszoljatok a hackerek kérdéseire.

## Bemenet
A szabványos bemenet elő sorában található az N természetes szám, amely a települések számát jelöli. A második sorban N darab egész szám található, amely a települések sorrendjét jelöli a listában. A további N-1 sor az u és v két számot tartalmazza, amelyek jelölik, hogy az u-val és v-vel számozott települések között van út.

A következő sor a Q természetes számot tartalmazza, amely az események számát jelöli. Az ezután következő Q sor mindegyike vagy 1 a b-t tartalmaz, jelölve az első típusú eseményt, vagy 2 l r x-et tartalmaz, jelölve a második típusú eseményt.

## Kimenet
Minden második típusú eseményre külön sorba kell kiírni a szabványos kimenetre a zsarolók kérdésére a választ.

## Korlátozások
- 1 ≤ N,Q ≤ 80 000
- 1 ≤ pi ≤ N és pi != p, i != j-re 
- 1 ≤ a,b,x,u,v ≤ N és a != b
- 1 ≤ l ≤ r ≤ N
- Az tesztpéldák 5 diszjunkt csoportba vannak sorolva:
    - Tesztpéldák, melyek 10 pontot érnek: N,Q ≤ 4000.
    - Tesztpéldák, melyek 15 pontot érnek: minden település legtöbb két másik településsel szomszédos.
    - Tesztpéldák, melyek 25 pontot érnek: minden eseményre érvényes, hogy x = 1 és a,b != 1.
    - Tesztpéldák, melyek 25 pontot érnek: nincs olyan esemény, amelynek a típusa 1.
    - Tesztpéldák, melyek 25 pontot érnek: nincs külön korlátozás.
## Példa
- Bemenet
    - 5

        5 4 1 2 3

        1 2

        2 3

        1 4

        2 5

        5

        2 3 4 5

        1 3 5

        2 3 4 5

        1 2 4

        2 3 4 5
- Kimenet
    - 2

        2
        
        3
## A példa magyarázata
Első esemény: az 5-ös településtől legmesszebb az 1-es település található az adott intervallumban, a távolságuk pedig 2.

Második esemény: az 1-es és a 3-as települések pozíciójának felcserélése.

Harmadik esemény: az 5-ös településtől legmesszebb a 3-as település található az adott intervallumban, a távolságuk pedig 2.

Negyedik esemény: a 4-es és a 2-es települések pozíciójának felcserélése.

Ötödik esemény: az 5-ös településtől legmesszebb a 4-es település található az adott intervallumban, a távolságuk pedig 3.