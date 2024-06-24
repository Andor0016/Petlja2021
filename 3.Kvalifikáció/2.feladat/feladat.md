# Feladat 
Néhány nappal ezelőtt Márk egy bűvészbemutatót tekintett meg, ahol a varázsló egy szokatlan trükkre szánta el magát.

Először N darab golyót helyezett a zsákba, amelyek színe csak piros, zöld és kék lehetett. Ezután addig húzta ki a golyókat egymás után, amíg nem húzott ki egy pirosat. Ezt követően mindegyik golyót visszatette a zsákba, majd addig húzta sorra a golyókat, amíg nem húzott egy zöldet. Végül ismét visszatette a golyókat, és addig húzott, amíg nem talált egy kék golyót.

A mutatvány alapötlete az volt, hogy megmutassa, hogy a golyók varázslat segítségével váltottak színt, amíg el voltak rejtve, és hogy a megtörtént események lehetetlenek voltak, ha a mutatvány elejétől kezdve a zsákban valóban N darab golyó volt. Márk azonban nem biztos abban, hogy ez így pontos, és úgy gondolja, hogy amit látott, trükk nélkül is megvalósítható.

Márk nem emlékszik pontosan a látottakra, de arra emlékszik, hogy a mutatvány mindhárom részében egyenként hány golyó került kihúzásra, valamint arra is, hogy a mutatvány elején hány golyó került a zsákba. Érdekli, hogy létezhete a piros, zöld és kék golyóknak olyan száma, amellyel ez a kimenetel megvalósítható, és ha igen, akkor erre egy példát is kell adnotok.

## Bemenet
A szabványos bemenet első sorában négy egész szám található: $N, A, B, C$ (a golyók száma a zsákban, majd sorra az első fázisban kihúzott golyók száma, amíg a piros nem lett kihúzva, majd a kihúzott golyók száma, amíg a második fázisban nem került kihúzásra a zöld szín, és végül a harmadik fázisban kihúzott golyók száma, amíg a kék nem lett kihúzva).

A húzások számába bele kell számolni az utolsó húzást is. Például, ha az első fázisban két zöld golyó lett kihúzva, majd egy kék, és végül egy piros, akkor az A értéke 4.

## Kimenet
Ha léteznek olyan R, G, B számok, amelyekre a feladatban leírt események megtörténhetnek, amennyiben a zsákban induláskor R darab piros, G darab zöld és B darab kék golyó volt, akkor a szabványos kimenet első sorába ki kell írni, hogy 'moguce', majd a második sorban az R, G és B értékeket kell megjeleníteni.

Ellenkező esetben a szabványos kimenet egyetlen sorában az kell megjeleníteni, hogy 'nemoguce'.

## Korlátozások
- 1 ≤ N ≤ 10^9 
- 1 ≤ A,B,C ≤ N 
- Az tesztpéldák három diszjunkt csoportba vannak sorolva:
    - A 30 pontot érő tesztpéldákban: érvényes, hogy N ≤ 200.
    - A 30 pontot érő tesztpéldákban: érvényes, hogy N ≤ 2000.
    - A 40 pontot érő tesztpéldákban: nincsenek további korlátozások.
## Példák
### Példa 1
- Bemenet
    - 10 3 4 2
- Kimenet
    - moguce

        5 3 2
- Magyarázat
    - Ha a zsákban öt piros, három zöld és két kék golyó volt, akkor egy lehetőség az volt, hogy a mutatvány az alábbi módon történt: először két kék golyó lett kihúzva, majd egy piros, a második fázisban piros, kék, piros, majd zöld, és a harmadik fázisban zöld, majd kék golyó.
### Példa 2
- Bemenet
    - 5 5 5 5
- Kimenet
    - nemoguce
- Magyarázat
    - Ha az első fázisban minden golyó ki lett húzva, megállapíthatjuk, hogy a zsák pontosan egy piros golyót tartalmazott (az utolsót). Ehhez hasonlóan megállapíthatjuk, hogy pontosan egy zöld és egy kék golyó létezik, de tudva, hogy öt golyó van, ez az eseménysorozat nem következhet be.