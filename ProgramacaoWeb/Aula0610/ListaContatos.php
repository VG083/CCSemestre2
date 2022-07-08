<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Listar Contatos</title>
</head>
<body>
    <?php
        $contatos =[
            "João" => ["imagem"=>"contato.png", "email"=>"joao@email.com", "telefone"=>"(83) 99999-9999"],
            "Maria" => ["imagem"=>"contato.png", "email"=>"maria@email.com", "telefone"=>"(83) 98888-8888"],
            "Pedro" => ["imagem"=>"contato.png", "email"=>"pedro@email.com", "telefone"=>"(83) 97777-7777"],
        ];
    ?>
    <h1>Agenda de Contatos</h1>
    <hr>
    <h3>Lista de Contatos</h3>
    <?php foreach($contatos as $nome=>$informacoes){?>
        <img src="<?=$informacoes["imagem"]?>" width="100">
        <p><strong>Nome: </strong><?=$nome?></p>
        <p><strong>Telefone: </strong><?=$informacoes["telefone"]?></p>
        <p><strong>Email: </strong><?=$informacoes["email"]?></p>
    <?php }?>
</body>
</html>