/*
SparkFun Inventor's Kit
Beispiel Sketch 01

EINE LED ZUM BLINKEN BRINGEN

  Lass eine LED für eine Sekunde leuchten, dann für eine Sekunde nicht
  leuchten… für immer!

Hardware-Anschlüsse:

  Die meisten Arduinos haben schon eine LED und einen Widerstand mit 
  Pin 13 verbunden, man braucht also keinen zusätzlichen Schaltkreis.
  
  Willst Du eine weitere LED mit Pin 13 verbinden, oder einen anderen
  Pin verwenden, musst Du folgende Schritte befolgen:

  Verbinde die positive Seite der LED (längeres Bein) mit dem 
  Arduino Digital-Pin 13 (oder einem anderen Pin – nicht vergessen,
  den Code entsprechend zu ändern!)

  Verbinde nun die negative Seite der LED (kürzeres Bein) mit einem
  330-Ohm-Widerstand (orange-orange-braun). Verbinde die andere Seite
  des Widerstands mit Masse (0 Volt bzw. Minuspol)

    pin 13 _____ + LED - _____ 330 Ohm _____ GND
  
  Wir benutzen immer einen Widerstand zwischen dem Arduino und den 
  LEDs, um zu verhindern, dass die LEDs wegen zu viel Strom 
  durchbrennen.

Dieser Sketch wurde ursprünglich von SparkFun Electronics
mit viel Hilfe der Arduino-Community geschrieben.
Der Code ist komplett frei für jegliche Verwendung.
Übersetzt von den WissenSchaffern der Universität Ulm
Besuche http://learn.sparkfun.com/products/2 für Informationen über das SIK.
Besuche http://www.arduino.cc um mehr über den Arduino zu lernen.

Version 2.0 6DE/2015
*/


// Willkommen bei Arduino!

// Falls Du hier völlig neu bist, wird es Einiges zu lernen geben,
// wir fangen einfach direkt an und erklären alles nebenbei.

// Der Arduino ist ein kleiner Computer, der Programme ausführt, 
// die Sketch genannt werden. Das sind Textdateien, die mit Hilfe
// von Anweisungen geschrieben werden, die der Computer versteht.
// Gerade liest du einen Sketch.

// Sketches beinhalten Computercode und (hoffentlich) auch 
// "Kommentare" die erklären, was der Code tut. Kommentare und 
// Code haben im Editor verschiedene Farben, damit du sie besser 
// unterscheiden kannst. 

// Das hier ist ein Kommentar - alles was nach "//" in einer Zeile
// steht, wird vom Computer ignoriert.

/* Das hier ist auch ein Kommentar – dieser kann sogar über mehrere
Zeilen gehen, allerdings muss er mit dieser Zeichenfolge beginnen und 
enden */

// Eine "Funktion" ist ein Codeblock, der einen Namen hat und eine 
// bestimmte, naja, Funktion erfüllt. Viele nützliche Funktionen sind
// schon in den Arduino eingebaut; andere wirst du selbst benennen und
// nach deinen Bedürfnissen schreiben.

// Alle Arduino-Sketches MÜSSEN zwei spezielle Funktionen haben. Sie
// heißen "setup()" und "loop()". Der Arduino führt diese Funktionen
// automatisch aus, wenn er gestartet wird oder Du den Reset-Knopf
// drückst. Typischerweise füllt man diese Funktions-"Hüllen" mit
// eigenem Code. Los geht's!

// Die setup() Funktion wird einmal ausgeführt, wenn der Sketch gestartet
// wird. Du benutzt sie für Dinge, die du als erstes oder nur einmal tun
// musst:

void setup()
{
  // Der Arduino hat 13 digitale Ein- und Ausgangspins. Diese Pins
  // können als Eingang oder Ausgang konfiguriert werden. Diese 
  // Einstellung nehmen wir mit einer eingebauten Funktion namens 
  // pinMode() vor.

  // Die pinMode()-Funktion benötigt zwei Werte, die man in die 
  // Klammern nach dem Funktionsnamen schreibt. Der erste Wert ist
  // die Pin-Nummer, der Zweite das Wort INPUT oder OUTPUT.

  // Hier werden wir pin 13 (der, der mit der LED verbunden
  // ist) als Ausgang (Output) einrichten. Das machen wir, weil wir 
  // Spannung aus dem Arduino in die LED schicken möchten.

  pinMode(13, OUTPUT);

  // Übrigens, der Arduino hat viele nützliche Funktionen wie diese
  // eingebaut. Informationen zu diesen findest du auf der Arduino
  // Webseite: http://arduino.cc/en/Reference
}

// Nachem setup() fertig ist, wird die loop() Funktion ausgeführt und
// wiederholt sich immer wieder, bis der Arduino ausgemacht oder der 
// reset-Knopf betätigt wird. Hier befindet sich üblicherweise der 
// Großteil deines Programmes:

void loop()
{
  // Die 13 digitalen Pins auf deinem Arduino sind super darin, 
  // "digitale" Signale – also „AN“ oder „AUS“ auszugeben oder
  // einzulesen. Diese Signale sind immer entweder 5 Volt (was
  // "HIGH" genannt wird), oder 0 Volt(was "LOW" genannt wird).

  // Wenn der Output "HIGH" ist, bekommt die LED an Pin 13 Spannung
  // und leuchtet. Wenn der Output "LOW" ist, bekommt die LED keine
  // Spannung und geht aus.

  // digitalWrite() ist eine eingebaute Funktion, die wir nutzen, um
  // den Output HIGH oder LOW zu setzen. Die Funktion braucht zwei
  // Werte; eine Pin-Nummer, gefolgt von dem Wort HIGH oder LOW:

  digitalWrite(13, HIGH);   // Schaltet die LED an

  // delay() ist eine Funktion, die für eine bestimmte Zeit pausiert.
  // Sie benötigt einen Wert, nämlich die Zeit, die gewartet werden soll, 
  // gemessen in Millisekunden. Eine Sekunde hat 1000 Millisekunden.
  // wenn du  also delay(1000) schreibst, wird für genau eine Sekunde
  // pausiert:
  
  delay(1000);              // Warte eine Sekunde
  
  digitalWrite(13, LOW);    // Schaltet die LED aus
  
  delay(1000);              // Warte eine Sekunde

  // Alles in Allem schaltet der obige Code die LED ein, wartet 
  // eine Sekunde, schaltet sie aus und wartet wieder eine Sekunde.

  // Wenn der Computer am Ende der loop() Funktion ankommt, startet 
  // die loop() Funktion wieder von vorne. Das Programm lässt die 
  // LED also immer wieder blinken!

  // Versuch doch einmal die 1000 in der delay() Funktion durch
  // andere Zahlen zu ersetzen und schau dir an, wie dies das Blinken
  // beeinflusst. Kleinere Zahlen lassen die Schleife schneller
  // durchlaufen. (Weißt Du, Warum?)
}

