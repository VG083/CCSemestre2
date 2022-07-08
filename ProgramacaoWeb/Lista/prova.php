<?php
    $array = array(
        "Jogador1" => array(
            "idade"=>18, 
            "peso"=>120, 
            "altura"=>1.80),
        "Jogador2" => array(
            "idade"=>22, 
            "peso"=>95, 
            "altura"=>1.75),
        "Jogador3" => array(
            "idade"=>25, 
            "peso"=>80, 
            "altura"=>1.80),
        "Jogador4" => array(
            "idade"=>19, 
            "peso"=>85, 
            "altura"=>1.65)
    );

    function idademenor18($var,$var1,$var2,$var3){
        $menor18 = 0;
        if($var<18){
            $menor18++;
        }
        if($var1<18){
            $menor18++;
        }
        if($var2<18){
            $menor18++;
        }
        if($var3<18){
            $menor18++;
        }
        echo "Menores de 18: $menor18";
    }
    idademenor18($array['Jogador1']['idade'],$array['Jogador2']['idade'],$array['Jogador3']['idade'],$array['Jogador4']['idade']);

    function media($var,$var1,$var2,$var3){
        $soma = 0;
        $soma += $var;
        $soma += $var1;
        $soma += $var2;
        $soma += $var3;

        $media = $soma/4;
        echo "<br>Media das idades: $media";
    }
    media($array['Jogador1']['idade'],$array['Jogador2']['idade'],$array['Jogador3']['idade'],$array['Jogador4']['idade']);
?>