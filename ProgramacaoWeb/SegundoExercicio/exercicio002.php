<?php

    $turma = [
        "A" => [10,8,6],
        "B" => [5,3,8],
        "C" => [10,10,10],
        "D" => [8,6,3],
        "E" => [9,9,9],
        "F" => [2,3,5]
        ];
        
    $acummediaturma = 0;
    $acumnotas = 0;
    $contador = 0;
    $maiormedia = PHP_FLOAT_MIN;
    $nomemaiormedia;

    foreach($turma as $nomealuno=>$notas)
    {
        for($i = 0; $i < count($notas); $i++)
        {
            $acumnotas += $notas[$i];
        }
        $media = $acumnotas/count($notas);
        if($media >= 7){
            $contador++;
        }
        if($media > $maiormedia){
            $maiormedia = $media;
            $nomemaiormedia = $nomealuno;
        }
        $acummediaturma += $media;
        $acumnotas = 0;
        echo "A média do aluno $nomealuno é " . number_format($media,2) ."<br><br>";
    }

    $mediaturma = $acummediaturma/count($turma);

    echo "A média da turma é: " . number_format($mediaturma,2) ."<br><br>";
    echo "A quantidade de alunos na média foram: $contador <br><br>";
    echo "O aluno com maior média foi: $nomemaiormedia <br><br>";

?>