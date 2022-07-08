<?php
    // Declarando lista
    $produtos = [
        "produtoA" => 50.0,
        "produtoB" => 150.0,
        "produtoC" => 60.0,
        "produtoD" => 80.0,
        "produtoE" => 120.0,
        "produtoF" => 15.0,
        "produtoG" => 25,
        "produtoH" => 35.0,
        "produtoI" => 40.0];
    
    // Criando e executando função para determinar a quantidade de valores abaixo de 50
    $valorabaixode50 = function($preco){
        if($preco < 50){
            return true;
        }
    };

    $arrayfiltro = array_filter($produtos, $valorabaixode50);
    
    echo "Há " . count($arrayfiltro) . " valores abaixo de 50 no array";

    echo "<br><br>";
    
    function entre50e100($var){
        foreach($var as $nome=>$valor){
            if($valor >= 50 && $valor <= 100){
                echo "$nome está entre R$50 e R$100<br>";
            }
        }
    }

    $valoresentre50e100 = entre50e100($produtos);

    echo "<br><br>";

    // Função para calcular a média dos valores que forem superior a R$ 100,00
    function mediamaior100($var,$var1,$var2,$var3,$var4,$var5,$var6,$var7,$var8){
        $cont1 = 0;
        $cont2 = 0;
        if($var>100){
            $cont1++;
            $cont2 += $var;
        }
        if($var1>100){
            $cont1++;
            $cont2 += $var1;
        }
        if($var2>100){
            $cont1++;
            $cont2 += $var2;
        }
        if($var3>100){
            $cont1++;
            $cont2 += $var3;
        }
        if($var4>100){
            $cont1++;
            $cont2 += $var4;
        }
        if($var5>100){
            $cont1++;
            $cont2 += $var5;
        }
        if($var6>100){
            $cont1++;
            $cont2 += $var6;
        }
        if($var7>100){
            $cont1++;
            $cont2 += $var7;
        }
        if($var8>100){
            $cont1++;
            $cont2 += $var8;
        }
        $media = $cont2/$cont1;
        echo "A média de preço dos produtos com valor acima de R$100,00 é de $media";
    }

    $mediamaiorque100 = mediamaior100($produtos["produtoA"],$produtos["produtoB"],$produtos["produtoC"],$produtos["produtoD"],$produtos["produtoE"],$produtos["produtoF"],$produtos["produtoG"],$produtos["produtoH"],$produtos["produtoI"]);
?>