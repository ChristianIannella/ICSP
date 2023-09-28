# ICSP
[Buy on Tindie](https://www.tindie.com/products/chris_maker_/attiny85-uploader/)

Con questo shield è possibile caricare il bootloader Arduino su microcontrollori come l'Atmega329P (Arduino Uno) o quelli della famiglia Attiny, è anche possibile
caricare il tuo sketch senza bisogno di interfaccia USB/UART.
Prima di tutto dovrai caricare su una scheda Arduino UNO lo sketch **ArduinoISP** che trovi nella sezione **Esempi** 


Ecco il pinout della porta ICSP e il pinout di alcuni uC.
![ICSP Pinout](https://github.com/ChristianIannella/ICSP/blob/main/ICSP%20Pinout.png)


Uploader per Attiny85. Con questo shield per Arduino UNO è possibile programmare il famoso microcontrollore Attiny85 sia in formato DIP che SOP. 


- Vai in **Impostazioni** e aggiungi il seguente URL nell'apposito spazio: 
https://raw.githubusercontent.com/damellis/attiny/ide-1.6.x-boards-manager/package_damellis_attiny_index.json
- Dal **Gestore schede** cerca "Attiny" e installa i files.
- Dal menu **Strumenti** seleziona la scheda **Attiny25/45/85**.
- Ora dovrai scrivere il bootloader dal menu **Strumenti** e cliccando su **Scrivi il bootloader**
- Fatto questo non ti resta che caricare il tuo sketch dal menu **Sketch** cliccando su **Carica tramite programmatore**

Lo shield dispone di zoccolo per programmare il formato DIP e pinza per formato SOP, a bordo sono presenti tre led di segnalazione: **Power**, **Programming** e **Error**. 
In oltre è presente un connettore a 4 pin collegato a **5V**, **D3**, **D4** e **GND**.


Provalo per programmare [Dice keychaine](https://www.tindie.com/products/chris_maker_/attiny85-keychain-dice/)


- Just load the **ArduinoISP** sketch that you find in the **Examples** section into an Arduino UNO
- Now go to **Settings** and add the following URL in the space provided:
https://raw.githubusercontent.com/damellis/attiny/ide-1.6.x-boards-manager/package_damellis_attiny_index.json
- From the **Board Manager** search for "Attiny" and install the files.
- From the **Tools** menu select the **Attiny25/45/85** board.
- Now you will have to write the bootloader from the **Tools** menu and clicking on **Write the bootloader**
- Once this is done you just have to upload your sketch from the **Sketch** menu by clicking on **Upload via programmer**



The shield has a socket for programming the DIP format and a clamp for the SOP format, on board there are three LEDs: **Power**, **Programming** and **Error**.
In addition there is a 4-pin connector connected to **5V**, **D3**, **D4** and **GND**.


Try it to program the [Dice keychaine](https://www.tindie.com/products/chris_maker_/attiny85-keychain-dice/)
