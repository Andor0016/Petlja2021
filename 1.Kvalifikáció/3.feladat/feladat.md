# Feladat 
Az előző évi versenyciklusban az informatikaversenyen minden eddiginél több másolót vettek észre. A Bizottság ezért az idei évben nagyon aggódik e probléma miatt. A rémület eluralkodott, és a Bizottság tagjai megtalálták a módják annak, hogy hogyan találják meg a másolókat.

Feltételezzük, hogy a következő versenyen N versenyző fog résztvenni, és hogy az i versenyző az (xi, yi) koordinátájú helyen fog ülni. A Bizottság úgy véli, hogy négy diák abban az esetben gyanús, ha az ülőhelyeik egy trapézt alkotnak, amelynek egyik alapja dupla olyan hosszúságú, mint a másik.

A Bizottság szeretné meghatározni a gyanús diáknégyesek számát annak érdekében, hogy felmérjék, hány felügyelőt kell biztosítaniuk a versenyen. Segítsetek a Bizottságnak meghatározni ezt a számot, és ők ezért pontokkal ajándékoznak majd meg titeket (természetesen csak abban az esetben, ha nem másoltátok át a feladatot másról).

Megjegyzés: A trapéz egy olyan ABCD négyszög, amelyre érvényes, hogy AB||CD. Ennek a trapéznak az alapjai az AB és a CD szakaszok. Az olyan négyeseket, amelyeket ugyanazok a diákok alkotnak csak más sorrendben, egyazon négyeseknek tekintjük, és nem számoljuk őket külön.

## Bemenet
A szabványos bemenet első sorában a versenyzők számát jelölő N szám áll, a további N sorban pedig sorra a versenyzők xi és yi koordinátái.

## Kimenet
A szabványos kimenet első sorában ki kell írni a gyanús versenyzőnégyesek számát.

## Korlátozások
- 1 ≤ N ≤ 3000 
- -10^8 ≤ xi, yi ≤ 10^8 
- Semelyik két versenyző sem ülhet ugyanazon a helyen, vagyis, az i != j-re érvényes, hogy (xi, yi) != (xj, yj), valamint az is garantált, hogy három versenyző nem ülhet olyan helyeken, melyeknek a koordinátái kollineáris pontokat jelölnek.
- Az tesztpéldák 5 diszjunkt csoportba vannak sorolva:
    - A 10 pontot érő tesztpéldákban, N ≤ 4, -10 ≤ xi,yi ≤ 10, .
    - A 20 pontot érő tesztpéldákban, N ≤ 100 .
    - A 20 pontot érő tesztpéldákban, N ≤400.
    - A 40 pontot érő tesztpéldákban, N ≤ 1500.
    - A 10 pontot érő tesztpéldákban, N ≤ 3000.
## Példa
- Bemenet
    - 4

        1 1

        1 ‐1
        
        2 2

        2 ‐2
- Kimenet
    - 1