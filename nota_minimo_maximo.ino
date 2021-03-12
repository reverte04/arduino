
float notas[] = { 7.2, 8.5, 1.1} ;
float ponderacionNotas[] = {0.2, 0.6, 0.2};
int numeroNotas = 3;
float sumaNotas = 0;
float mediaAritmeticaNotas = 0;
float mediaNotas; 
float minimoNota = notas[0];
float maximoNota = notas[0];
 
void setup() {
  Serial.begin(9600); 
  for ( int iterador = 0; iterador < numeroNotas; iterador ++) {
    sumaNotas = sumaNotas + notas[iterador];
    Serial.println(sumaNotas);
    if(notas[iterador] < minimoNota){
      minimoNota = notas[iterador];
    }
    if(notas[iterador] > maximoNota){
      maximoNota = notas[iterador];
    }
  }
 mediaNotas= sumaNotas / numeroNotas;
   
   Serial.println("la media aritmética de las notas");
   Serial.println(mediaNotas);

}
 
void loop() {
  sumaNotas = 0;
  for ( int iterador = 0; iterador < numeroNotas; iterador ++) {
    sumaNotas = sumaNotas + notas[iterador]*ponderacionNotas[iterador];
    Serial.println(sumaNotas);
  }
  mediaNotas = sumaNotas;
    Serial.println("la media ponderada de las notas");
   Serial.println(mediaNotas);
   Serial.println("Nota máxima");
   Serial.println(maximoNota);
}
