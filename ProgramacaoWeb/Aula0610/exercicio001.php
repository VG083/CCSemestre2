<?php

    //Declaração
    function verificarnumero(int $numero):void{
        if($numero >= 0){
            echo "Positivo <br>";
        }else{
            echo "Negativo <br>";
        }
    }

    //Executando função
    verificarnumero(10);

?>