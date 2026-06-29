# Sessie 4 - Voorbereiding vooraf aan de volgende keer

_**Let op: al het onderstaande hoort bij week 2, dit bouwt voort op de opdrachten uit eerdere weken.**_
- **[READ] Dictionaries**
  - Lees over dictionaries op https://www.w3schools.com/python/python_dictionaries.asp
  - Indien script 4c en 4d nog niet besproken zijn tijdens sessie 4, lees dan in session.md de bijgaande uitleg en neem volgens die 'aanwijzingen' deze twee voorbeelden zelfstandig door.
  - Voorbeeld script 4e is bedoeld voor wie graag alles overziet en de behoefte voelt om iets meer van dictionaries te begrijpen vooraf hier mee te willen / kunnen werken.
  - Voorbeeld script 4f is bedoeld voor de al wat ervaren coders, een voorbeeld van hoe je met functies dictionaries kunt genereren.  


- **[WRITE] Eigen generatie strategie + playback & functies**

  _= DEELS EEN HERHALING VAN EERDERE OPTIONELE OPDRACHT_

  - Deel je generatie script op in delen en breng deze onder in functies. Besteed hierbij aandacht aan de naamgeving en wat de functie doet, is het een functie met een input en output? Of past het de input aan? Essentieel om dit aan de functie naam af te kunnen lezen! E.g.:
    - `createTimestamps(note_durations, bpm)` --> je verwacht een return
    - `offsetTimestamps(time_stamps, offset)` --> past de lijst met time_stamps aan en voegt een offset toe.

    NOTE: voorkeur gaat doorgaans uit naar een functie met een return, zodat je bij het gebruik van de functies in de code eenvoudig de input & output flow kunt lezen. Komt vaak de _readability_ ten goede.

    Tip: schrijf een 'hoofdfunctie' voor je generatie script met als input een settings dictionary die de benodigde settings doorgeeft en als output dictionary van drie note duratie lijsten (één lijst voor iedere laag). Bijvoorbeeld:
    ```python
      def gen_sequences(settings)
        """
        Generates a dictionary with three note duration lists for the three layers high, mid, low, based on the provided settings.

        parameter settings: the setting dictionary, this dictionary contains ...  

        return: a dictionary with three note duration lists
        """
        # E.g. call a seperate generation function per layer. You can also
        # call one function three times with different extra paramters if that
        # suits your genration strategy.
        sequences = {
          "high": gen_high(settings),
          "mid": gen_mid(settings),
          "low": gen_low(settings),
        }

        return sequences
    ```

    De `settings` dictionary kun je voor nu hard coden bij het aanroepen van de gen_sequences functie. Volgende week kijken we naar een generieke manier om met UI aan de gebruiker de settings op te vragen.

  - Transformeer de output van je generatie code (e.g. de output van de gen_sequences functie) in een aantal stappen naar events
    1. durations in time - a dictionary with one list of durations in time for each layer
    2. timestamps - a dictionary with one list of timestamps for each layer
    3. events - a dictionary with one list of events for each layer
    4. one concatenated list of events
    ```python
      all_events = events["high"] + events["mid"] + events["low"]
    ```
    5. sort `all_events` based on each event's timestamp
    ```python
      # NOTE: get_timestamp function needs to be defined, see 4d example
      sorted_events = all_events.sort(key=get_timestamp)
    ```

  - Voeg de handle_events functie toe uit het 4c voorbeeld & de afspeel functionaliteit uit timestamps_final.py toe aan je script. Pas de afspeel code aan zodat de events uit sorted_events afgespeeld kunnen worden met de handle_events functie.

- **[WRITE][OPTIONAL] Eigen generatie strategie & UI**
  - Maak een nieuw script in dezelfde folder als je generatie script folder van de vorige opdracht (die hierboven beschreven) genaamd UI.py.
  - Zet in dit script op een rij welke input er van de gebruiker nodig is voor je gehele programma (bpm, maatsoort, etc.). Denk hierbij ook aan het wel / niet wegschrijven van het gegenereerde ritme als midi file
  - Werk een paar gebruiker input vragen uit in losse functies, bijvoorbeeld een functie voor het opvragen van de bpm, voor de maatsoort etc.. Denk hierbij ook aan het valideren van de gegeven input, zodat een bpm niet tekst bevat of bijv een te hoge / lage of negatieve waarde.
  - Probeer een generieke functie op te stellen die voor verschillende vragen te gebruiken is, waarbij je bijvoorbeeld de vraag en range meegeeft.
