# Feladat 
Marci Varázsló N darab varázsitallal rendelkezik, amelyek sorba vannak rendezve. Ezen N darab varázsital mindegyikének meg van határozva az ai ereje. Marci azzal szeretne nagyot alkotni, hogy ezeket a varázsitalokat egyesíti. Tudja, hogy ehhez először ki kell választania pontosan K darabot a meglévő N darab varázsitalból, és a többit félre kell tennie. Tehát Marci kiválaszt K darab varázsitalt, a többieket pedig elveti, és a kiválaszott varázsitalok sorrendjét nem változtatja meg. Ezután Marci addig kombinálja a K darab varázsitalt, amíg végül csak egy marad.

Annak érdekében, hogy a varázslók minél több munkahelyi balesetet elkerüljenek, egy nemzetközi kongresszuson nagyon szigorú szabályokat fogadtak el a varázsitalok keveréséről. Ezek a szabályok az alábbiak:

- Elvehető a sorból az utolsó varázsital, és a teljes tartalma áttölthető abba az üvegcsébe, amelyik az első varázsitalt tartalmazza. Ebben az esetben az első varázsital ereje egyenlő lesz az első és az utolsó varázsital erejének a különbségével. Tehát, ha az első varázsital ereje volt, аz utolsóé pedig , akkor ennek a műveletnek a végrehajtásával az utolsó varázsital eltűnik a sorból, és az első varázsital ereje x-y lesz.

- Elvehető a sorból az első varázsital, és a teljes tartalma áttölthető abba az üvegcsébe, amely az utolsó varázsitalt tartalmazza. Ebben az esetben az utolsó varázsital ereje egyenlő lesz az utolsó és az első varázsital erejének különbségével. Tehát, ha az első varázsital ereje volt, аz utolsóé pedig , akkor ennek a műveletnek a végrehajtásával az első varázsital eltűnik a sorból, és az utolsó varázsital ereje y-x lesz.

Vegyük észre, hogy ezen műveletek során valamelyik varázsital ereje negatívvá is válhat. Mindkét esetben az egyik varázsital elhasználódik, vagyis a sorban lévő varázsitalok száma eggyel csökken. Marci minden pillanatban eldöntheti, hogy melyik szabályt alkalmazza. Ezt a műveletet K-1 szer fogja megismételni, vagyis addig, amíg a végén már csak egy varázsital fog maradni. Mivel a lehető legnagyobb tettet szeretné végrehajtani, őt az érdekli, hogy mekkora lehet a varázsital legnagyobb ereje, amely megmarad az összes művelet végrehajtása után. Marci a világ egyik legjobb varázslója, és ha segítségére lesztek, olyan varázsitalt fog készíteni, amely 100 pontot fog érni számotokra ebben a feladatban.

## Bemenet
A szabványos bemenet első sorában két pozitív egész szám áll: N és K varázsitalok száma a kezdetben, és azon varázsitalok száma, amelyet Marcinak ki kell választania.

A szabványos bemenet első sorában N darab egész szám van, közülük az i-dik az ai, amely az i-dik varázsital erejét jelöli.

## Kimenet
A szabványos kimenet egyetlen sorában egy egész számot kell kiíratni, amely annak a varázsitalnak az erejét jelöli, amely utoljára marad a sorban a műveletek végrehajtását követően.

## Korlátozások
- 2 ≤ K ≤ N ≤ 200 000 
- |ai| ≤ 100 000, minden 1 ≤ i ≤ N-re
- Az tesztpéldák 5 diszjunkt csoportba vannak sorolva:
    - A 10 pontot érő tesztpéldákban: N ≤ 10.
    - A 15 pontot érő tesztpéldákban: N ≤ 200.
    - A 20 pontot érő tesztpéldákban: K = N.
    - A 20 pontot érő tesztpéldákban: N ≤ 1000.
    - A 35 pontot érő tesztpéldákban: nincsenek további korlátozások.
## Példa
- Bemenet
    - 3 2

        5 3 2
- Kimenet
    - 3
- Magyarázata
    - Marci két varázsitalt kell hogy kiválasszon. Amennyiben az első és az utolsó varázsitalt választja ki, és a második műveletet hajtja végre, akkor egy olyan varázsitalt fog kapni, melynek ereje: a1-a3=5-2=3.