<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Resultado Calculadora</title>
</head>
<body>
    <?php
        function somar(float $numero1, float $numero2){
            return $numero1+$numero2;
        }
        function subtrair(float $numero1, float $numero2){
            return $numero1-$numero2;
        }
        function multiplicar(float $numero1, float $numero2){
            return $numero1*$numero2;
        }
        function dividir(float $numero1, float $numero2){
            if ($numero2 != 0){
                $res = $numero1/$numero2;
                echo "Resultado: $res";
            }else{
                echo "Não é possível dividir por zero!";
            }
        }
        
        $numero1 = (float) $_POST["numero1"];
        $numero2 = (float) $_POST["numero2"];
        $op = $_POST["operacao"];
        $resultado;

        switch($op){
            case "somar":
                $resultado = somar($numero1, $numero2);
                break;
            case "subtrair":
                $resultado = subtrair($numero1, $numero2);
                break;
            case "multiplicar":
                $resultado = multiplicar($numero1, $numero2);
                break;
            case "dividir":
                $resultado = dividir($numero1, $numero2);
                break;
        }

        if($op != "dividir")
            echo "Resultado: $resultado <br>";
    ?>
</body>
</html>