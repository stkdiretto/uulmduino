/*
SparkFun Inventors' Kit
Beispiel Sketch 02

Potentiometer

  Miss die Position eines Potentiometers und benutze diese, um die 
  Blinkgeschwindigkeit einer LED zu steuern.
  Dreh den Griff, um sie schneller oder langsamer blinken zu lassen.
  
  Was ist ein Potentiometer?
  
  Ein Potentiometer, oder "Poti" abgekürzt, ist ein Drehregler.
  Das ist die Art von Steuerung, die man in Lautstärkereglern oder
  Dimmern für Lampen findet. Ein Potentiometer verändert den Widerstand,
  wenn dein Drehknopf gedreht wird. Benutzt man es als Spannungsteiler,
  kann der Arduino die Postion des Drehknopfs erkennen, und diesen Wert
  benutzen, um alles mögliche zu steuern (zum Beispiel die Blinkgeschwin-
  digkeit einer LED, wie wir es hier tun).
  
  Hardware-Verbindungen:
    
    Potentiometer:
    
      Potentiometer haben drei Pins. Wenn wir eines als Spannungsteiler
      benutzen, verbinden wir die äußeren Pins mit Spannung (Vcc) und 
      Masse(GND). Der mittlere Pin wird zum Signalausgang (eine Spannung, 
      die zwischen 0 Volt und 5 Volt variiert, abhängig von der Postion 
      des Einstellknopfs).
      
      Verbinde den mittleren Pin mit ANALOG IN Pin A0 am Arduino.
      Verbinde einen der äußeren Pins mit 5V.
      Verbinde den anderen äußeren Pin mit GND.
      
      (TIP: wenn dein Programm läuft und sich die Drehrichtung des Potis
      „verkehrt herum“ anfühlt, kannst du die 5V- und GND-Anschlüsse
      am Poti vertauschen, um die Richtung zu ändern.)
      
    LED:
      
      Die meisten Arduinos haben bereits eine LED und VorWiderstand, die 
      mit Pin 13 verbunden sind, also kann es sein, dass du keine zusätz-
      lichen Schaltung brauchst.

      Möchtest du allerdings eine weitere LED an Pin 13 aschließen, oder 
      einen anderen Pin benutzen, befolge diese Schritte:
      
        Verbinde die postitive Seite deiner LED (längeres Beinchen) mit 
        dem Arduino Digital-Pin 13 (oder einem anderen, digitalen Pin, 
        aber vergiss nicht, den Code so zu ändern, dass sie übereinstimmen).
        
        Verbinde die negative Seite deiner LED (kürzeres Beinchen) mit 
        einem 330-Ohm-Widerstand (orange-orange-braun).
        
        Verbinde die andere Seite des Widerstands mit GND.

Dieser Entwurf wurde ursprünglich von SparkFun Electronics mit viel Hilfe
der Arduino-Community geschrieben.
Übersetzt von den WissenSchaffern der Universität Ulm
Besuche http://learn.sparkfun.com/products/2 für Informationen über das SIK.
Besuche http://www.arduino.cc um mehr über den Arduino zu lernen.

Version 2.0 6DE/2015
*/  


// Willkommen zurück! In diesem Entwurd werden wir anfangen, 
// "Variablen" zu benutzen.

// Eine Variable ist eine benannte Zahl. Wir benutzen diese oft, um
// Zahlen zu speichern, die sich ändern – zum Beispiel Messungen aus
// der Außenwelt, oder um einen Entwurf verständlicher zu machen 
// (manchmal macht ein bezeichnender Name mehr Sinn, als eine Zahl 
// anzustarren).

// Variablen können verschiedenen "Datentypen" sein, die wir benutzen 
// werden (darf sie negativ sein? Ein Komma haben?)  Wir werden später
// mehr Datentypen einführen, aber im Moment bleiben wir bei der guten
// alten Ganzzahl – der "Integer" ("int").

// Integer sind ganze Zahlen (0, 3, 5643). Sie können negativ sein, 
// und aus Gründen, die wir jetzt nicht weiter auführen, können sie 
// einen Wert zwischen -32768 und 32767 haben. (Keine Sorge, falls du
// größere Zahlen brauchst, gibt es dafür andere Datentypen. Siehe: 
// http://arduino.cc/en/Reference/VariableDeclaration für eine Liste
// aller Datentypen, die du benutzen kannst).

