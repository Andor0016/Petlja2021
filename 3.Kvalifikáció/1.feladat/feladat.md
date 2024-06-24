# Feladat 
Mint már tudjátok, a környezetvédelem és a biodiverzitás kiemelkedően fontosak. Ezért Titeket béreltek fel arra, hogy a Szerbia biológiai sokszínűségének értékelésére szolgáló projektum megvalósításában segítsetek.

A Szerbiában élő vagy élt állatfajok 0,1,2,... számokkal vannak indexelve. Az indexek úgy kerülnek meghatározásra, hogy a i indexszel rendelkező biológiai faj ősének indexe [i/K], ahol a K egy előre rögzített természetes szám.

Egy adott terület biodiverzitását kell vizsgálnotok, és ezért kaptátok kézhez az adott terülten jelenleg élő fajok halmazát. A feladatotok az, hogy meghatározzátok az adott területen élő biológiai fajok őseinek számát.

## Bemenet
A szabványos bemenet első sorában találhatók az N és K egész számok ‒ azon fajok száma, amelyek jelenleg élnek az adott területen, és egy szám, amely azt jelöli, hogyan kell kiszámolni a biológiai előd indexét.

A szabványos bemenet második sorában az N hosszúságú i1, i2, ..., iN egész számokból álló sorozat található, ahol az ik az adott területen jelenleg élő fajok indexét jelöli.

## Kimenet
A kimenet egyetlen sorában azt az egész számot kell kiíratni, amely az adott területen jelenleg élő fajok különböző biológiai őseinek számát jelöli.

## Korlátozások
- 1 ≤ N ≤ 10^4 
- 0 ≤ ik ≤ 10^9, 1 ≤ k ≤ N-re  
- 1 ≤ K ≤ 10^9 
- Az tesztpéldák 4 diszjunkt csoportba vannak sorolva:
    - A 20 pontot érő tesztpéldákban: N ≤ 10, ik ≤ 100.
    - A 10 pontot érő tesztpéldákban: érvényes, hogy K = 1, ik ≤ 100.
    - A 20 pontot érő tesztpéldákban: érvényes, hogy ik ≤ 10^6.
    - Az 50 pontot érő tesztpéldákban: nincsenek további korlátozások.
## Példák
### Példa 1
- Bemenet
    - 5 4

        10 20 15 11 30
- Kimenet
    - 4
- Magyarázat
    - Az adott fajok ősei, sorra a 2, 5, 3, 2, 7 indexekkel rendelkező fajok. Tehát négy különböző ős létezik.