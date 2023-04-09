# 42_piscine

Esse é um breve relato da minha experiência na piscine da 42 Porto, entre os dias 06 de março à 31 de março de 2023.

## 42 Porto
Em contrução.

### Piscine
A piscine é a sua entrada na 42. Durante um período de 26 dias bem intensos, você será submetido a muita pressão e será desafiado a cumprir vários objetivos. É claro que vais falhar, e não é um problema. Tens que saber lidar com a frustração e aprender para não falhar de novo no mesmo erro.

Os conhecimentos que são passados na piscine são:
- **Shell**
    - Saber utilizar linhas de comando UNIX;
    - Criar e modificar arquivos usando o vim;
    - Criar e execurar arquivos .sh em linux;
- **Git**
    - Clonar repositórios;
    - Comandos git para enviar seus repositórios;
- **Linguagem C**
    - Variáveis, Loops e funções;
    - Compilar e executar um programa;
    - Funções iterativas;
    - Funções recursivas;
    - Malloc e free;
    - Open, read e close;
    - Header
    - Makefile;
    - Struc.

## Listas de exercício

|__Listas__|__Percentual__|__X__|
|-|-|-|
|[Sh00](shell00/)|100|✅|
|[Sh01](shell01/)|100|✅|
||||
|[C00](C00/)|100|✅|
|[C01](C01/)|100|✅|
|[C02](C02/)|100 |✅|
|[C03](C03/)|100|✅|
|[C04](C04/)|100 |✅|
|[C05](C05/)|80 |✅|
|[C06](C06/)|100|✅|
|[C07](C07/)|60|✅|
|[C08](C08/)|100|✅|
|[C09](C09/)|Not Rated|❌|
|[C10](C10/)|Not Rated|❌|
|[C11](C11/)|Not Rated|❌|
|[C12](C12/)|Not Rated|❌|
|[C13](C13/)|Not Rated|❌|
|[BSQ](BSQ/)|Norm error|❌|


### Avaliações
Após terminar cada lista de exercícios, você deve submeter o que fez da seguinte forma:

```
git add .
git commit -m "done"
git push
```
Depois deve submeter na intranet e agendar as avaliações.

#### Postos de Avaliação
Cada aluno começa com 5 pontos de avaliação.
Cada vez que você solicita uma avaliação, perde 1 ponto.
Cada vez que avalia outro aluno, ganha 1 ponto.
Administre bem seus pontos, para não ficar com menos de 5, assim consegue ficar sempre tranquilo.

## Rush
O Rush é um trabalho em grupo opcional, que deve ser realizado de sexta até domingo 21:42.
Os grupos são escolhidos aleatoriamente e a quantidade normalmente é de 3 pessoas, mas pode haver grupos com 4 ou 2, caso o numero de inscritos não seja divisível por 3.
O Rush é avalizado por um dos staffs durante a quarta ou quinta-feira.
Critérios de avaliação costumam ser:
- Todos do grupo tem que ser capazes de explicar o código e responder qualquer pergunta;
- Código deve estar na pasta ex00
- O código tem que estar dentro das normas (Norminette);
- Precisa ser compilado com as Flags -Wall -Wextra -Werror;
- Todas as opções de inputs errados possíveis e mensagens de erro conforme subject;
- Teste de várias soluções possíveis para avaliar se o resultado é o esperado.

### Rush00
É o mais fácil e é possível terminar em uma tarde. Geralmente as pessoas perdem ponto por coisas mínimas.
Tenham atenção para ver se o código compila com as Flags, não se esqueça da norminette e cuidem para os valores de linhas e colunas serem maiores do que 0. (As pessoas geralmente não passam por esse erro)
Façam de uma forma que consigam ganhar os pontos bónus sem fazer muitas alterações no código.

### Rush01
É bem mais complexo que o primeiro. Enquanto no primeiro é possível terminar rapidamente, nesse será preciso provavelmente se dedicar todo o fim de semana. (Não se esqueça que o prazo de entrega é 21:42 de domingo)
Uma grande dificuldade que tivemos foi de manter as regras da norminette nesse código. Principalmente a regra de ter menos de 25 linhas.
A solução que usamos foi de criar todas as soluções possíveis e enquanto isso analisar se a solução criada atende as condições das regras do nosso skyscrapers. 

Para o segundo rush, é bom ter os seguintes conhecimentos: 
- Malloc 
- Free
- Funções recursivas

### Rush02
Como escolhi fazer o BSQ, preferi não pegar o último rush. Outro motivo foi ainda não ter feito as listas C08 e C09.

Para o último rush, é bom ter os seguintes conhecimentos: 
- Makefile
- Header
- struct
- Malloc
- free
- open
- read
- close

## Exames
É preciso sempre se registar nos exames, tanto no projeto quanto no calendário (perdi o meu primeiro exame por não me registar no calendário). Acontecem todas as sextas durante a piscine. 

Tenham atenção e sejam ágeis, todos tem apenas 10 min para fazer login no exame, caso contrário, perde o exame.

### Exames em geral
Os três primeiros exames têm 10 questões e cada questão vale 10 pontos.
As questões são liberadas uma de cada vez e só é possível passar para a seguinte se completar a que esta no momento.

Podemos submeter as questões várias vezes, até concluir com sucesso. Cada vez que falhamos, temos que esperar um tempo para submeter novamente (parecido com o Retry das listas). Esse tempo vai aumentando cada vez que submete.

Nos dois primeiros testes, podemos ver os traces de erros das questões, mas nos dois últimos exames ficamos completamente no escuro e temos que buscar os erros por conta própria. Na maior parte das vezes saímos da prova com a questão feita e sem saber o porque estamos errando.

### Exame final
O exame final começa as 10h da manhã e vai até 18h (A maior parte das pessoas saem bem antes). Cada questão vale 6 pontos, então para conseguir pelo menos 30 é preciso acetar muito mais questões.


## Norminette
A norminette é o que vai verificar se seus códigos estão escritos de acordo com as normas de código da 42.
Essas normas vão te acompanhar durante toda piscine, com exceção do teste final.

Algumas regras da norminette são:
- Não podemos usar loops for, do while, switch, case or goto;
- Função não pode ter mais do que 4 parâmetros;
- Função não pode ter mais do que 5 variáveis declaradas;
- Função não pode ter mais do que 25 linhas,
- Não pode ter mais do que 5 funções por arquivo;
- Não é permitido declarar variável e dar o valor na mesma linha,
- Indentação, espaços extras, tabs ao invés de espaços, linhas vazias entre outros, são sempre levados em conta.

## Eventos
Os eventos costumam acontecer na segunda ou quarta de tarde. 
Costumam ser bons momentos para interagir e conhecer melhor os colegas, principalmente os que não vão no mesmo horário que você.
Alguns eventos falam sobre coisas que são muito importantes para as fazes seguintes da piscine, então aconselho muito irem em todos eventos.