# uulmduino

![Yay!](handbuch/img_uulm/titel.jpg)

Eine Mischung aus Arduino (besser gesagt dem [Diavolino von Evil Mad Scientist Labs](http://www.evilmadscientist.com/2010/diavolino/)) und der [TV-B-Gone-Version von Ken Shirriff](https://github.com/shirriff/Arduino-TV-B-Gone). Auf Basis des Diavolino und mit Hilfe des [Sparkfun Inventors' Kit](https://www.sparkfun.com/products/12060) von der [Arbeitsgruppe WissenSchaffer](http://www.uni-ulm.de/in/fakultaet/studieninteressierte/wissenschaffer.html) entwickelt für den Girls'Day 2015 an der Uni Ulm.

## Handbuch bauen

Das Handbuch ist [im Ordner "handbuch"](handbuch/) und liegt als Markdown vor. Es kann mit Pandoc nach PDF exportiert werden:

`pandoc anleitung.md -o anleitung.pdf --latex-engine=xelatex --variable geometry="a5paper" --variable mainfont="Droid Sans"`

Wer das Projekt nachmachen möchte, findet im handbuch-Ordner auch eine skizzenhafte Anleitung, was hinter den Kulissen passieren muss. Pull-Requests zur Verbesserung sind gerne gesehen!

## Dankeschöns

 * Leiterplattentechnik der Uni Ulm für die gute Beratung und die Platinenfertigung
 * Maria Aufheimer, Robien Baldrich, Dominic Meißner, David-1 Schmid für Bugfixing und Input
 * Juliane Wessalowski für den Betatest
 * Alle Beitragenden, deren Basismaterial unter Freier Lizenz wir verwenden durften!

## Changelog
 * 2015-04-22 Erste Version
 * 2015-04-22 Übersetzte Experimente aus dem SIK hinzugefügt
 * 2015-04-22 KiCad-Quellen hinzugefuegt
 * 2015-08-26 Revision 2 mit umfangreicherererer KiCad-Quellenlage und einigen gefixten Fehlern. Noch nicht praxiserprobt!
 * 2015-11-16 Fehler in rev2 vermerkt und [BOM](bom.md) hinzugefügt, Fehler im Handbuch korrigiert
 * 2016-04-12 Erster Aufschlag einer [Anleitung für KursleiterInnen](handbuch/fuer%20kursleiter_innen.md)

## Bekannte Fehler (Revision 2)
 * Bei allen Transistoren sind B und E vertauscht :(

## Bekannte Fehler (Revision 1, veraltet)
 * IR-Sender ist auf dem Board mit Pin 9 verbunden → Sollte Pin 10 sein (Fixed in rev2)
 * DC-In-Buchse hat Masse auf dem mittleren Pin, sollte eigentlich andersherum sein (Fixed in rev2)
 * Bohrlöcher für die Zugentlastung der Batteriekastenzuleitungen sind zu klein (Fixed in rev2)
 * Beschriftungen könnten besser sein (Sort of fixed in rev2)
 * KiCad-Files sind sehr unorganisiert (Sort of fixed in rev2)
