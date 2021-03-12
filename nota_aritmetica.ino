
float notas[] = { 8.5, 6.3, 2.6} ;
int numeroNotas = 3;
float sumaNotas = 0;
float mediaAritmeticaNotas = 0;
float mediaNotas; 
 
void setup() {
  Serial.begin(9600); 
  for ( int iterador = 0; iterador < numeroNotas; iterador ++) {
    sumaNotas = sumaNotas + notas[iterador];
    Serial.println(sumaNotas);
  }
 mediaNotas= sumaNotas / numeroNotas;
   
   Serial.println("la media de las notas");
   Serial.println(mediaNotas);

}
 
void loop() {
 
}
