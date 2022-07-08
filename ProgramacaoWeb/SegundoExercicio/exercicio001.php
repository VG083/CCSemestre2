<?php
    #Array e valores
    $precos = [10.50, 50, 35, 58, 65, 99.9, 105, 305, 2.50];

    #Declarando variáveis
    $acumprecos = 0;
    $media;
    $maiorpreco = PHP_FLOAT_MIN;
    $menorpreco = PHP_FLOAT_MAX;
    $menorindice;

    #Acululando todos os preços em uma variável
    for($i = 0; $i < count($precos); $i++)
    {
        $acumprecos += $precos[$i];
        if($precos[$i] > $maiorpreco)
        {
            $maiorpreco = $precos[$i];
        }
        if($precos[$i] < $menorpreco)
        {
            $menorpreco = $precos[$i];
            $menorindice = $i;
        }
    }

    #Calculando a média de todos os preços
    $media = $acumprecos/count($precos);

    #Exibindo os resultados
    echo "Preço total: $acumprecos <br><br>";
    echo "Média: $media <br><br>";
    echo "Maior preço: $maiorpreco <br><br>";
    echo "Menor preço: $menorpreco <br><br>";
    echo "Indice do menor preço: $menorindice <br><br>"
?>