# Python - Hello bleep

## Terminal en IDE
Voor de onderstaande opdrachten ga je werken in de terminal. Op Mac & Linux: `Terminal`, op Windows: `Windows Terminal`.

**_Ben je nog niet bekend met het werken in de terminal, dan is dit een goede bron_** https://realpython.com/terminal-commands/. De relevante delen:
- "Install and Open the Terminal"
- "Learn Basic terminal Commands", de volgende selectie voor nu:
    - essentiële commands: `cd`, `cd ..`, `ls`, `ls -a`, `touch`
    - al bruikbare commands: `mkdir`, `pwd`, `clear`  

**NIET lezen:** alles na "Install Python Packages With the Terminal"


## 1. Python installeren
**Python 3 (niet 2.7) installeren**
- **Mac**
  - De meest eenvoudige opties om Python te installeren met Homebrew. Voor het installeren van Homebrew zie https://brew.sh/.
  - Of bekijk https://realpython.com/installing-python/ voor andere opties

-  **Windows**: Zie bijv. https://learn.microsoft.com/nl-nl/windows/dev-environment/python?tabs=winget, of https://www.python.org/downloads/, of voor een verder uitvoerige stap voor stap instructie zie https://realpython.com/python-coding-setup-windows/.

-  **Linux**: Zie http://docs.python-guide.org/en/latest/starting/install3/linux/ of bekijk https://realpython.com/installing-python/ voor nog een andere optie.



## 2. Folderstructuur CSD2
▶️ a. Maak lokaal op je computer een map aan waar je dit jaar in gaat werken, genaamd `CSD2`.
_(In de terminal kun je een folder aanmaken met de terminal command `mkdir`, zie ook https://realpython.com/terminal-commands/)_

_Volgende week maak je van deze `CSD2` map een git repository waar je het hele jaar in zult werken. Direct een goede folderstructuur hanteren is daarom fijn!_

▶️ b. Maak in de nieuwe map `CSD2` nog een map genaamd `CSD2a`

▶️ c. Maak in je de `CSD2a` map een map aan genaamd `sessie1`

Je folderstructuur is nu als volgt:
```
CSD/
|-- CSD2a/
    |--sessie1/
```



## 3. Hello World
▶️ a. Maak binnen de map `../CSD/CSD2a/sessie1` een Python file genaamd `helloWorld.py`
_(Navigeer in de terminal naar je `../CSD/CSD2a/sessie1` map en maak een file aan met de terminal command `touch`: `touch helloWorld.py`, zie ook https://realpython.com/terminal-commands/.)_

▶️ b. Schrijf een python script dat de tekst `Hello World` op de commandline print. Hiervoor kun je eenvoudigweg de Python functie `print("...")` gebruiken, zie ook https://www.w3schools.com/python/python_output.asp

▶️ c. Run je python script in de terminal vanuit de map `sessie1`.
_Ben je nog niet bekend met het werken in de terminal, dan is dit een goede bron https://realpython.com/terminal-commands/_
```bash
python helloWorld.py
```

## 4. Hello you
▶️ Breid je `helloWorld.py` script zo uit dat het de gebruiker diens naam vraagt en deze naam vervolgens op de command line gebruikt in een begroeting.
- _Voorbeeld flow_
  - De gebruiker vult “Peter” in op de command line
  - Het programme reageert met “Hello Peter” op de command line.

- Gebruik de Python `input` functie, sla de ingevoerde input op in een variabele en gebruik vervolgens weer de print functie. Zie ook https://www.w3schools.com/python/python_user_input.asp  

- Voorzie de gebruiker van duidelijke instructies in de command line bij het opvragen van diens naam, zodat die weet wat er gevraagd wordt.

▶️ Run wederom je script. Of nog beter, doe dit na elke aanpassing van je script, bijvoorbeeld na het toevoegen van de Python `input` functie. Na kleine stappen je script runnen is een goede codeer flow. Je weet dan namelijk precies wat je in de laatste stap hebt gewijzigd. Mocht er zich een bug voordoen, dan is de oorzaak eenvoudig te herleiden.

## 5. Hello Bleep
In deze opdracht maak je een klinkend 'klinkend' python script; bij het runnen van dit script wordt er een sample afgespeeld. Lees alvorens daar aan te beginnen eerst onderstaande informatie over het werken met packages.

### Packages
Om samples af te kunnen spelen gebruik je de python `pygame` package.
- Een python package is een library en bestaat uit een _directory_ met meerdere python modules. Python modules zijn bestanden met python code.
- `Pygame`is een open-source cross-platform python library voor het ontwikkelen van multimedia applicaties, zoals video games.

### Package beheer
Om te kunnen werken met packages gebruik je de terminal applicatie `pip`. Pip is de standaard _package manager_ voor python.

Omdat het kan voorkomen dat er voor verschillende Python scripts verschillende versies van packages nodig zijn, is het tegenwoordig gebruikelijk om de packages in een _virtual environment_ te installeren. Dit is heel eenvoudig te realiseren in de terminal met `venv`, een standaard tool voor het creeëren van _virtual environments_.

### Opdracht 'Hello bleep' stap voor stap

#### Deel 1 - Pip & Virtual environment

▶️ a. Check of `pip` is geïnstalleerd, run `pip` _(of `pip3`indien jouw python install met `python3` uitgevoerd moet worden)_ in de terminal. Is `pip`_(of `pip3`)_ niet geïnstalleerd? Zie dan https://docs.python.org/3/installing/index.html

▶️ b. Navigeer in de terminal naar je `../CSD/CSD2a/` map _(dus één niveau hoger dan de map sessie1)_

▶️ c. Run `python -m venv ./venv` _(of `python3`)_ voor het aanmaken van de virtual enviroment. De map `venv` is nu toegevoegd aan je `\CSD\CSD2a` map. Hierin kunnen de nodige packages worden geïnstalleerd door `pip`.

▶️ d. Run `source venv/bin/activate` in de terminal vanuit je `\CSD\CSD2a` map. Dit activeert de virtual environment, je kunt dit zien aan de tekst (venv) aan het begin van je _command prompt_.

▶️ e. Run `python3 -m pip install pygame` in de terminal om de `Pygame` packages te installeren.

#### Deel 2 - Klinkend Python script

▶️ f. Navigeer naar `csd\csd2a\sessie1` (`cd sessie1`) en creëer een Python file genaamd `helloBleep.py` (`touch helloBleep.py`)

▶️ g. Schrijf een in je `helloBleep.py` file een 'klinkend' python script; bij het runnen van dit script wordt er een sample afgespeeld.  Hoe? Bekijk de informatie op de pygame website:
- https://www.pygame.org/docs/ met een quick start script om mee te beginnen
- https://www.pygame.org/docs/ref/music.html met de functies voor het afspelen van audio op een rij.
_Run geregeld je script tijdens het werken aan je code!_

## [OPTIONAL] 6. Python sample player
_(de [OPTIONAL] tag geeft aan dat de opdracht optioneel is, het is een verdiepingsopdracht)_
Breid je `helloBleep.py` script uit met extra functionaliteiten, bijvoorbeeld:
- vraag aan de gebruiker hoe vaak het geluid afgespeeld moet worden en speel vervolgens meerdere
keren (ingevoerde aantal keren) het geluid af.
- speel verschillende samples af en/of laat de gebruiker kiezen tussen deze samples
- schrijf Python functies om delen van je script in onder te brengen. Roep bijvoorbeeld een zelfgeschreven functie aan waaraan je het door de gebruiker ingevoerde aantal keren doorgeeft. Deze functie speelt vervolgens meerdere keren (ingevoerde aantal keren) het geluid af.
