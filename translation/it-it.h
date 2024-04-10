// en-us is our base language translation file
#include "translation/base.h"
static char const * const it_it[]={
	[T_ON]="ON",
	[T_OFF]="OFF",
	[T_GND]="GND",
	[T_INPUT]="INPUT",
	[T_OUTPUT]="OUTPUT",
	[T_EXIT]="Esci",
	[T_LOADED]="Caricato",
	[T_SAVED]="Salvato",
	[T_WARN_VOUT_VREF_LOW]="Il pin VOUT/VREF non è alimentato. Utilizza W per abilitare l'alimentazione o collega un'alimentazione esterna",
	[T_USE_PREVIOUS_SETTINGS]="Utilizzare le impostazioni precedenti?",
	[T_MODE_ERROR_NO_EFFECT]="ERRORE: il comando non ha effetto qui",
	[T_MODE_ERROR_NO_EFFECT_HIZ]="Il comando non ha effetto in modalità HiZ, premere 'm' per scegliere una modalità",
	[T_MODE_NO_HELP_AVAILABLE]="Nessun aiuto disponibile",
	[T_PRESS_ANY_KEY_TO_EXIT]="Premere un tasto per uscire",
	[T_PRESS_ANY_KEY]="Premere un tasto",
	[T_MODE_MODE_SELECTION]="Selezione modalità",
	[T_MODE_MODE]="Modalità",
	[T_MODE_NUMBER_DISPLAY_FORMAT]="Formato visualizzazione numero",
	[T_MODE_INVALID_OPTION]="Opzione non valida",
	[T_MODE_CHOOSE_AVAILABLE_PIN]="Scegliere il pin disponibile:",
	[T_MODE_ALL_PINS_IN_USE]="Tutti i pin sono in uso",
	[T_MODE_PULLUP_RESISTORS]="Resistenze di pull-up",
	[T_MODE_POWER_SUPPLY]="Alimentazione",
	[T_MODE_DISABLED]="Disabilitato",
	[T_MODE_DISPLAY]="Display",
	[T_MODE_DISPLAY_SELECTION]="Selezione display",
	[T_MODE_ENABLED]="Abilitato",
	[T_MODE_BITORDER]="Ordine dei bit",
	[T_MODE_BITORDER_MSB]="MSB",
	[T_MODE_BITORDER_LSB]="LSB",
	[T_MODE_DELAY]="Ritardo",
	[T_MODE_US]="us",
	[T_MODE_MS]="ms",
	[T_MODE_ADC_VOLTAGE]="Volts on",
	[T_MODE_ERROR_PARSING_MACRO]="Errore durante l'analisi della macro",
	[T_MODE_ERROR_NO_MACROS_AVAILABLE]="Nessun macro disponibile",
	[T_MODE_ERROR_MACRO_NOT_DEFINED]="Macro non definita",
	[T_MODE_TICK_CLOCK]="Tick clock",
	[T_MODE_SET_CLK]="Imposta ora",
	[T_MODE_SET_DAT]="Imposta data",
	[T_MODE_READ_DAT]="Leggi data",
	[T_MODE_NO_VOUT_VREF_ERROR]="Nessuna tensione rilevata sul pin VOUT/VREF",
	[T_MODE_NO_VOUT_VREF_HINT]="Suggerimento: Utilizza W per abilitare l'alimentazione o collega un'alimentazione esterna",
	[T_MODE_PWM_GENERATE_FREQUENCY]="Genera frequenza",
	[T_MODE_FREQ_MEASURE_FREQUENCY]="Misura frequenza",
	[T_MODE_FREQ_FREQUENCY]="Frequenza",
	[T_MODE_FREQ_DUTY_CYCLE]="Duty cycle",
	[T_PSU_DAC_ERROR]="Errore DAC del PSU, eseguire l'auto-test",
	[T_PSU_CURRENT_LIMIT_ERROR]="Corrente oltre il limite, alimentazione disabilitata",
	[T_PSU_SHORT_ERROR]="Potenziale corto circuito, alimentazione disabilitata",
	[T_PSU_ALREADY_DISABLED_ERROR]="Alimentazione già disabilitata",
	[T_SYNTAX_EXCEEDS_MAX_SLOTS]="Il risultato supera lo spazio disponibile (%d slot)",
	[T_HWSPI_SPEED_MENU]="Velocità SPI",
	[T_HWSPI_SPEED_MENU_1]="1 a 62500kHz",
	[T_HWSPI_SPEED_PROMPT]="kHz (%s%dkHz*%s)",
	[T_HWSPI_BITS_MENU]="Bit dati",
	[T_HWSPI_BITS_MENU_1]="4 a 8 bit",
	[T_HWSPI_BITS_PROMPT]="Bits (%s%d*%s)",
	[T_HWSPI_CLOCK_POLARITY_MENU]="Polarità del clock",
	[T_HWSPI_CLOCK_POLARITY_MENU_1]="Inattivo BASSO",
	[T_HWSPI_CLOCK_POLARITY_MENU_2]="Inattivo ALTO",
	[T_HWSPI_CLOCK_POLARITY_PROMPT]="Polarità",
	[T_HWSPI_CLOCK_PHASE_MENU]="Fase del clock",
	[T_HWSPI_CLOCK_PHASE_MENU_1]="FRONTE di salita",
	[T_HWSPI_CLOCK_PHASE_MENU_2]="FRONTE di discesa",
	[T_HWSPI_CLOCK_PHASE_PROMPT]="Fase",
	[T_HWSPI_CS_IDLE_MENU]="Chip select",
	[T_HWSPI_CS_IDLE_MENU_1]="Attivo ALTO (CS)",
	[T_HWSPI_CS_IDLE_MENU_2]="Attivo BASSO (/CS)",
	[T_HWSPI_CS_IDLE_PROMPT]="CS",
	[T_HWSPI_ACTUAL_SPEED_KHZ]="Velocità effettiva",
	[T_HWSPI_CS_SELECT]="CS abilitato",
	[T_HWSPI_CS_DESELECT]="CS disabilitato",
	[T_UART_SPEED_MENU]="Velocità UART",
	[T_UART_SPEED_MENU_1]="1200, 2400, 4800, 9600, 19200, 38400, 57600, 115200 ecc",
	[T_UART_SPEED_PROMPT]="Baud (%s%d*%s)",
	[T_UART_PARITY_MENU]="Parità",
	[T_UART_PARITY_MENU_1]="Nessuna",
	[T_UART_PARITY_MENU_2]="Pari",
	[T_UART_PARITY_MENU_3]="Dispari",
	[T_UART_PARITY_PROMPT]="Parità",
	[T_UART_DATA_BITS_MENU]="Bit dati",
	[T_UART_DATA_BITS_MENU_1]="5 a 8 bit",
	[T_UART_DATA_BITS_PROMPT]="Bits (%s%d*%s)",
	[T_UART_STOP_BITS_MENU]="Bit di stop",
	[T_UART_STOP_BITS_MENU_1]="1",
	[T_UART_STOP_BITS_MENU_2]="2",
	[T_UART_STOP_BITS_PROMPT]="Bit",
	[T_UART_BLOCKING_MENU]="Utilizzare funzioni bloccanti?",
	[T_UART_BLOCKING_MENU_1]="No",
	[T_UART_BLOCKING_MENU_2]="Sì",
	[T_UART_BLOCKING_PROMPT]="Bloccante",
	[T_UART_ACTUAL_SPEED_BAUD]="Velocità effettiva",
	[T_UART_BAUD]="baud",
	[T_UART_OPEN]="UART APERTA",
	[T_UART_OPEN_WITH_READ]="UART APERTA (LETTURA ASINCRONA)",
	[T_UART_CLOSE]="UART CHIUSA",
	[T_UART_NO_DATA_READ]="Nessun dato da leggere",
	[T_UART_NO_DATA_TIMEOUT]="Timeout lettura dati",
	[T_HWI2C_SPEED_MENU]="Velocità I2C",
	[T_HWI2C_SPEED_MENU_1]="1kHz a 1000kHz",
	[T_HWI2C_SPEED_PROMPT]="kHz (%s%dkHz*%s)",
	[T_HWI2C_DATA_BITS_MENU]="Bit dati",
	[T_HWI2C_DATA_BITS_MENU_1]="8",
	[T_HWI2C_DATA_BITS_MENU_2]="10",
	[T_HWI2C_DATA_BITS_PROMPT]="Bits",
	[T_HWI2C_START]="I2C START",
	[T_HWI2C_STOP]="I2C STOP",
	[T_HWI2C_ACK]="ACK",
	[T_HWI2C_NACK]="NACK",
	[T_HWI2C_NO_PULLUP_DETECTED]="nessun pull-up. Abilita l'alimentazione (W) e le resistenze di pull-up (P)",
	[T_HWI2C_TIMEOUT]="Timeout I2C",
	[T_HWI2C_I2C_ERROR]="Errore bus I2C",
	[T_HW2WIRE_SPEED_MENU]="Velocità 2WIRE",
	[T_HW2WIRE_RST_LOW]="RST BASSO",
	[T_HW2WIRE_RST_HIGH]="RST ALTO",
	[T_HWLED_DEVICE_MENU]="Tipo LED",
	[T_HWLED_DEVICE_MENU_1]="WS2812/SK6812/'NeoPixel' (interfaccia a singolo filo)",
	[T_HWLED_DEVICE_MENU_2]="APA102/SK9822 (interfaccia clock e dati)",
	[T_HWLED_DEVICE_MENU_3]="LED onboard (16 SK6812s)",
	[T_HWLED_DEVICE_PROMPT]="Tipo",
	[T_HWLED_NUM_LEDS_MENU]="Numero di LED nella striscia",
	[T_HWLED_NUM_LEDS_MENU_1]="1 a 10000",
	[T_HWLED_NUM_LEDS_PROMPT]="LED (%s%d*%s)",
	[T_HWLED_RESET]="RESET",
	[T_HWLED_FRAME_START]="INIZIO FRAME (0x00000000)",
	[T_HWLED_FRAME_STOP]="FINE FRAME (0xFFFFFFFF)",
	[T_HW1WIRE_RESET]="RESET 1-Wire",
	[T_HW1WIRE_PRESENCE_DETECT]="Presenza rilevata",
	[T_HW1WIRE_NO_DEVICE]="Nessun dispositivo rilevato",
	[T_CMDLN_INVALID_COMMAND]="Comando non valido: %s. Digita ? per ottenere aiuto.",
	[T_CMDLN_NO_HELP]="Aiuto non disponibile al momento per questo comando.",
	[T_CMDLN_LS]="ls <directory> - elenca i file nella cartella corrente o nella cartella <directory>.",
	[T_CMDLN_CD]="cd <directory> - passa alla cartella <directory>.",
	[T_CMDLN_MKDIR]="mkdir <directory> - crea <directory>.",
	[T_CMDLN_RM]="rm <file/cartella> - rimuove il file o la cartella (vuota).",
	[T_CMDLN_CAT]="cat <file> - stampa il contenuto di <file>.",
	[T_CMDLN_MODE]="m - cambia modalità protocollo. m <numero modalità> per saltare il menu.",
	[T_CMDLN_PSU_EN]="W - abilita l'alimentazione integrata, mostra il menu di configurazione.",
	[T_CMDLN_RESET]="# - resetta e riavvia Bus Pirate.",
	[T_CMDLN_BOOTLOAD]="$ - resetta ed entra in modalità bootloader per gli aggiornamenti.",
	[T_CMDLN_INT_FORMAT]="= <valore> - converte <valore> in BIN/DEC/HEX/ASCII.",
	[T_CMDLN_INT_INVERSE]="| <valore> - inverte i bit in <valore>.",
	[T_CMDLN_HELP]="? - mostra l'aiuto sui comandi e la sintassi.",
	[T_CMDLN_CONFIG_MENU]="c - apri il menu di configurazione del Bus Pirate.",
	[T_CMDLN_FREQ_ONE]="f <IOx> - misura la frequenza una volta su <IOx>.",
	[T_CMDLN_FREQ_CONT]="F <IOx> - misura continuamente la frequenza su <IOx>.",
	[T_CMDLN_PWM_CONFIG]="G - configura il generatore di frequenza (PWM) su un pin IOx disponibile.",
	[T_CMDLN_PWM_DIS]="g <IOx> - disabilita il generatore di frequenza (PWM) sul pin <IOx>.",
	[T_CMDLN_HELP_MODE]="h - mostra la schermata di aiuto specifica della modalità.",
	[T_CMDLN_HELP_DISPLAY]="hd - mostra la schermata di aiuto specifica della modalità di visualizzazione.",
	[T_CMDLN_INFO]="i - mostra le informazioni e lo stato del Bus Pirate.",
	[T_CMDLN_BITORDER_MSB]="l - imposta l'ordine di uscita del bit più significativo (MSB).",
	[T_CMDLN_BITORDER_LSB]="L - imposta l'ordine di uscita del bit meno significativo (LSB).",
	[T_CMDLN_DISPLAY_FORMAT]="o - configura il formato di visualizzazione del numero.",
	[T_CMDLN_PULLUPS_EN]="P - abilita le resistenze di pull-up integrate.",
	[T_CMDLN_PULLUPS_DIS]="p - disabilita le resistenze di pull-up integrate.",
	[T_CMDLN_PSU_DIS]="w - disabilita l'alimentazione integrata.",
	[T_CMDLN_ADC_CONT]="V <IOx> - misura la tensione in modo continuo sul pin <IOx>. Omettere il numero del pin per misurare la tensione su tutti i pin.",
	[T_CMDLN_ADC_ONE]="v <IOx> - misura la tensione una volta sul pin <IOx>. Omettere il numero del pin per misurare la tensione su tutti i pin una volta.",
	[T_CMDLN_SELFTEST]="~ - esegui un auto-test di fabbrica. Disconnetti tutti i dispositivi collegati e passa alla modalità HiZ prima di avviare il test.",
	[T_CMDLN_AUX_IN]="@ <IOx> - rendi il pin <IOx> di ingresso, leggi lo stato del pin.",
	[T_CMDLN_AUX_LOW]="a <IOx> - rendi il pin <IOx> di uscita e basso.",
	[T_CMDLN_AUX_HIGH]="A <IOx> - rendi il pin <IOx> di uscita e alto.",
	[T_CMDLN_DUMP]="dump <file> <dispositivo> - scarica i contenuti del flash <dispositivo> su <file>. Avviso: attualmente è un prototipo che funziona solo con 25LC020 in modalità SPI.",
	[T_CMDLN_LOAD]="load <file> <dispositivo> - carica i contenuti di <file> su flash <dispositivo>. Avviso: attualmente è un prototipo che funziona solo con 25LC020 in modalità SPI.",
	[T_CMDLN_DISPLAY]="d - cambia la modalità di visualizzazione, mostra il menu di selezione.",
	[T_CMDLN_LOGIC]="logic <frequenza in kHz> <campioni> <pin di trigger> <livello di trigger> - analizzatore logico. <frequenza> 1kHz-62500kHz, <pin di trigger> 0:7, <livello di trigger> 0:1.",
	[T_CMDLN_HEX]="esadecimale <file> - stampa i contenuti di <file> in esadecimale",
	[T_HELP_TITLE]="Sintassi generale CommandBus",
	[T_HELP_GENERAL_COMMANDS]="Comandi Generali",
	[T_HELP_BUS_SYNTAX]="Sintassi Bus",
	[T_HELP_DISK_COMMANDS]="Comandi Disco",
	[T_HELP_BLANK]="",
	[T_HELP_SECTION_IO]="lavora con i pin, ingresso, misurazion uscita",
	[T_HELP_SECTION_CAPTURE]="misura segnali analogici e digitali",
	[T_HELP_SECTION_CONFIGURE]="configura il terminale, LED, display e modalità",
	[T_HELP_SECTION_SYSTEM]="riavvio, aggiornamenti firmware e diagnostica",
	[T_HELP_SECTION_FILES]="elenca i file e naviga nell'archivio",
	[T_HELP_SECTION_PROGRAMS]="comandi utili e mini-programmi",
	[T_HELP_SECTION_MODE]="entra in una modalità per utilizzare i protocolli",
	[T_HELP_SECTION_SYNTAX]="invia e ricevi dati nelle modalità utilizzando la sintassi del bus",
	[T_HELP_SECTION_HELP]="ottieni ulteriore aiuto",
	[T_HELP_GREATER_THAN]="Esegui la sintassi del bus",
	[T_HELP_SYNTAX_ADC]="Misura tensione su IO.x",
	[T_HELP_CMD_LS]="Elenco file",
	[T_HELP_CMD_CD]="Cambia cartella",
	[T_HELP_CMD_MKDIR]="Crea caretlla",
	[T_HELP_CMD_RM]="Rimuovi file/cartella",
	[T_HELP_CMD_PAUSE]="In pausa fino a quando non viene premuto un tasto, per la creazione di script",
	[T_HELP_CMD_FORMAT]="Formatta disco di archiviazione (FAT16)",
	[T_HELP_CMD_CAT]="Stampa i contenuti del file come testo",
	[T_HELP_CMD_HEX]="Stampa i contenuti del file in esadecimale",
	[T_HELP_CAPTURE_SCOPE]="Interfaccia oscilloscopio",
	[T_HELP_CAPTURE_LA]="Interfaccia analizzatore logico",
	[T_HELP_CMD_FLASH]="Cancella, scrivi, leggi e verifica chip flash SPI",
	[T_HELP_1_2]="Converte x/inverte x",
	[T_HELP_1_3]="Auto test",
	[T_HELP_1_4]="Resetta il Bus Pirate",
	[T_HELP_1_5]="Vai alla modalità bootloader",
	[T_HELP_1_6]="Ritardo 1 us/MS (d:4 per ripetere)",
	[T_HELP_1_7]="Imposta lo stato IO.x (basso/ALTO/LEGGI)",
	[T_HELP_COMMAND_AUX]="Imposta lo stato IO x (basso/ALTO/LEGGI)",
	[T_HELP_COMMAND_DISPLAY]="Cambia la modalità di visualizzazione del display",
	[T_HELP_1_9]="Configura terminale, lingua, LED",
	[T_HELP_1_22]="Mostra tensione su IOx (una volta/CONT)",
	[T_HELP_1_10]="Mostra tensione tutti gli IO (una volta/CONT)",
	[T_HELP_1_11]="Misura frequenza su IOx (una volta/CONT)",
	[T_HELP_1_23]="Monitora frequenza (OFF/ON)",
	[T_HELP_1_12]="Genera frequenza (OFF/ON)",
	[T_HELP_HELP_GENERAL]="Aiuto globale, della modalità e della visualizzazione. Prova '?', '? mode' e '? display'",
	[T_HELP_HELP_DISPLAY]="Aiuto con una modalità di visualizzazione, ad es. oscilloscopio",
	[T_HELP_HELP_COMMAND]="Aggiungi -h per l'aiuto del comando: ls -h",
	[T_HELP_1_14]="Versione Bus Pirate e informazioni sullo stato",
	[T_HELP_1_15]="Ordine dei bit (MSB/LSB)",
	[T_HELP_1_16]="Cambia a una modalità di protocollo come I2C",
	[T_HELP_1_17]="Scegli come vengono visualizzati i numeri",
	[T_HELP_1_18]="Resistenze di pull-up (OFF/ON)",
	[T_HELP_1_19]="-",
	[T_HELP_1_20]="Mostra tensioni/stati",
	[T_HELP_1_21]="Alimentazione (OFF/ON)",
	[T_HELP_2_1]="Macro di modalità x/elenco completo",
	[T_HELP_2_3]="Start/Start II (dipendente dalla modalità)",
	[T_HELP_2_4]="Stop/Stop II (dipendente dalla modalità)",
	[T_HELP_2_7]="Scrivi stringa",
	[T_HELP_2_8]="Scrivi valore (decimale)",
	[T_HELP_2_9]="Scrivi valore (esadecimale)",
	[T_HELP_2_10]="Scrivi valore (binario)",
	[T_HELP_2_11]="Leggi",
	[T_HELP_SYN_CLOCK_HIGH]="Clock alto",
	[T_HELP_SYN_CLOCK_LOW]="Clock basso",
	[T_HELP_SYN_CLOCK_TICK]="Clock tick",
	[T_HELP_SYN_DATA_HIGH]="Dati alti",
	[T_HELP_SYN_DATA_LOW]="Dati bassi",
	[T_HELP_SYN_DATA_READ]="Leggi lo stato del pin dati",
	[T_HELP_2_18]="Lettura bit",
	[T_HELP_2_19]="Ripeti ad esempio r:10",
	[T_HELP_2_20]="Bit da leggere/scrivere ad esempio 0x55.2",
	[T_HELP_2_21]="Macro utente x/elenco completo",
	[T_HELP_2_22]="Assegna macro utente x",
	[T_HELP_HINT]="Concatena più comandi con ; || &&.",
	[T_HELP_FLASH]="leggi, scrivi e cancella chip flash utilizzando le informazioni SFDP se disponibili",
	[T_HELP_FLASH_ERASE]="Cancella il chip flash. flash erase [-v(erifica)]",
	[T_HELP_FLASH_WRITE]="Scrivi file sul chip flash. flash write -f <file> [-e(cancella)] [-v(erifica)]",
	[T_HELP_FLASH_READ]="Leggi il chip flash su file. flash read -f <file>",
	[T_HELP_FLASH_VERIFY]="Verifica il chip flash rispetto al file. flash verify -f <file>",
	[T_HELP_FLASH_TEST]="Cancella e scrive l'intero chip con dati fittizzi, verifica. flash test",
	[T_HELP_FLASH_PROBE]="Sonda il chip flash per ID e informazioni SFDP. flash probe",
	[T_HELP_FLASH_INIT]="Resetta e inizializza il chip flash. Predefinito se non vengono fornite opzioni. flash",
	[T_HELP_FLASH_FILE_FLAG]="Flag file. File da scrivere, leggere o verificare. flash verify -f <file>",
	[T_HELP_FLASH_ERASE_FLAG]="Flag cancella. Aggiungi cancella prima della scrittura. flash write -f <file> -e",
	[T_HELP_FLASH_VERIFY_FLAG]="Flag verifica. Aggiungi verifica dopo la scrittura o la cancellazione. flash write -f <file> -v",
	[T_INFO_FIRMWARE]="Firmware",
	[T_INFO_BOOTLOADER]="Bootloader",
	[T_INFO_WITH]="con",
	[T_INFO_RAM]="RAM",
	[T_INFO_FLASH]="FLASH",
	[T_INFO_SN]="S/N",
	[T_INFO_WEBSITE]="https://BusPirate.com/",
	[T_INFO_TF_CARD]="Archiviazione",
	[T_INFO_FILE_SYSTEM]="File System",
	[T_NOT_DETECTED]="Non rilevato",
	[T_INFO_AVAILABLE_MODES]="Modalità disponibili",
	[T_INFO_CURRENT_MODE]="Modalità attiva",
	[T_INFO_POWER_SUPPLY]="Alimentazione",
	[T_INFO_CURRENT_LIMIT]="Limite di corrente",
	[T_INFO_PULLUP_RESISTORS]="Resistenze di pull-up",
	[T_INFO_FREQUENCY_GENERATORS]="Generatori di frequenza",
	[T_INFO_DISPLAY_FORMAT]="Formato display",
	[T_INFO_DATA_FORMAT]="Formato dati",
	[T_INFO_BITS]="bit",
	[T_INFO_BITORDER]="ordine bit",
	[T_CONFIG_FILE]="File di configurazione",
	[T_CONFIG_CONFIGURATION_OPTIONS]="Opzioni di configurazione",
	[T_CONFIG_LANGUAGE]="Lingua",
	[T_CONFIG_ANSI_COLOR_MODE]="Modalità colore ANSI",
	[T_CONFIG_ANSI_TOOLBAR_MODE]="Modalità barra degli strumenti ANSI",
	[T_CONFIG_LANGUAGE_ENGLISH]="Inglese",
	[T_CONFIG_LANGUAGE_CHINESE]="Cinese (semplificato)",
	[T_CONFIG_LANGUAGE_POLISH]="Polacco",
	[T_CONFIG_LANGUAGE_BOSNIAN]="Bosniaco",
	[T_CONFIG_LANGUAGE_ITALIAN]="Italiano",
	[T_CONFIG_DISABLE]="Disabilita",
	[T_CONFIG_ENABLE]="Abilita",
	[T_CONFIG_SCREENSAVER]="Screensaver LCD",
	[T_CONFIG_SCREENSAVER_5]="5 minuti",
	[T_CONFIG_SCREENSAVER_10]="10 minuti",
	[T_CONFIG_SCREENSAVER_15]="15 minuti",
	[T_CONFIG_LEDS_EFFECT]="Effetto LED",
	[T_CONFIG_LEDS_EFFECT_SOLID]="Solido",
	[T_CONFIG_LEDS_EFFECT_ANGLEWIPE]="Pulizia angolare",
	[T_CONFIG_LEDS_EFFECT_CENTERWIPE]="Pulizia centrale",
	[T_CONFIG_LEDS_EFFECT_CLOCKWISEWIPE]="Pulizia oraria",
	[T_CONFIG_LEDS_EFFECT_TOPDOWNWIPE]="Pulizia dall'alto verso il basso",
	[T_CONFIG_LEDS_EFFECT_SCANNER]="Scanner",
	[T_CONFIG_LEDS_EFFECT_CYCLE]="Modalità party",
	[T_CONFIG_LEDS_COLOR]="Colore LED",
	[T_CONFIG_LEDS_COLOR_RAINBOW]="Arcobaleno",
	[T_CONFIG_LEDS_COLOR_RED]="Rosso",
	[T_CONFIG_LEDS_COLOR_ORANGE]="Arancione",
	[T_CONFIG_LEDS_COLOR_YELLOW]="Giallo",
	[T_CONFIG_LEDS_COLOR_GREEN]="Verde",
	[T_CONFIG_LEDS_COLOR_BLUE]="Blu",
	[T_CONFIG_LEDS_COLOR_PURPLE]="Viola",
	[T_CONFIG_LEDS_COLOR_PINK]="Rosa",
	[T_CONFIG_LEDS_BRIGHTNESS]="Luminosità LED",
	[T_CONFIG_LEDS_BRIGHTNESS_10]="10%",
	[T_CONFIG_LEDS_BRIGHTNESS_20]="20%",
	[T_CONFIG_LEDS_BRIGHTNESS_30]="30%",
	[T_CONFIG_LEDS_BRIGHTNESS_40]="40%",
	[T_CONFIG_LEDS_BRIGHTNESS_50]="50%",
	[T_CONFIG_LEDS_BRIGHTNESS_100]="100% ATTENZIONE: danneggerà la porta USB senza alimentazione esterna",
	[T_HELP_DUMMY_COMMANDS]="Comandi fittizzi validi in posizione 1",
	[T_HELP_DUMMY_INIT]="Comando di inizializzazione fittizio",
	[T_HELP_DUMMY_TEST]="Comando di test fittizio",
	[T_HELP_DUMMY_FLAGS]="Flag falsi",
	[T_HELP_DUMMY_B_FLAG]="-b richiede il pulsante Bus Pirate da premere. Non richiede parametri",
	[T_HELP_DUMMY_I_FLAG]="-i <numero intero>. Richiede parametro numerico intero",
	[T_HELP_DUMMY_FILE_FLAG]="-f <file>. Crea/scrivi/leggi <file>. Richiede parametro stringa file",
	[T_HELP_SLE4442]="Interfaccia per scheda smart SLE4442",
	[T_HELP_SLE4442_INIT]="Inizializza la scheda con ISO7816-3 ATR. Azione predefinita",
	[T_HELP_SLE4442_DUMP]="Visualizza memoria principale, di sicurezza e protetta",
	[T_HELP_SLE4442_UNLOCK]="Sblocca la scheda con il Codice di Sicurezza Programmabile (PSC)",
	[T_HELP_SLE4442_WRITE]="Scrivi dati sulla scheda (richiede sblocco)",
	[T_HELP_SLE4442_ERASE]="Cancella dati nell'intervallo 0x32-0x255 (richiede sblocco)",
	[T_HELP_SLE4442_PSC]="Cambia il Codice di Sicurezza Programmabile (PSC)",
	[T_HELP_SLE4442_ADDRESS_FLAG]="Flag indirizzo di scrittura",
	[T_HELP_SLE4442_VALUE_FLAG]="Flag valore di scrittura",
	[T_HELP_SLE4442_CURRENT_PSC_FLAG]="Flag Codice di Sicurezza Programmabile (PSC) corrente",
	[T_HELP_SLE4442_NEW_PSC_FLAG]="Flag nuovo Codice di Sicurezza Programmabile (PSC)",
	[T_HELP_GCMD_W]="alimentazione integrata con fusibile programmabile",
	[T_HELP_GCMD_W_DISABLE]="Disabilita l'alimentazione integrata",
	[T_HELP_GCMD_W_ENABLE]="Abilita l'alimentazione integrata, mostra il menu di configurazione",
	[T_HELP_GCMD_W_VOLTS]="Tensione, 0,8-5,0 volt",
	[T_HELP_GCMD_W_CURRENT_LIMIT]="Limite di corrente, 0-500mA",
	[T_HELP_GCMD_P]="resistenze di pull-up integrate",
	[T_HELP_HELP]="aiuto per i comandi e le modalità Bus Pirate",
	[T_HELP_SYS_COMMAND]="Comandi per accedere al sistema di aiuto",
	[T_HELP_SYS_DISPLAY]="Mostra l'aiuto sulla modalità di visualizzazione (ad es. oscilloscopio)",
	[T_HELP_SYS_MODE]="Mostra comandi e aiuto specifici della modalità",
	[T_HELP_SYS_HELP]="Come utilizzare il sistema di aiuto",
	[T_HELP_GCMD_SELFTEST]="esegui un'autotest completo del sistema",
	[T_HELP_GCMD_SELFTEST_CMD]="Esegui autotest",
	[T_HELP_GCMD_SELFTEST_H_FLAG]="Aiuto autotest",
	[T_HELP_AUXIO]="imposta lo stato del pin IO, leggi i pin di input",
	[T_HELP_AUXIO_LOW]="Output, basso/0. Riserva il pin per l'output",
	[T_HELP_AUXIO_HIGH]="Output, alto/1. Riserva il pin per l'output",
	[T_HELP_AUXIO_INPUT]="Input, leggi stato. Rilascia il pin riservato",
	[T_HELP_AUXIO_IO]="Numero pin IO, 0-7",
	[T_HELP_DISK_HEX]="Stampa i contenuti del file in formato esadecimale",
	[T_HELP_DISK_HEX_FILE]="Nome del file in formato 8.3 (esempio1.bin)",
	[T_HELP_DISK_HEX_ADDR]="Mostra l'offset dell'indirizzo",
	[T_HELP_DISK_HEX_ASCII]="Mostra anche il dump ASCII",
	[T_HELP_DISK_HEX_SIZE]="Imposta la dimensione della riga in byte",
	[T_HELP_DISK_CAT]="Stampa i contenuti del file come testo",
	[T_HELP_DISK_CAT_FILE]="Nome del file in formato 8.3 (esempio1.txt)",
	[T_HELP_DISK_MKDIR]="Crea una cartella su archiviazione interna",
	[T_HELP_DISK_MKDIR_DIR]="Nome della cartella, max 8 caratteri",
	[T_HELP_DISK_CD]="Cambia cartella su archiviazione locale",
	[T_HELP_DISK_CD_DIR]="Nome della cartella, max 8 caratteri",
	[T_HELP_DISK_RM]="Elimina file o cartella su archiviazione locale",
	[T_HELP_DISK_RM_FILE]="Nome del file da eliminare, formato 8.3",
	[T_HELP_DISK_RM_DIR]="Nome della cartella da eliminare, max 8 caratteri",
	[T_HELP_DISK_LS]="Elenca file e cartelle su archiviazione locale",
	[T_HELP_DISK_LS_DIR]="Elenco contenuti di questa cartella, opzionale",
	[T_HELP_DISK_FORMAT]="Cancella e formatta l'archiviazione interna nel formato FAT16",
	[T_HELP_DISK_FORMAT_CMD]="Tutti i dati verranno persi, rispondi 's' due volte per continuare",
	[T_HELP_VADC]="misura la tensione sui pin IO",
	[T_HELP_VADC_SINGLE]="Misurazione singola",
	[T_HELP_VADC_CONTINUOUS]="Misurazione continua",
	[T_HELP_VADC_IO]="Numero pin IO, 0-7",
	[T_HELP_I2C_SCAN]="scansione degli indirizzi I2C, con opzionale numero di parte",
	[T_HELP_I2C_SCAN_VERBOSE]="Modalità dettagliata, stampa potenziali numeri di parte",
	[T_HELP_FLAG]="Ottieni aiuto aggiuntivo",
	[T_HELP_I2C_SI7021]="Leggi temperatura e umidità dal sensore SI7021/HTU21/SHT21",
	[T_HELP_I2C_MS5611]="Leggi temperatura e pressione dal sensore MS5611",
	[T_HELP_I2C_TSL2561]="Leggi l'intensità luminosa (LUX) dal sensore TSL2561",
	[T_HELP_1WIRE_SCAN]="scansiona per dispositivi 1-Wire",
	[T_HELP_1WIRE_DS18B20]="Interroga il sensore di temperatura DS18B20",
	[T_HELP_UART_BRIDGE]="apre UART con IO dati grezzi, modalità bridge USB-seriale",
	[T_HELP_UART_NMEA]="analizza i dati GPS NMEA",

};

static_assert(count_of(it_it)==T_LAST_ITEM_ALWAYS_AT_THE_END, "Missing it_it translations!");