<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Calculo de média</title>
</head>
<body>
    <?php

        $nome = $_POST["nome"];
        $nota1 = (float) $_POST["nota1"];
        $nota2 = (float) $_POST["nota2"];

        $media = ($nota1+$nota2)/2;

    ?>
    <p><?php echo "O aluno $nome, ficou com média $media"?></p>
</body>
</html>