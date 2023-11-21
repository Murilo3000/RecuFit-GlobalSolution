<h1># RecuFit - GlobalSolution</h1>

O RecuFit é um aplicativo dedicado à reabilitação física, projetado para fornecer aos usuários uma experiência personalizada e eficaz. Este repositório contém o código-fonte que integra a medição fictícia da frequência cardíaca com a plataforma TagoIO usando MQTT. Isso permite monitorar e enviar dados simulados de frequência cardíaca para análise e acompanhamento.

<h2>Configuração do Ambiente</h2>
Antes de usar o RecuFit, certifique-se de ter as seguintes dependências instaladas:

- <h3>Arduino IDE:</h3> O ambiente de desenvolvimento integrado para programar o ESP8266.
- <h3>ArduinoJson Library:</h3> Utilizada para formatar o documento JSON contendo dados de frequência cardíaca.
- <h3>EspMQTTClient Library:</h3> Responsável por gerenciar a comunicação MQTT entre o dispositivo e o servidor MQTT (no caso, mqtt.tago.io).

<h2>Configuração de Rede e MQTT</h2>
Antes de usar o código, é necessário realizar algumas configurações:

1. Altere as informações da rede Wifi:

   ```cpp
   char wifiSsid[] = "SUA_REDE_WIFI"; // Nome da rede Wi-Fi
   char wifiPass[] = "SUA_SENHA_WIFI"; // Senha da rede Wi-Fi

2. Altere as informações do Tago.io e seu Token de autenticação
   
   ```cpp
   char serverAddress[] = "https://admin.tago.io/devices/SEU_DISPOSITIVO"; // Endereço do servidor Tago.io
   char tokenHeader[] = "SEU_TOKEN_TAGO"; // Token de autenticação Tago.io

<h2>Utilização</h2>
O código gera dados fictícios de frequência cardíaca e os envia para o servidor TagoIO usando o protocolo MQTT. Os dados são encapsulados em um formato JSON, contendo a variável "frequencia" e um valor aleatório simulado.

<h3>Observação:</h3> Este é um exemplo básico para fins de simulação. Em um cenário real, os dados de frequência cardíaca seriam adquiridos de sensores reais.

<h2>Contribuições</h2>
Contribuições são bem-vindas! Sinta-se à vontade para abrir problemas, solicitações de pull ou fornecer sugestões para aprimorar o RecuFit.

<h2>Licença</h2>
Este projeto é licenciado sob a Licença MIT. Sinta-se à vontade para usar, modificar e distribuir conforme necessário.
