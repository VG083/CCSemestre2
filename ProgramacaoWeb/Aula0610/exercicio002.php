<?php

    $calcularnovosalario = function(float  $salario):float{
        return $salario + ($salario*25/100);
    };

    $novosalario = $calcularnovosalario(1000);

    echo "Novo Salário: $novosalario <br>";
?>