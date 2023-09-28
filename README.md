# ICSP
[Buy on Tindie](https://www.tindie.com/products/chris_maker_/attiny85-uploader/)

Con questo shield è possibile caricare il bootloader Arduino su microcontrollori come l'Atmega329P (Arduino Uno) o quelli della famiglia Attiny, è anche possibile
caricare il tuo sketch senza bisogno di interfaccia USB/UART.
Lo shield dispone di zoccolo per programmare un Attiny85 DIP, a bordo sono presenti tre led di segnalazione: **Power**, **Programming** e **Error**. 
Prima di tutto dovrai caricare su una scheda Arduino UNO lo sketch **ArduinoISP** che trovi nella sezione **Esempi** 


Ecco il pinout della porta ICSP e il pinout di alcuni uC.

![ICSP Pinout](https://github.com/ChristianIannella/ICSP/blob/main/ICSP%20Pinout.png)


# ATMEGA328P

- Avvia l'IDE Arduino
- Dal menu **Strumenti** seleziona la scheda **Arduino Nano** o **Arduino Uno**
- Dal menu **Strumenti** seleziona **Programmatore** **ArduinoISP**
- Ora dovrai scrivere il bootloader dal menu **Strumenti** e cliccando su **Scrivi il bootloader**
- Fatto questo non ti resta che caricare il tuo sketch dal menu **Sketch** cliccando su **Carica tramite programmatore**


# ATTINY85

- Avvia l'IDE Arduino
- Vai in **Impostazioni** e aggiungi il seguente URL nell'apposito spazio: 
https://raw.githubusercontent.com/damellis/attiny/ide-1.6.x-boards-manager/package_damellis_attiny_index.json
- Dal **Gestore schede** cerca "Attiny" e installa i files.
- Dal menu **Strumenti** seleziona la scheda **Attiny25/45/85**
- Dal menu **Strumenti** seleziona **Programmatore** **ArduinoISP**
- Ora dovrai scrivere il bootloader dal menu **Strumenti** e cliccando su **Scrivi il bootloader**
- Fatto questo non ti resta che caricare il tuo sketch dal menu **Sketch** cliccando su **Carica tramite programmatore**


Provalo con [Dice keychaine](https://www.tindie.com/products/chris_maker_/attiny85-keychain-dice/)


