<?php

    $precos = [10.50, 50, 35, 58, 65, 99.9, 105, 305, 2.50];

    //Declaração
    function somartotal(array $array):float{
        $acumulador = 0;
        for($i = 0; $i < count($array); $i++){
            $acumulador += $array[$i];
        }
        return $acumulador;
    }

    function mediaprecos(array $a):float{
        $acum = array_sum($a);
        return $acum/count($a);
    }

    $mediaprecosarrow = fn(array $precos) => array_sum($precos)/count($precos);

    function verificarmaior(array $precos):float{
        $maiorpreco = PHP_FLOAT_MIN;

        for($i = 0; $i < count($precos); $i++){
            if($precos[$i] > $maiorpreco){
                $maiorpreco = $precos[$i];
            }
        }

        return $maiorpreco;
    }

    function verificarmenor(array $precos):float{
        $maiorpreco = PHP_FLOAT_MAX;
        $menorindicevalor = 0;
        $resultado = [];

        for($i = 0; $i < count($precos); $i++){
            if($precos[$i] < $maiorpreco){
                $menorpreco = $precos[$i];
                $menorindicevalor = $i;
            }
        }

        $resultado = $menorpreco;
        $resultado = $menorindicevalor;

        return $resultado;
    }

    //Executando
    $total = somartotal($precos);
    //$total = array_sum($precos);

    $media = $mediaprecosarrow($precos);

    echo "Soma Total: $total <br>";
    echo "Média: ". number_format($media, 2)."<br>";
    echo "Maior Número: ". verificarmaior($precos)."<br>";
?>