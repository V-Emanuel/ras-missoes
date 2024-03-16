int intervals[] = { 200, 600, 1000 }; //intervalos de tempo que o led irá piscar
int repetitions = 5; //quantidades de repetições por intervalo

void setup() {
  pinMode(12, OUTPUT); //Define o pino de saída que será ligado o led
}

void loop() {
  
  size_t intervalsSize = sizeof(intervals) / sizeof(intervals[0]); //salva o tamanho do array de intervalos

  for (int i = 0; i < intervalsSize; i++) {
    for (int j = 0; j < repetitions; j++) {
      digitalWrite(12, HIGH); //liga o led
      delay(intervals[i]); //espera o intervalo de tempo da vez
      digitalWrite(12, LOW); //apaga o led
      delay(intervals[i]); //espera novamente o intervalo de tempo da vez
    }
  }
}
