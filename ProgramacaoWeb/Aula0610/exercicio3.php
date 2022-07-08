<?php

    $precos = [10.50, 50, 35, 58, 65, 99.9, 105, 305, 2.50];

    //declaração
    function somarTotal(array $array):float{
        $acum = 0;
        for($i = 0; $i < count($array); $i++){
            $acum += $array[$i];
        }
        return $acum;
    }

    function mediaPrecos(array $a):float{
        $acum = array_sum($a);
        return $acum/count($a);
    }

    $mediaPrecosArrow = fn(array $precos) => array_sum($precos)/count($precos);

    function verificarMaior(array $precos):float{
        $maiorPreco = PHP_FLOAT_MIN;

        for($i = 0; $i < count($precos); $i++){
            if($precos[$i] > $maiorPreco){
                $maiorPreco = $precos[$i];
            }
        }

        return $maiorPreco;
    }

    function verificarMenorValorEIndice(array $precos):array{
        $menorPreco = PHP_FLOAT_MAX;
        $menorIndiceValor = 0;
        $resultado = [];

        for($i = 0; $i < count($precos); $i++){
            if($precos[$i] < $menorPreco){
                $menorPreco = $precos[$i];
                $menorIndiceValor = $i;
            }
        }

        $resultado[] = $menorPreco;
        $resultado[] = $menorIndiceValor;

        return $resultado;
    }

    function verificarMenorValorEIndiceRef(array $precos, float &$mPreco, int &$mIndice):void{
        $mPreco = min($precos);
        $mIndice = array_search($mPreco,$precos);
    }

    $menorValor = PHP_FLOAT_MAX;
    $menorIndice = 0;
    verificarMenorValorEIndiceRef($precos, $menorValor, $menorIndice);

    //executar
    $total = somarTotal($precos);
    //$total = array_sum($precos);

    $media = $mediaPrecosArrow($precos);

    $maiorPreco = max($precos);

    echo "Soma Total: $total <br>";
    echo "Média: ". number_format($media, 2)."<br>";
    echo "Maior Preço: $maiorPreco <br>";
    echo "Menor Preço: $menorValor <br>";
    echo "Menor Indice: $menorIndice <br>";
?>