<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Valores do carro</title>
</head>
<body>
    <?php
        $valor = (float) $_POST["preco"];
    ?>
    <h1>PREÇOS DO CARRO</h1>
    <hr>
    <p><?php $avista = $valor*0.80; echo "Valor do carro à vista: R$ " . number_format($avista, 2,",",".")?></p>
    <br>
    <table border="5">
        <tr>
            <th>Preço final</th>
            <th>Quantidade de Parcelas</th>
            <th>Valor de cada parcela</th>
        </tr>
        <tr>
            <td><?php $preco = $valor*1.03; echo"R$ " . number_format($preco, 2,",",".")?></td>
            <td>6</td>
            <td><?php $parcela = $preco/6; echo "R$ " . number_format($parcela, 2,",",".")?></td>
        </tr>
        <tr>
            <td><?php $preco = $valor*1.06; echo"R$ " . number_format($preco, 2,",",".")?></td>
            <td>12</td>
            <td><?php $parcela = $preco/12; echo "R$ " . number_format($parcela, 2,",",".")?></td>
        </tr>
        <tr>
            <td><?php $preco = $valor*1.09; echo"R$ " . number_format($preco, 2,",",".")?></td>
            <td>18</td>
            <td><?php $parcela = $preco/18; echo "R$ " . number_format($parcela, 2,",",".")?></td>
        </tr>
        <tr>
            <td><?php $preco = $valor*1.12; echo"R$ " . number_format($preco, 2,",",".")?></td>
            <td>24</td>
            <td><?php $parcela = $preco/24; echo "R$ " . number_format($parcela, 2,",",".")?></td>
        </tr>
        <tr>
            <td><?php $preco = $valor*1.15; echo"R$ " . number_format($preco, 2,",",".")?></td>
            <td>30</td>
            <td><?php $parcela = $preco/30; echo "R$ " . number_format($parcela, 2,",",".")?></td>
        </tr>
        <tr>
            <td><?php $preco = $valor*1.18; echo"R$ " . number_format($preco, 2,",",".")?></td>
            <td>36</td>
            <td><?php $parcela = $preco/36; echo "R$ " . number_format($parcela, 2,",",".")?></td>
        </tr>
        <tr>
            <td><?php $preco = $valor*1.21; echo"R$ " . number_format($preco, 2,",",".")?></td>
            <td>42</td>
            <td><?php $parcela = $preco/42; echo "R$ " . number_format($parcela, 2,",",".")?></td>
        </tr>
        <tr>
            <td><?php $preco = $valor*1.24; echo"R$ " . number_format($preco, 2,",",".")?></td>
            <td>48</td>
            <td><?php $parcela = $preco/48; echo "R$ " . number_format($parcela, 2,",",".")?></td>
        </tr>
        <tr>
            <td><?php $preco = $valor*1.27; echo"R$ " . number_format($preco, 2,",",".")?></td>
            <td>54</td>
            <td><?php $parcela = $preco/54; echo "R$ " . number_format($parcela, 2,",",".")?></td>
        </tr>
        <tr>
            <td><?php $preco = $valor*1.30; echo"R$ " . number_format($preco, 2,",",".")?></td>
            <td>60</td>
            <td><?php $parcela = $preco/60; echo "R$ " . number_format($parcela, 2,",",".")?></td>
        </tr>
    </table>
</body>
</html>