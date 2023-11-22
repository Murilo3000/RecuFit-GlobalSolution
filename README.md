#Lucas Sobral Roxo RM98188 Murilo ALves Mansano RM98143
<h1># RecuFit - GlobalSolution</h1>

Este é um código em C++ desenvolvido para plataformas ESP32 que possibilita o monitoramento remoto de batimentos cardíacos utilizando a plataforma TagoIO, integrado e simulado na plataforma Wokwi. O dispositivo, nomeado "RecuFit", gera valores randômicos simulando batimentos cardíacos e os envia para a plataforma TagoIO por meio do protocolo MQTT.

<h2>Descrição do problema</h2>

A RecuFit aborda com precisão o desafio enfrentado por indivíduos que experimentam restrições de movimento devido a cirurgias debilitadoras ou dores específicas em seus corpos. O aplicativo se destaca ao personalizar regimes de exercícios com base nas informações fornecidas pelos usuários, como a área afetada, nível de dor e histórico cirúrgico. Esta abordagem permite que os usuários fortaleçam áreas específicas, promovendo uma recuperação direcionada. A integração eficiente entre usuários e médicos é um ponto forte do RecuFit, possibilitando ajustes personalizados nos regimes de exercícios com base no progresso do paciente.

<h2>Visão geral da solução</h2>

O programa de acompanhamento da frequência cardíaca integrado ao RecuFit estabelece uma conexão essencial, permitindo aos médicos monitorar em tempo real como os pacientes respondem aos exercícios recomendados. Essa integração oferece uma compreensão mais precisa do impacto fisiológico das atividades, identificando exercícios potencialmente prejudiciais. Ao utilizar dados da frequência cardíaca, os médicos podem ajustar os regimes de exercícios de maneira personalizada, otimizando a eficácia do RecuFit e proporcionando cuidados de reabilitação sob medida para cada paciente.

<h2>Pré-requisitos</h2>

<h3>Plataforma</h3> de Simulação Wokwi: Este código foi projetado para ser utilizado na plataforma de simulação Wokwi (https://wokwi.com/projects/380772716087629825).
<h3>Arduino IDE:</h3> Certifique-se de ter a Arduino IDE instalada para carregar o código no ESP32.
<h3>Bibliotecas:</h3> Instale as bibliotecas ArduinoJson e EspMQTTClient em sua Arduino IDE antes de carregar o código.

<h2>Configuração do Ambiente</h2>
Antes de utilizar o código, é necessário configurar algumas variáveis no início do código:

-Wi-Fi: Substitua "Wokwi-GUEST" e "" pelos valores da sua rede Wi-Fi e senha.
-MQTT: Configure o endereço do servidor MQTT, o usuário (geralmente "Default" para TagoIO), o código do token TagoIO e o nome do dispositivo.
-Tópico MQTT: O tópico MQTT utilizado para enviar os dados ("frequencia").

<h2>Configuração de Rede e MQTT</h2>
Antes de usar o código, é necessário realizar algumas configurações:

<h2>Utilização</h2>
-Carregue o código no seu ESP32 usando a Arduino IDE.
-Abra o Monitor Serial para visualizar os valores randômicos gerados.
-Os valores são publicados no tópico MQTT configurado e enviados para a plataforma TagoIO.

<h3>Observação:</h3> 
-O código utiliza a biblioteca 'ArduinoJson' para formatar o JSON e a biblioteca 'EspMQTTClient' para comunicação MQTT.
-O valor randômico gerado simula os batimentos cardíacos e é enviado a cada 5 segundos.
-Certifique-se de configurar corretamente as credenciais Wi-Fi, MQTT e TagoIO antes de carregar o código.

<h2>Contribuições</h2>
Contribuições são bem-vindas! Sinta-se à vontade para abrir problemas, solicitações de pull ou fornecer sugestões para aprimorar o RecuFit.

<h2>Licença</h2>
Este projeto é licenciado sob a Licença MIT. Sinta-se à vontade para usar, modificar e distribuir conforme necessário.
