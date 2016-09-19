# Driver_fan_5V
Questo progetto permette il pilotaggio di una ventola alimentata a 5V tramite un segnale di controllo da 3.3V.
Nel mio caso specifico, avevo a disposizione la GPIO del Raspberry-pi e volevo che la ventola si accendesse e si spegnesse in modo automatico ed intelligente in base alla temperatura rilevata dalla CPU.
Qui potete trovare lo schematic del circuito che ho realizzato, e gli script che ho realizzato per il pilotaggio di un pin GPIO tramite due board: Raspberry-pi e Orange-pi


Per gestire l'accensione e lo spegnimento della ventolina ho deciso di usare crontab per l'esecuzione dello script ogni 10 minuti, e ho scritto un semplice programma in linguaggio C.
Basta installare la libreria wiringPi, compilare il programma fan_v1.c ed programmare la sua esecuzione su crontab.
Nel mio caso crontab deve chiamare il file fan.sh e quest'ultimo chiama il file compilato ed eseguibile.
