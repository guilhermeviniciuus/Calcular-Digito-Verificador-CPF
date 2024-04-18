Entrada do CPF:
O programa começa pedindo que você digite um número de CPF.
O número de CPF é um número de 9 dígitos.+


Separação dos dígitos:
O código divide o número do CPF em cada dígito individual (de 1 a 9).
Por exemplo, se o CPF digitado for 123456789, ele separa os dígitos como: dig1 = 1, dig2 = 2, dig3 = 3, …, dig9 = 9.


Cálculo do primeiro dígito verificador:
Multiplica cada dígito pelo peso correspondente (10, 9, 8, …, 2) e soma os resultados.
Calcula o resto da divisão por 11.
Se o resultado for 1, o dígito verificador é 0; caso contrário, subtrai o resultado de 11.
O valor obtido é o primeiro dígito verificador.


Cálculo do segundo dígito verificador:
Similar ao primeiro dígito, multiplica cada dígito pelo peso correspondente (11, 10, 9, …, 2) e soma os resultados.
Calcula o resto da divisão por 11.
Novamente, se o resultado for 1, o dígito verificador é 0; caso contrário, subtrai o resultado de 11.
O valor obtido é o segundo dígito verificador.


Exibição do CPF completo:
O programa imprime o número do CPF junto com os dígitos verificadores calculados.
O programa imprime o número do CPF junto com os dígitos verificadores calculados.
