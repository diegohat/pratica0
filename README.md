# Trabalho Extra - Algoritmos e Estrutura de Dados #
Trabalho realizado para a disciplina de Algoritmos e Estrutura de Dados I

CEFET - MG Campus V

Diego Trindade

## Compilar ##
```
  make
  make run
```

## Problema 0 ##

O Maximum-Subarray Problem é um conhecido problema computacional que pede que seja encontrada a subsequência contígua de números cuja soma seja máxima em uma determinada sequência de números. Consideremos a sequência -2, 1, -3, 4, -1, 2, 1, -5, 4. A subsequência contígua de números de soma máxima é 4, -1, 2, 1, cuja soma é 6. Este problema foi proposto originalmente em 1977, por Ulf Grenander como um modelo simplificado para estimativa de máxima verossimillhança entre padrões em imagens digitalizadas. (CARVALHO, 2019)

Para realizar a solução do problema, foi utilizado o método de divisão e conquista que consiste em dividir o vetor ao meio e calcular as somas máximas a esquerda do ponto médio e as somas máximas a direita. Além da comparação entre as duas, é necessário realizar a soma do cruzamento entre o ponto médio, considerando as somas máximas a partir do centro.

As somas são realizadas com chamadas recursivas do método MaxSubArray.

Após comparar, o algoritmo finaliza com a impressão do valor da soma máxima.

## Problema 2 ##

Avaliando o custo computacional de todas as sequências, chega-se a conclusão que todas podem ser classificadas com **custo igual a n**.

```
for (int i = 0; i < count; i++) // custo do laço = n (repete n vezes)
    {
        printf("%li, ", number);
        sum += 2;
        number += sum;
    }

```

* **Θ(2n)** -> Se o limite assintótico restrito é igual a 2n, logo a função n não está em Θ(2n) pois tem complexidade diferente de 2n.

* **Ω(n^2)** -> Se o limite assintótico inferior é igual a n^2, logo a função n está em Ω(n^2) pois tem complexidade inferior a n^2.

* **O(n)** -> Se o limite assintótico superior é igual a n, logo a função n está em O(n) pois tem complexidade igual a n.

## Problema 3 ##

Considerando f(n) = x^3

* Para g(n) = x^2, f(n) = O(g(n)). Ou seja, se g(n) tem custo igual a 1 e o pior caso (limite superior) é n, então g(n) está em O(n).

* Para g(n) = x^2 + x^3, f(n) = O(g(n)). Ou seja, se g(n) tem custo igual a 1 e o pior caso (limite superior) é n, então g(n) está em O(n).

* Para g(n) = nlogn, f(n) != O(g(n)), pois se o limite superior é igual a n e nlogn é tem custo superior, logo g(n) não está em O(n).
