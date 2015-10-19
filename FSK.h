#ifndef _FSK_H_
#define _FSK_H_

// Um eine enum vorab zu deklarieren, muss der Typ (short) angegeben werden.
// Dies benötigt C++11.
enum fsk : short;

// Alles zwischen 0 und 5 soll FSK0 sein, usw.
enum fsk intToFsk(int i);

// Der Zahlenwert FSK16 => 16.
int fskToInt(enum fsk f);

#endif