// Du musst Variablen "deklarieren" bevor du sie benutzt, damit der
// Computer sie kennt.
// Hier deklarieren wir zwei Integer-Variabeln zugleich, und gleich-
// zeitig initalisieren wir sie mit genauen Werten. Wir machen das, 
// damit wir in Zukunft die Pins mit ihrem Namen, statt ihrer Nummer
// bezeichnen können. 

// Beachte, dass bei Variablennamen Groß-und Kleinschreibung zählt!
// Wenn du einen Fehler bekommst, dass eine Variable nicht deklariert
// sei, kontrolliere, ob du die Variablennamen korrekt geschrieben hast.

// Hier erzeugen wir eine Variable mit dem Namen "sensorPin" vom Typ 
// "int" und initalisieren sie mit dem Wert "0":

int sensorPin = 0;  //Das Potentiomete ist mit dem Analogen Pin 0 verbunden


int ledPin = 13;    //Die LED ist mit dem digitalen Pin 13 verbunden

// Eine Sache noch. Wenn du eine Variable außerhalb einer Funktion
// deklarierst, so wie hier, heißen sie "globale Variablen" und 
// können von allen Funktionen gesehen werden.
// Normalerweise ist es sinnvoll, die Gültigkeit einer Variable auf
// einzelne Funktionen einzuschränken – aber da wir gerade erst an-
// fangen, reichen globale Variablen voll aus.
 
void setup()   //diese Funktion wird ausgeführt, sobald der Sketch läuft
{
  // Wir benutzen Pin 13, um die LED anzusteuern – also müssen wir ihn 
  // als Ausgang konfigurieren.
  
  // Da wir bereits eine Variable mit dem Namen ledPin auf Pin 13
  // gesetzt haben, können wir "ledPin" anstatt Pin 13 benutzen.
  // Dies macht den Code übersichtlicher.
  
  pinMode(ledPin, OUTPUT);
  
  // Diese Zeile macht dasselbe wie "PinMode(13, OUTPUT);"
  
  // Du wunderst dich vielleicht, warum wir nicht den sensorPin als 
  // Eingang einrichten. Der Grund dafür ist, dass dies ein analoger
  // Eingang ist. Diese Pins haben die besondere Fähigkeit, verschie-
  // dene Spannungen von Sensoren wie unserem Potentiometer einzulesen.
  // Da sie immer als Eingänge benutzt werden, müssen sie nicht wei-
  // ter konfiguriert werden.
}


void loop() // Diese Funktion läuft unendlich lange, sobald setup() beendet ist
{
  // Zuerst deklarieren wir eine weitere Integer-Variable, um den
  // Wert des Potentiometers zu speichern.
  int sensorWert;
  
  // Das Potentiometer ist als Spannungsteiler eingestellt, so dass,
  // wenn du an ihm drehst, der mittlere Pin zwischen 0V und 5V ausgibt.
  // Wir haben den mittleren Pin des Potentiometers mit dem analogen
  // Eingang 0 des Arduinos verbunden.
  
  // Der Arduino kann externe Spannungen auf dem analogen Eingangspin
  // einlesen - mit Hilfe einer eingebauten Funktion, die analogRead()
  // heißt. Diese Funktion hat einen Parameter: Den analogen Pin, den
  // wir benutzen (in diesem Fall die Variable sensorPin, die wir vorher
  // auf 0 gesetzt haben). Die Funktion gibt einen Integerwert aus,
  // der zwischen 0 (0 Volt) und 1023 (5 Volt) liegt.
  // Wir speichern diesen Wert in die Variable "sensorWert":
  
  sensorWert = analogRead(sensorPin);
  
  // Jetzt lassen wir die LED blinken, so wie im ersten Beispiel.
  // Wir werden aber die Variable sensorWert nutzen, um die Blink-
  // geschwindigkeit zu ändern (je kleiner der Wert, desto schneller
  // das Blinken).
  
  // Beachte, dass wir die Variable ledPin auch hier benutzen:
  
  digitalWrite(ledPin, HIGH); //Schaltet die LED an
  
  delay(sensorWert);          // Pause, sensorWert
                              // Millisekunden lang
                  
  digitalWrite(ledPin, LOW);  //Schaltet LED aus
  
  delay(sensorWert);          // Pause, sensorWert
                              // Millisekunden lang
  
  // Denk daran, dass loop() sich unendlich wiederholt, also passiert
  // alles hier drin unendlich lang wieder von vorne.
  }
