#include <ArduinoJson.h>    // Lib to format JSON Document
#include "EspMQTTClient.h"  // Lib to comunicate MQTT from ESP

char frequencia[100];

// MQTT and WiFi configuration
EspMQTTClient client(
  "Wokwi-GUEST",         // nome da sua rede Wi-Fi
  "",                    // senha da sua rede Wi-Fi
  "mqtt.tago.io",        // Endereço do servidor MQTT
  "Default",             // User é sempre default pois vamos usar token
  "0d9c12df-98e8-4169-84f1-0ba9807751de", // Código do Token
  "RecuFit", // Nome do device
  1883                   // Porta de comunicação padrão
);

void setup() {
  // Inicializar o gerador de números randômicos com o tempo atual
  randomSeed(analogRead(0));
  Serial.begin(9600);
}

void onConnectionEstablished()
{}

void loop() {
  // Gerar e imprimir um valor randômico
  int frequenciaRandomica = random(0, 200); // Gera um valor randômico entre 0 e 199
  Serial.print("Valor randômico: ");
  Serial.println(frequenciaRandomica);

  StaticJsonDocument<300> frequenciaJson; 
  frequenciaJson["variable"] = "frequencia";
  frequenciaJson["value"] = frequenciaRandomica;

  serializeJson(frequenciaJson, frequencia);

  // Enviando o JSON serializado para o tópico "frequencia cardiaca"
  client.publish("frequencia", frequencia);

  // Aguardar 1 segundo entre cada iteração
  delay(5000);

  // Executar o loop do cliente MQTT
  client.loop();
}