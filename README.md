# uulmduino

![Yay!](handbuch/img_uulm/titel.jpg)

Eine Mischung aus Arduino (besser gesagt dem [Diavolino von Evil Mad Scientist Labs](http://www.evilmadscientist.com/2010/diavolino/)) und der [TV-B-Gone-Version von Ken Shirriff](https://github.com/shirriff/Arduino-TV-B-Gone). Auf Basis des Diavolino und mit Hilfe des [Sparkfun Inventors' Kit](https://www.sparkfun.com/products/12060) von der [Arbeitsgruppe WissenSchaffer](http://www.uni-ulm.de/in/fakultaet/studieninteressierte/wissenschaffer.html) entwickelt für den Girls'Day 2015 an der Uni Ulm.

## Handbuch bauen

Das Handbuch ist [im Ordner "handbuch"](handbuch/) und liegt als Markdown vor. Es kann mit Pandoc nach PDF exportiert werden:

```
pandoc anleitung.md -o anleitung.pdf --latex-engine=xelatex --variable geometry="a5paper" --variable mainfont="Droid Sans" 
```

## Changelog
 * 2015-04-22 Erste Version

## Bekannte Fehler
 * IR-Sender ist auf dem Board mit Pin 9 verbunden → Sollte Pin 10 sein
 * DC-In-Buchse hat Masse auf dem mittleren Pin, sollte eigentlich andersherum sein
 * Bohrlöcher für die Zugentlastung der Batteriekastenzuleitungen sind zu klein
 * Beschriftungen könnten besser sein
