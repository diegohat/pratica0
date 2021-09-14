**Problema 0**

O Maximum-Subarray Problem é um conhecido problema computacional que pede que seja encontrada a subsequência contígua de números cuja soma seja máxima em uma determinada sequência de números.
Consideremos a sequência -2, 1, -3, 4, -1, 2, 1, -5, 4. A subsequência contígua de números de soma máxima é 4, -1, 2, 1, cuja soma é 6.
Este problema foi proposto originalmente em 1977, por Ulf Grenander como um modelo simplificado para estimativa de máxima verossimillhança entre padrões em imagens digitalizadas. (CARVALHO, 2019)

Para realizar a solução do problema, foi utilizado o método de divisão e conquista que consiste em dividir o vetor ao meio e calcular as somas máximas a esquerda do ponto médio e as somas máximas a direita. Além da comparação entre as duas, é necessário realizar a soma do cruzamento entre o ponto médio, considerando as somas máximas a partir do centro.

As somas são realizadas com chamadas recursivas do método MaxSubArray.

Após comparar, o algoritmo finaliza com a impressão do valor da soma máxima.
