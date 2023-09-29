# Musical_Arduino

O Arduíno Musical foi um projeto pensado para um evento de portas abertas da faculdade de graduação Ilum (IPA - Ilum de Portas Abertas). O arduíno é uma plataforma eletrônica de código aberto que é capaz de integrar sensores ou controlar qualquer objeto remotamente. Com isso, pudemos utilizar o Arduino Leonardo para controlar alguns dispositivos como: LEDs, um buzzer e um sensor ultrassônico. Com isso, funções foram definidas no softaware Arduino IDE, com a intenção de controlar esses dispositivos para tocar músicas de forma interativa.

## Programação

- O buzzer foi programado a partir da função "tocar", a qual recebe duas listas: a primeira é uma lista com as notas musicais, pausas e repetições de notas seguidas, enquanto a segunda seria o tempo de cada um desses toques, em milissegundos, na mesma ordem da lista anterior. Com essas listas, o buzzer tocaria em determinada frequência ou então seria desligado.
- O sensor ultrassônico foi programado para a seleção da lista que ativaria a função "tocar" por meio da distância de algo mais próximo frente à este, já que para cada música (4 foram escolhidas, além da sirene policial) havia duas listas já citadas anteriormente. A distância poderia ser escolhida colocando qualquer tipo de material (até mesmo a mão) frente ao sensor. É importante ressaltar que o sensor só funciona com uma biblioteca instalada no software para este.
- Os LEDs também foram programados na função "tocar", já que para cada nota musical um dos LEDs, organizados na ordem das notas, deveria acender.
- Um dos toques escolhidos foi uma sirene policial, que teve de ser programada com duas funções diferentes, uma para os LEDs azul e vermelho, e outra para o aumento da freqûencia do buzzer gradativamente.
- Além das funções, foram definidas variáveis e as portas a serem utilizadas no Arduino.

## Circuito

Um modelo do circuito utilizado está disponível para visualização no link a seguir: *https://www.tinkercad.com/things/d6lGpOUjG3w*
