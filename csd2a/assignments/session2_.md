# Sessie 2 - Voorbereiding vooraf aan de volgende keer

_**Let op: al het onderstaande hoort bij week 2, dit bouwt voort op de opdrachten uit week 1.**_

- **[INSTALL]**
  Lees en voer alle opdrachten uit in `session2_git.pdf`. Daarmee installeer je git en regel je een lokale en online repository waarin je de rest van dit jaar werkt.

- **[DESIGN]** Vervolg ritme generatie strategie
  - Scherp je ritme generatie strategie aan op basis van eventuele feedback / andere presentaties _(of switch naar een andere strategie en werk deze eerst uit, kan nu nog)_ en werk de pseudo code op gedetaileerder niveau verder uit.
  - Playtest je pseudocode; laat iemand anders de code uitvoeren. Dwz, je playtester speelt het systeem en voert regel voor regel je pseudo code uit _(practicum is hier een goed moment voor)_. Let op: de code moet 'voor zichzelf spreken', je mag niet helpen door extra aanwijzingen en toelichtingen te geven _(dus niet de playtest beïnvloeden met zinnen als "ja, nu moet je dus eigenlijk dit doen")_.
  - Fix de _(eventuele)_ bugs en test het opnieuw _(geen bugs? Toch nog een keer playtesten met iemand anders (!), altijd waardevol)_. #Herhaal --> totdat er geen bugs meer inzitten en je pseudo code werkt!
<br/><br/>

- Python
  - **[READ]** Als je nog niet de twee relatief eenvoudige ritmes in de csd2a/session2/relative_simple_examples map gelezen en uitgeplozen hebt: lees deze dan alsnog. Het liefst hardop (of in je hoofd hardop) waarbij je per stukje code de werking voorstelt. Wat bij dit laatste helpt is het uitvoeren van de code op papier.
  - **[READ]** Maak bij in ieder geval één van de twee relatief eenvoudige ritmes in de csd2a/session2/relative_simple_examples map een flow chart
  - **[READ]** **[OPTIONAL]** Lees _(deels) de voorbeelden in csd2a/session2/extended_examples map Het liefst hardop (of in je hoofd hardop) waarbij je per stukje code de werking voorstelt. Wat bij dit laatste helpt is het uitvoeren van de code op papier.

  - **[WRITE]** kopieer de code uit de csd2a/session1/hello_bleep.py naar je eigen repository (`sessie2` map) en speel de sample meerdere keren af. Werk dit in ieder geval op de volgende twee manieren uit:
    - met een while loop (zie https://www.w3schools.com/python/python_while_loops.asp)
    - met een forloop en range (zie **The range() Function** op https://www.w3schools.com/python/python_for_loops.asp)  
    <br/><br/>
  - **[WRITE]** **Afspelen van een ritme** Maak een python script aan en stel hierin een lijst op (voor python lists zie https://www.w3schools.com/python/python_lists.asp), zet verschillende duraties in de lijst. Werk daarna als volgt stap voor stap je script verder uit:
    - 'doorloop' deze lijst met behulp van een forloop _(zie https://www.w3schools.com/python/python_for_loops.asp)_ en print met behulp van deze forloop de waarden uit deze lijst
    - importeer de time module en gebruik in de forloop de time.sleep() functie _(zie het hello_bliep.py script uit de eerste sessie - csd2a/session1/hello_bliep.py)_ samen met de duratie in de body van de forloop
     ```python
     for dur in durations:
       time.sleep(dur)
       # and print dur
     ```
    - Laad nu ook een sample in en speel deze in de body van de forloop af _(zie ook het hello_bliep.py script uit de eerste sessie - csd2a/session1/hello_bliep.py)_
    <br/><br/>
  - **[WRITE]** **[OPTIONAL]** Werk de volgende python scripts uit _(dit bouwt stap voor stap op, dus je kunt ook één script steeds verder uitwerken)_:
    - laad minimaal drie verschillende samples en speel deze na elkaar af
    - laad minimaal drie verschillende samples en speel deze samples af op basis van een volgorde aangegeven in een lijst (voor python lists zie https://www.w3schools.com/python/python_lists.asp)
    - laad minimaal drie verschillende samples, genereer een lijst met _random_ die de afspeel volgorde aangeeft (voor python lists zie https://www.w3schools.com/python/python_lists.asp, voor random zie https://www.w3schools.com/python/ref_random_randint.asp en https://www.w3schools.com/python/ref_random_choices.asp)
