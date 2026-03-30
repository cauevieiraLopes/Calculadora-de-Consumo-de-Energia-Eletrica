# 💡 Calculadora de Consumo de Energia Elétrica
Este projeto é uma atividade prática desenvolvida para a faculdade, com o objetivo de exercitar conceitos de Lógica de Programação e Linguagem C++. O programa calcula o valor total de uma conta de luz baseado em faixas de consumo progressivas (kWh).

# 🚀 Funcionalidades
O sistema solicita o consumo mensal em kWh e calcula o valor final a pagar seguindo regras de tarifação por faixas:

|Faixa de Consumo|Valor por kWh|
|---|---|
|Até 100 kWh|"R$ 0,40"|
|De 101 a 299 kWh|"R$ 0,65"|
|Acima de 300 kWh|"R$ 0,90"|

# 🛠️ Tecnologias Utilizadas
Linguagem: C++

Conceitos aplicados:

* Estrutura de repetição do-while para validação de entrada.

* Estruturas condicionais encadeadas (if, else if).

* Cálculo de tarifas progressivas (acumuladores).

# 📋 Como funciona o código
* Validação: O programa não aceita valores menores ou iguais a zero, repetindo a pergunta até que um valor válido seja inserido.

* Cálculo Progressivo: O cálculo não é linear; ele respeita o valor de cada faixa. Por exemplo, se você consome 150 kWh, os primeiros 100 são cobrados a R$ 0,40 e os 50 restantes a R$ 0,65.

* Saída: Exibe o valor total formatado no console.

# ⚙️ Como executar
Caso queira testar o código localmente:

1. Tenha um compilador de C++ instalado (como o g++).

2. Clone este repositório.

3. Compile o arquivo: g++ nome_do_arquivo.cpp -o calculadora

4. Execute: ./calculadora
