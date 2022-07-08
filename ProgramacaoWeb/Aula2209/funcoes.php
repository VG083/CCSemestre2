<?php

    /*
        Estrutura da função:
    function nome(parâmetros...){
        escopo da função
    }
    */

    //Declarando função
    function somar($n1, $n2){
        $soma = $n1+$n2;
        echo "Soma: $soma <br><br>";
    }

    function subtrair($n1, $n2){
        $sub = $n1-$n2;
        echo "Subtração: $sub <br><br>";
    }

    function multiplicar($n1, $n2){
        $mult = $n1*$n2;
        echo "Multiplicação: $mult <br><br>";
    }

    function dividir($n1, $n2){
        $div = $n1/$n2;
        echo "Divisão: $div <br><br>";
    }

    //Executando função
    $n1 = 20;
    $n2 = 10;
    somar($n1, $n2);
    subtrair($n1, $n2);
    multiplicar($n1, $n2);
    dividir($n1, $n2);

?>