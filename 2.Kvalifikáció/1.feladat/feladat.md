# Feladat 
Megtudtátok, hogy a barátaitok újévi ajándékként egy bűvészkönyvet vettek számotokra. De ennek az információnak a tükrében türelmetlenül várjátok a jövőbeli bűvészkarrieretek kezdetének időpontját. Annyira türelmetlenek vagytok, hogy úgy döntöttetek, nem fogjátok kivárni az új évet, és máris kitaláltátok a saját bűvészmutatványotokat.

Egy N darab kártyából álló kártyacsomag (pakli) áll a rendelkezésetekre, amelyek mindegyikén egy szám szerepel az 1-től N-ig terjedő tartományból. Minden kártyán különböző szám szerepel. A trükk első lépéseként megkeveritek a kártyapaklit úgy, hogy pontosan tudjátok, milyen sorrendben követik egymást a kártyák a megkevert pakliban. Ezután egy nézőt szólítotok a közönségből, aki a segítségetekre lesz a trükk kivitelezésében. Megengeditek, hogy "átvágja" a paklit: vesz néhány kártyát a tetejéről és az aljára teszi ugyanabban a sorrendben. Vegyük észre, hogy nem muszáj átvágnia a paklit, ha nem szeretné. A folytatásban ugyanez a néző kivesz egy kártyát a pakliból, de nem a pakli tetején levőt, majd háromszor összeüttitek a sarkatokat, bukfenceztek egyet előre, majd meghajoltok, és bejelentitek a közönségnek, hogy kitaláltátok, melyik kártyát vette ki a néző. És ezek után, amikor eltaláljátok a kártyáját, akkor mindenki el lesz ragadtatva a varázslatotoktól.

A közönség nem tudja, hogy amikor a néző kihúzta a kártyát a pakliból, akkor ti megfordítottátok a közvetlenül felette lévő K kártyát, és ez alapján találtátok ki, hogy melyik volt a kihúzott kártya. Mivel még nem vagytok biztosak ennek a trükknek a kivitelezésében, szeretnétek leellenőrizni, hogy ez működike a számítógépen.

## Bemenet
A szabványos bemenet első sorában találhatók az N és K pozitív egész számok, amelyek a pakliban található kártyák számát jelölik, valamint azt a számot, amelyik a kihúzott kártya feletti kártyalapon szerepel.

A szabványos bemenet második sorában található N darab pozitív egész szám, amelyek közül az i-dik a pi, amely azt a számot jelöli, amely az i-dik kártyalapon szerepel a pakli tetejétől számítva.

## Kimenet
A szabványos kimenet egyetelen sorában egy pozitív egyész számot kell kiíratni, mégpedig azt, amely azon a kártyán szerepel, amelyet a néző kihúzott a pakliból.

## Korlátozások
- 2 ≤ T ≤ 20 000 
- 1 ≤ K ≤ N 
- 1 ≤ pi ≤ N, minden 1 ≤ i ≤ N-re  
- pi != pj, minden 1 ≤ i ≤ j ≤ N-re
- Az tesztpéldák 4 diszjunkt csoportba vannak sorolva:
    - A 15 pontot érő tesztpéldákban: N = 2.
    - A 20 pontot érő tesztpéldákban: érvényes, hogy pi = i, minden 1 ≤ i ≤ N-re.
    - A 20 pontot érő tesztpéldákban: N = 5.
    - A 45 pontot érő tesztpéldákban: Nincsenek további korlátozások.
## Példák
### Példa 1
- Bemenet
    - 2 2

        2 1
- Kimenet
    - 1
- Magyarázat
    - Azt a kártyát láttátok, amelyen a 2-es szám szerepel, tehát csakis azt a kártyát húzhatta ki a néző, amelyiken az 1-es szám szerepel.
### Példa 2
- Bemenet
    - 5 3

        5 4 1 2 3
- Kimenet
    - 5
- Magyarázat
    - Akárhogy vágja át a néző a paklit, a 3-as számot tartalmazó kártya az 5-ös számot viselő kártya alatt fog elhelyezkedni. Például: ha 3 kártyát vesz el a pakli tetejéről (az 5,4,1 kártyákat), és ha azokat visszarakja a pakli aljára ugyanabban a sorrendben, akkor a kártyacsomag fentről lefelé így fog kinézni: 2,3,5,4,1 tehát a 3-as számú kártya alatt pontosan az a kártya lesz, amelyen az 5-ös szám van. Vegyétek észre, hogy ebben az esetben nem fordulhat elő, hogy a néző nem vágja át a paklit, mert akkor nem láthattátok volna a 3-as számot a kihúzott kártya alatt.