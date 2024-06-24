# Feladat 
A kosárlabdarajongók már valószínűleg hallottak a kosárlabdapályák új lépéséről a Zombor shuffleről.Ezért a Bizottság úgy döntött, hogy a programozás világában is bevezet egy új lépést, mégpedig a Palindróma shufflet. A Palindróma shuffle egy olyan lépés, melynek során az egymást követő betűk nem üres részkarakterláncát kiválasztjátok a Т karakterláncból, és a betűket úgy helyezitek át ebben a részkarakterláncban, hogy a teljes karakterlánc egy palindróma legyen. A betűk sorrendje a részkarakterláncon kívül változatlan marad.

Ebben a feladatban adott a Т karakterlánc, és arra a kérdésre kell válaszolnotok, hogy mekkora az a legkisebb részkarakterlánchossz, amelyet ki tudtok úgy választani,hogy sikeresen végrehajtsátok a Palindróma shufflet.

Emlékeztetőül: A T karakterlánc akkor palindróma, ha balról és jobbról olvasva is ugyanazt kapjuk.

## Bemenet
A szabványos bemenet egyetlen sorában a T karakterlánc található, amelyet kizárlóag az angol ábécé betűi
alkotnak.

## Kimenet
A szabványos kimenet egyetlen sorában ki kell íratni azt az egész számot, amely a részkarakterláncnak a legrövidebb hosszát jelöli, amelyen elvégezhető a Palindróma shuffle. A karakterláncnak garantáltan van legalább egy olyan részkarakterlánca, amelyen elvégezhető a Palindróma shuffle.

## Korlátozások
- A T karakterlánc hossza legalább 1, és maximum 2*10^5.
- A T karakterlánc az angol ábécé kisbetűiből áll.
- Az tesztpéldák négy diszjunkt csoportba vannak sorolva:
    - A 15 pontot érő tesztpéldákban: A T karakterlánc pontosan két b betűt tartalmaz, az összes több betű pedig a.
    - A 20 pontot érő tesztpéldákban: A T karakterlánc hossza nem nagyobb, mint 50.
    - A 25 pontot érő tesztpéldákban: A T karakterlánc hossza nem nagyobb, mint 3000.
    - A 40 pontot érő tesztpéldákban: Nincsenek további korlátozások.
## Példák
### Példa 1
- Bemenet
    - abbaaca
- Kimenet
    - 4
- Magyarázat
    - Az egymást követő betűk legrövidebb részkarakterlánca, amely kiválaszható a shufflera a 3.tól a 6.ig karakterig terjed. Ekkor a karakterlánc az alábbi módon alakítható át: abacaba.
### Példa 2
- Bemenet
    - abcba
- Kimenet
    - 1
- Magyarázat
    - A bemeneten lévő T karakterlánc egy palindróma, és a legrövidebb nem üres részkarakterlánc hossza a shufflera 1 hosszúságú.