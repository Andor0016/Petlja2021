# Feladat 
A selejtező első körének sikeres befejeztével Guki tanár úr úgy döntött, hogy elviszi tanulóit egy kirándulásra. Habár rengeteg banánkrémet készített, és kiválaszotta a legjobb úti célt (a Denino hegyet) , a diákjai mégsem mondhatják magukat a legboldogabbnak. Ők úgy gondolják, hogy sokkal hasznosabb lenne, ha inkább több időt fordíthatnának a Petlja portálon található feladatok megoldására, hogy a selejtező következő körében legalább 490re növeljék a pontjaik számát. De mivel tudják, hogy tanáruknak sokat jelent ez a kirándulás a Denino hegyen (meg a banánkrém is már készen áll), úgy döntöttek, hogy adnak neki egy esélyt egy feltétellel.

A tanulók azzal a feltétellel mennek el a kirándulásra, ha pontosan K nem üres csoportra lesznek oszthatók úgy, hogy minden diák pontosan egy csoportba tartozzon, és az egy csoporton belül lévő tanulók különböző mennyiségű, egész számú adag banánkrémet kapjanak.

Segítsetek Gukinak megállapítani, hogy elkezdhetie csomagolni a banánkrémeket, vagy nem áll rendelkezésre elég adag az összes diák számára (ebben az esetben egyedül kell mindet megennie).

## Bemenet
A szabványos bemenet első sorában a T pozitív egész szám szerepel, amely a különböző tesztek számát jelöli.
Minden további T sor három pozitív egész számot tartalmaz: N, M, K- a tanulók számát, a tanár által készített banánkrém adagok számát, valamint a kért csoportok számát.

## Kimenet
A szabványos kimenet T sorának mindegyikében jelenjen meg a "Tak" felirat (idézőjelek nélkül), amennyiben az adott paraméterek esetén a kirándulás meg lesz tartva, ellenkező esetben pedig a "Nie" felirat jelenjen meg (idézőjelek nélkül).

## Korlátozások
- 1 ≤ T ≤ 10 
- 1 ≤ N ≤ 10^9 
- 1 ≤ M ≤ 10^17 
- 1 ≤ K ≤ N
- Az tesztpéldák 5 diszjunkt csoportba vannak sorolva:
    - A 10 pontot érő tesztpéldákban: N = 3.
    - A 10 pontot érő tesztpéldákban: K = 1.
    - A 20 pontot érő tesztpéldákban: N,M ≤ 10.
    - A 30 pontot érő tesztpéldákban: N ≤ 2000.
    - A 30 pontot érő tesztpéldákban: Nincsenek további korlátozások.
## Példa
- Bemenet
    - 2

        5 100 2

        2 2 1
- Kimenet
    - Tak

        Nie
- Magyarázat
    - A első tesztben a diákok két csoportra oszthatók úgy, hogy például az egyik csoportban 4 tanuló legyen, a másikban pedig 1. Ekkor az első csoportban lévő diákok sorra 10, 15, 20 és 35 banánkrémet kapnának, és ebben az esetben a második csoportban lévő tanuló pedig elkapná a maradék 20 banánkrémet.