# Aufgabe: Bitdarstellung eines `float` mit Unions untersuchen

## Ziel
Schreibe ein C-Programm, das die **binäre Darstellung eines `float`-Wertes** auf Byte- und Bit-Ebene ausgibt.  
Dabei soll gezeigt werden, wie ein `union` verwendet werden kann, um **denselben Speicherbereich** sowohl als `float` als auch als Folge von Bytes zu interpretieren.

## Anforderungen

1. Definiere ein `union`, das:
   - einen `float` enthält
   - zusätzlich ein `unsigned char`-Array besitzt, das exakt so groß ist wie ein `float`

2. Lies vom Benutzer einen `float`-Wert über die Konsole ein.

3. Greife über das `union` auf die **einzelnen Bytes** des `float`-Wertes zu.

4. Gib die Bitdarstellung des `float` aus:
   - Byteweise
   - Jedes Byte als Folge von **8 Bits**
   - Die Ausgabe soll beim **höchstwertigen Byte** beginnen (Big-Endian-Darstellung in der Ausgabe, unabhängig von der tatsächlichen Architektur).

5. Zwischen den einzelnen Bytes soll ein Leerzeichen ausgegeben werden.

6. Implementiere eine Hilfsfunktion, die:
   - ein einzelnes `unsigned char` entgegennimmt
   - dessen Bits von MSB nach LSB ausgibt

## Hinweise

- Es darf **keine Typumwandlung** (`cast`) von `float` zu Integer-Typen verwendet werden.
- Die Interpretation der Bits soll ausschließlich über das `union` erfolgen.
- Das Programm dient zu Lernzwecken und soll verdeutlichen:
  - wie `union` Speicher teilt
  - wie Gleitkommazahlen intern repräsentiert sind
  - wie Bitoperationen in C funktionieren

## Erwartetes Ergebnis

Nach Eingabe eines `float`-Wertes gibt das Programm dessen vollständige Bitdarstellung aus, aufgeteilt in vier Bytes mit jeweils acht Bits.
