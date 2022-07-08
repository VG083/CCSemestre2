<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Resposta</title>
</head>
<body>
    <?php

        $nome = $_POST["n"];
        $email = $_POST["e"];

    ?>
    <h1>Resposta</h1>
    <p><strong>Nome: </strong><?=$nome?></p>
    <p><strong>Email: </strong><?=$email?></p>
</body>
</html>