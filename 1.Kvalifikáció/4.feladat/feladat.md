# Feladat 
A szólásszabadság nagyon szép dolog, de léteznek olyan ötletek, amelyek egyszerűen túl rosszak ahhoz, hogy terjesszék őket! Ezért alapították meg a Káros Ötleteket Ellenőrző Szervezetet (KÖESZ), amely abban segíti az embereket, hogy „ne kapja el őket túlságosan a hév" a tartalmak írása során. Azonban a szervezet még most sem teljesen biztos abban, hogy ezt hogyan csinálja, és azt a döntést hozták, ha valamit megcsinálnak, akkor azt az egy dolgot úgy csinálják meg, ahogy kell!

A KÖESZ meghatározta a lehető legroszabb szót: a tiltott S szót, melynek hossza: M. Annak érdekében, hogy soha senki ne legyen kitéve ennek a szörnyű szónak, úgy döntöttek, hogy törlik, ahol csak tudják. Előttük áll a T szöveg, melynek hossza N, és az a céluk, hogy némely betűt lecseréljék az alábbi jelre: * (az ASCII értéke 42) úgy, hogy az S szó ne jelenjen meg a T szöveg részsorozataként (szubszekvenciájaként). Emlékeztetőül: az S szó a T szöveg részsorozata, ha a T-ből törölhetők valamely betűk úgy, hogy pontosan az S maradjon.

Azonban a szerkesztés célja nem a szöveg lényegének a megváltoztatása, ezért minél kevesebb betűt kell megváltoztatni a T szövegben. Ezt nem tudják megvalósítani, így a segítségeteket kérik ebben.

## Bemenet
A szabványos bemenet elő sorában található a T szöveg, amely a latin ábécé kisbetűiből áll. A második sorban az S tiltott szó található, amely szintén a latin ábécé kisbetűiből áll.

## Kimenet
A szabványos kimenet első sorában egy természetes számot kell kiíratni, amely azt jelöli, hogy legkevesebb hány betűt kell kicserélni *-ra annak érdekében, hogy megvalósítsuk a célunkat. A szabványos kimenet második sorában a T szöveg szerkesztett változatát kell megjeleníteni, amelyben az S szó nem jelenik meg részsorozatként.

## Korlátozások
- c1 és c2 az angol ábécé egymástól különböző kisbetűi
- 1 ≤ a1,a2 ≤ 50 000 
- Az tesztpéldák 3 diszjunkt csoportba vannak sorolva:
    - Tesztpéldák, melyek 20 pontot érnek: c1 = 'a' és c2 = 'b' és 1 ≤ a1,a2 ≤ 3.
    - Tesztpéldák, melyek 40 pontot érnek: 1 ≤ a1,a2 ≤ 1000.
    - Tesztpéldák, melyek 40 pontot érnek: nincs külön korlátozás.
## Példa
- Bemenet
    - ttaakkprroogg

        takprog
- Kimenet
    - 1

        ttaakk*rroogg
## A példa magyarázata
Ha a p betűt cenzúrázzuk, többé nem fog megjelenni a szövegben, így az S semmiképp sem lehet részsorozat.
## Pontozás
Részpontot is lehet kapni a tesztpéldákra: amennyiben megtaláljátok a helyes legkisebb számot, amely a cenzúrázott betűk számát jelöli, akkor az adott példára a pontok 80%át kapjátok.