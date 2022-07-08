<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Exercicio</title>
</head>
<body>
    <?php

        $num1 = 5;
        $num2 = 10;
        $soma = $num1 + $num2;
        $subtracao = $num1 - $num2;
        $multiplicacao = $num1 * $num2;
        $divisao = $num1 / $num2;

    ?>
    <p>Primeiro número: <?php echo $num1 ?></p>
    <p>Segundo número: <?php echo $num2 ?></p>
    <p>Soma: <?php echo $soma ?></p>
    <p>Subtração: <?php echo $subtracao ?></p>
    <p>Multiplicação: <?php echo $multiplicacao ?></p>
    <p>Divisão: <?php echo $divisao ?></p>
</body>
</html>